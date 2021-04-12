/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class SCNNode, SCNMaterial;

@interface AVTPupilReflectionCorrectionDescriptor : NSObject {

	SCNNode* _readMorpherNode;
	SCNMaterial* _leftEyeMaterial;
	SCNMaterial* _rightEyeMaterial;
	long long _leftEyeTargetIndex;
	long long _rightEyeTargetIndex;

}

@property (nonatomic,retain) SCNNode * readMorpherNode;                   //@synthesize readMorpherNode=_readMorpherNode - In the implementation block
@property (nonatomic,retain) SCNMaterial * leftEyeMaterial;               //@synthesize leftEyeMaterial=_leftEyeMaterial - In the implementation block
@property (nonatomic,retain) SCNMaterial * rightEyeMaterial;              //@synthesize rightEyeMaterial=_rightEyeMaterial - In the implementation block
@property (assign,nonatomic) long long leftEyeTargetIndex;                //@synthesize leftEyeTargetIndex=_leftEyeTargetIndex - In the implementation block
@property (assign,nonatomic) long long rightEyeTargetIndex;               //@synthesize rightEyeTargetIndex=_rightEyeTargetIndex - In the implementation block
-(SCNNode *)readMorpherNode;
-(void)setReadMorpherNode:(SCNNode *)arg1 ;
-(SCNMaterial *)leftEyeMaterial;
-(void)setLeftEyeMaterial:(SCNMaterial *)arg1 ;
-(SCNMaterial *)rightEyeMaterial;
-(void)setRightEyeMaterial:(SCNMaterial *)arg1 ;
-(long long)leftEyeTargetIndex;
-(void)setLeftEyeTargetIndex:(long long)arg1 ;
-(long long)rightEyeTargetIndex;
-(void)setRightEyeTargetIndex:(long long)arg1 ;
@end

