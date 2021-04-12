/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, HRElectrocardiogramSessionSimulationView;

@interface HROnboardingWristImageView : UIView {

	UIImageView* _backgroundImageView;
	HRElectrocardiogramSessionSimulationView* _screenView;

}

@property (nonatomic,readonly) UIImageView * backgroundImageView;                                  //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) HRElectrocardiogramSessionSimulationView * screenView;              //@synthesize screenView=_screenView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)backgroundImageView;
-(void)setTimeRemaining:(double)arg1 ;
-(void)setUpUI;
-(HRElectrocardiogramSessionSimulationView *)screenView;
@end

