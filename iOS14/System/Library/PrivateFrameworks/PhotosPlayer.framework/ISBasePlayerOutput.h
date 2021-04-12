/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol ISBasePlayerOutput <NSObject>
@property (nonatomic,readonly) BOOL isVideoReadyForDisplay; 
@property (nonatomic,copy) id videoLayerReadyForDisplayChangeHandler; 
@optional
-(void)setVideoLayerReadyForDisplayChangeHandler:(/*^block*/id)arg1;
-(id)videoLayerReadyForDisplayChangeHandler;
-(BOOL)isVideoReadyForDisplay;

@required
-(void)setContent:(id)arg1;
-(void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3;

@end

