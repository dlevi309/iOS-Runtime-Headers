/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class UIViewController, AVPlayerViewController, NSString;


@protocol MPCVideoOutput <NSObject>
@property (assign,nonatomic,__weak) id<MPCVideoOutputDelegate> videoOutputDelegate; 
@property (nonatomic,readonly) UIViewController * playerViewController; 
@property (nonatomic,readonly) AVPlayerViewController * avPlayerViewController; 
@property (assign,nonatomic) BOOL showsPlaybackControls; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@required
-(void)setVideoGravity:(id)arg1;
-(NSString *)videoGravity;
-(void)showFullScreenPresentationFromView:(id)arg1 completion:(/*^block*/id)arg2;
-(UIViewController *)playerViewController;
-(BOOL)isReadyForDisplay;
-(void)exitFullScreenWithCompletion:(/*^block*/id)arg1;
-(void)enterFullScreenWithCompletion:(/*^block*/id)arg1;
-(void)setShowsPlaybackControls:(BOOL)arg1;
-(BOOL)showsPlaybackControls;
-(AVPlayerViewController *)avPlayerViewController;
-(CGRect)videoBounds;
-(id<MPCVideoOutputDelegate>)videoOutputDelegate;
-(void)setVideoOutputDelegate:(id)arg1;

@end

