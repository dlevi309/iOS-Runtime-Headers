/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
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
	SCNNode* _specializedLightingNode;
	SCNNode* _defaultLightingNode;

}

@property (nonatomic,readonly) SCNNode * environmentNode; 
@property (nonatomic,readonly) SCNNode * defaultPointOfView; 
@property (assign,nonatomic) BOOL showReticle; 
@property (assign,nonatomic) float fadeFactor; 
@property (nonatomic,readonly) BOOL faceIsFullyVisible; 
+(void)triggerCrossFadeFromImage:(id)arg1 withScene:(id)arg2 pointOfView:(id)arg3 device:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)willSnapshot;
-(void)didSnapshot;
-(id)initAndInstallInScene:(id)arg1 ;
-(void)setShowReticle:(BOOL)arg1 ;
-(void)avatarDidChange:(id)arg1 arMode:(BOOL)arg2 ;
-(SCNNode *)defaultPointOfView;
-(id)defaultEnvironmentNode;
-(void)updateSpecializedLighting;
-(void)updateARMode:(BOOL)arg1 ;
-(void)showTrackingLossIndicator;
-(void)hideTrackingLossIndicator;
-(SCNNode *)environmentNode;
-(BOOL)showReticle;
-(void)hideReticle;
-(void)setFadeFactor:(float)arg1 ;
-(float)fadeFactor;
-(id)transitionTextureWithSize:(CGSize)arg1 renderer:(id)arg2 ;
-(BOOL)faceIsFullyVisible;
@end

