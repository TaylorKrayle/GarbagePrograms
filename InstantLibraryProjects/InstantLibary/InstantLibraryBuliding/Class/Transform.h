////////////////////////////////////////////////////////////////////////////
//
//　　　Transform.h
//
////////////////////////////////////////////////////////////////////////////
//===========インクルードガード=============================================
#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include <Eigen/Core>
#include <Eigen/Geometry>

//===========インクルードファイル===========================================
//=============マクロ宣言===================================================
//============クラス・構造体================================================
// 前方宣言
class GameObject;

// Transformクラス
class Transform
{
public:
	Transform();		// コンストラクタ
	~Transform() {}		// デストラクタ

	void Update(void);

private:
	Eigen::Vector3f position;	// 座標
	Eigen::Vector3f rotation;	// 回転
	Eigen::Vector3f scale;		// 大きさ

	Eigen::Matrix4f matrix;		// 座標行列
	// 座標変換行列の掛け算は、通常『拡大縮小』×『回転』×『移動』の順に行います

	GameObject* gameObject;
};

//===========プロトタイプ宣言===============================================

#endif
/* ---------------------------END OF FILE--------------------------------- */
