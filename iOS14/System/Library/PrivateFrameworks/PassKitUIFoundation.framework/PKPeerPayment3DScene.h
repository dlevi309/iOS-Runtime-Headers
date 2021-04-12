/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <SceneKit/SCNScene.h>

@class SCNNode, SCNMaterial;

@interface PKPeerPayment3DScene : SCNScene {

	SCNNode* _lightNode;
	SCNNode* _cameraNode;
	SCNNode* _textContainerNode;
	SCNMaterial* _textMaterial;
	 _currentSkew;
	 _currentRollPitch;
	SCD_Struct_PK0 _currentRotationMatrix;

}

@property (nonatomic,retain) SCNNode * lightNode;                               //@synthesize lightNode=_lightNode - In the implementation block
@property (nonatomic,retain) SCNNode * cameraNode;                              //@synthesize cameraNode=_cameraNode - In the implementation block
@property (nonatomic,retain) SCNNode * textContainerNode;                       //@synthesize textContainerNode=_textContainerNode - In the implementation block
@property (assign,nonatomic) SCD_Struct_PK0 currentRotationMatrix;              //@synthesize currentRotationMatrix=_currentRotationMatrix - In the implementation block
@property (assign,nonatomic)  currentSkew;                                      //@synthesize currentSkew=_currentSkew - In the implementation block
@property (assign,nonatomic)  currentRollPitch;                                 //@synthesize currentRollPitch=_currentRollPitch - In the implementation block
@property (nonatomic,retain) SCNMaterial * textMaterial;                        //@synthesize textMaterial=_textMaterial - In the implementation block
+(1)staticRollPitch;
+(SCD_Struct_PK0)rotationMatrixForRollPitch:;
+(2)skewForRollPitch:;
-(void)resetScene;
-(id)init;
-(SCNNode *)textContainerNode;
-(SCNMaterial *)textMaterial;
-()currentRollPitch;
-(SCD_Struct_PK0)currentRotationMatrix;
-(SCNNode *)lightNode;
-()currentSkew;
-(void)setCameraNode:(SCNNode *)arg1 ;
-(void)setTextContainerNode:(SCNNode *)arg1 ;
-(void)setLightNode:(SCNNode *)arg1 ;
-(void)setTextMaterial:(SCNMaterial *)arg1 ;
-(SCNNode *)cameraNode;
-(void)setCurrentRotationMatrix:(SCD_Struct_PK0)arg1 ;
-(void)setCurrentSkew:;
-(void)setCurrentRollPitch:;
@end

