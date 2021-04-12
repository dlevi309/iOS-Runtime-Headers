/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol ISBehaviorDelegate;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISPlayerState;

@interface ISBehavior : NSObject {

	BOOL _active;
	id<ISBehaviorDelegate> _delegate;
	ISPlayerState* _initialLayoutInfo;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                       //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) id<ISBehaviorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ISPlayerState * initialLayoutInfo;                 //@synthesize initialLayoutInfo=_initialLayoutInfo - In the implementation block
@property (nonatomic,readonly) long long behaviorType; 
-(id<ISBehaviorDelegate>)delegate;
-(void)setDelegate:(id<ISBehaviorDelegate>)arg1 ;
-(BOOL)isActive;
-(void)becomeActive;
-(void)resignActive;
-(long long)behaviorType;
-(void)setVideoVolume:(float)arg1 ;
-(void)videoWillPlayToEnd;
-(void)videoWillPlayToPhoto;
-(void)videoDidPlayToEnd;
-(void)videoReadyForDisplayDidChange;
-(id)initWithInitialLayoutInfo:(id)arg1 ;
-(void)activeDidChange;
-(void)videoPlayerItemDidChange;
-(void)setOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setVideoPlayRate:(float)arg1 ;
-(BOOL)seekVideoPlayerToTime:(SCD_Struct_IS1)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)seekVideoPlayerToTime:(SCD_Struct_IS1)arg1 toleranceBefore:(SCD_Struct_IS1)arg2 toleranceAfter:(SCD_Struct_IS1)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)prerollVideoAtRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVideoForwardPlaybackEndTime:(SCD_Struct_IS1)arg1 ;
-(ISPlayerState *)initialLayoutInfo;
@end

