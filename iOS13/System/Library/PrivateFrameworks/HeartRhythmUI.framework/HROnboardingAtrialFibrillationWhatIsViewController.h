/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HROnboardingHeroExplanationViewController.h>

@class HRVideoPlayerView;

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingHeroExplanationViewController {

	HRVideoPlayerView* _videoPlayerView;

}

@property (nonatomic,retain) HRVideoPlayerView * videoPlayerView;              //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)titleString;
-(id)bodyString;
-(HRVideoPlayerView *)videoPlayerView;
-(id)createHeroView;
-(id)buttonTitleString;
-(void)setUpUI;
-(long long)stackedButtonViewLastButtonMode;
-(id)initForOnboarding:(BOOL)arg1 ;
-(void)setVideoPlayerView:(HRVideoPlayerView *)arg1 ;
@end

