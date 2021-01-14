/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class SCNScene, AVTAvatar, SCNNode, SCNMaterial;

@interface AVTAvatarEnvironment : NSObject {

	SCNScene* _scene;
	AVTAvatar* _avatar;
	SCNNode* _trackingLostIndicator;
	BOOL _trackingLostIndicatorVisible;
	SCNMaterial* _shadowPlaneMaterial;
	SCNNode* _whitePlane;
	SCNNode* _environmentNode;
	SCNNode* _defaultPointOfView;
	SCNNode* _animojiCamera;
	SCNNode* _memojiCameraGroup;
	SCNNode* _customCamera;
	SCNNode* _specializedLightingNode;
	SCNNode* _defaultLightingNode;

}

@property (nonatomic,readonly) SCNNode * environmentNode; 
@property (nonatomic,readonly) SCNNode * defaultPointOfView; 
@property (assign,nonatomic) BOOL showReticle; 
@property (assign,nonatomic) float fadeFactor; 
@property (nonatomic,readonly) BOOL faceIsFullyVisible; 
-(void)willSnapshot;
-(void)didSnapshot;
-(id)initAndInstallInScene:(id)arg1 ;
-(void)setShowReticle:(BOOL)arg1 ;
-(void)avatarDidChange:(id)arg1 arMode:(BOOL)arg2 ;
-(SCNNode *)defaultPointOfView;
-(id)defaultEnvironmentNode;
-(void)updateCustomCameras;
-(void)updateSpecializedLighting;
-(void)updateARMode:(BOOL)arg1 ;
-(void)showTrackingLossIndicator;
-(void)hideTrackingLossIndicator;
-(SCNNode *)environmentNode;
-(BOOL)showReticle;
-(void)hideReticle;
-(void)setFadeFactor:(float)arg1 ;
-(float)fadeFactor;
-(BOOL)faceIsFullyVisible;
@end

