/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol ISBasePlayerOutput <NSObject>
@property (nonatomic,readonly) BOOL isVideoReadyForDisplay; 
@property (nonatomic,copy) id videoLayerReadyForDisplayChangeHandler; 
@optional
-(BOOL)isVideoReadyForDisplay;
-(void)setVideoLayerReadyForDisplayChangeHandler:(/*^block*/id)arg1;
-(id)videoLayerReadyForDisplayChangeHandler;

@required
-(void)setContent:(id)arg1;
-(void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3;

@end

