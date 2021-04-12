/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVBehaviorInternal.h>
#import <AVKit/AVHomeIPCameraActionButtonHandling.h>
#import <AVKit/AVBehavior.h>

@class AVHomeIPCameraBehaviorContext, NSString;

@interface AVHomeIPCameraBehavior : NSObject <AVBehaviorInternal, AVHomeIPCameraActionButtonHandling, AVBehavior> {

	AVHomeIPCameraBehaviorContext* _behaviorContext;

}

@property (assign,nonatomic,__weak) AVHomeIPCameraBehaviorContext * behaviorContext;              //@synthesize behaviorContext=_behaviorContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)behaviorContextClass;
-(void)willMoveToContext:(id)arg1 ;
-(AVHomeIPCameraBehaviorContext *)behaviorContext;
-(void)setBehaviorContext:(AVHomeIPCameraBehaviorContext *)arg1 ;
-(void)didMoveToContext:(id)arg1 ;
-(void)willRemoveFromContext:(id)arg1 ;
-(void)didRemoveFromContext:(id)arg1 ;
-(void)pictureInPictureActionButtonTapped;
-(void)playbackControlsDidChangePlayerVolume:(float)arg1 ;
-(void)playbackControlsDidToggleMuted:(BOOL)arg1 ;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1 ;
@end

