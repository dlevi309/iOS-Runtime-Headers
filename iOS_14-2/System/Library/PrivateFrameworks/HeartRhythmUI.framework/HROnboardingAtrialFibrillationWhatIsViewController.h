/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HROnboardingHeroExplanationViewController.h>

@class HRVideoPlayerView;

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingHeroExplanationViewController {

	HRVideoPlayerView* _videoPlayerView;

}

@property (nonatomic,retain) HRVideoPlayerView * videoPlayerView;              //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)bodyString;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(HRVideoPlayerView *)videoPlayerView;
-(id)titleString;
-(void)setUpUI;
-(id)createHeroView;
-(id)buttonTitleString;
-(void)setVideoPlayerView:(HRVideoPlayerView *)arg1 ;
-(long long)stackedButtonViewLastButtonMode;
-(id)initForOnboarding:(BOOL)arg1 upgradingFromAlgorithmVersion:(long long)arg2 ;
@end

