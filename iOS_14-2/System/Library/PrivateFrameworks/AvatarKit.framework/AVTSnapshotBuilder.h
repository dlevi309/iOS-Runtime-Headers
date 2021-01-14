/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>
#import <libobjc.A.dylib/_SCNSceneRendererDelegateSPI.h>

@class AVTAvatar, AVTRenderer, SCNRenderer, NSString;

@interface AVTSnapshotBuilder : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {

	AVTAvatar* _avatar;
	AVTAvatar* _snapshotedAvatar;
	AVTRenderer* _renderer;

}

@property (nonatomic,retain) AVTAvatar * avatar; 
@property (nonatomic,readonly) SCNRenderer * renderer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(CGImageRef)copyRescaledCGImage:(CGImageRef)arg1 by:(float)arg2 ;
-(AVTAvatar *)avatar;
-(id)init;
-(SCNRenderer *)renderer;
-(void)setAvatar:(AVTAvatar *)arg1 ;
-(id)imageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(id)animatedImageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(id)_imageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 useACopy:(BOOL)arg4 ;
-(void)setupAvatarWithOptions:(id)arg1 useACopy:(BOOL)arg2 ;
-(void)_applyOptions:(id)arg1 ;
-(id)_imageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
@end

