/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>
#import <libobjc.A.dylib/_SCNSceneRendererDelegateSPI.h>

@class SCNRenderer, AVTAvatar, SCNNode, AVTAvatarEnvironment, NSString;

@interface AVTSnapshotBuilder : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {

	SCNRenderer* _renderer;
	AVTAvatar* _avatar;
	AVTAvatar* _snapshotedAvatar;
	SCNNode* _avatarNode;
	AVTAvatarEnvironment* _environment;

}

@property (nonatomic,retain) AVTAvatar * avatar; 
@property (nonatomic,readonly) SCNRenderer * renderer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(CGImageRef)copyRescaledCGImage:(CGImageRef)arg1 by:(float)arg2 ;
-(id)init;
-(AVTAvatar *)avatar;
-(void)setAvatar:(AVTAvatar *)arg1 ;
-(SCNRenderer *)renderer;
-(id)_renderer:(id)arg1 subdivDataForHash:(id)arg2 ;
-(void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(/*^block*/id)arg3 ;
-(void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2 ;
-(id)imageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(id)animatedImageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(id)_imageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 useACopy:(BOOL)arg4 ;
-(void)setupAvatarWithOptions:(id)arg1 useACopy:(BOOL)arg2 ;
-(void)_applyOptions:(id)arg1 ;
-(id)_imageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
@end

