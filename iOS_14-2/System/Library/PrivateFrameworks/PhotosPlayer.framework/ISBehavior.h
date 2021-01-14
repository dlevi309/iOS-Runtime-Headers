/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)activeDidChange;
-(BOOL)isActive;
-(long long)behaviorType;
-(void)setDelegate:(id<ISBehaviorDelegate>)arg1 ;
-(void)becomeActive;
-(void)resignActive;
-(void)setVideoVolume:(float)arg1 ;
-(void)videoWillPlayToEnd;
-(void)videoWillPlayToPhoto;
-(void)videoDidPlayToEnd;
-(void)videoReadyForDisplayDidChange;
-(id)initWithInitialLayoutInfo:(id)arg1 ;
-(void)videoPlayerItemDidChange;
-(void)setOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setVideoPlayRate:(float)arg1 ;
-(BOOL)seekVideoPlayerToTime:(SCD_Struct_IS1)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)seekVideoPlayerToTime:(SCD_Struct_IS1)arg1 toleranceBefore:(SCD_Struct_IS1)arg2 toleranceAfter:(SCD_Struct_IS1)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)prerollVideoAtRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVideoForwardPlaybackEndTime:(SCD_Struct_IS1)arg1 ;
-(ISPlayerState *)initialLayoutInfo;
@end

