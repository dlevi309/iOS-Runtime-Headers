/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIImageView *)backgroundImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTimeRemaining:(double)arg1 ;
-(void)layoutSubviews;
-(void)setUpUI;
-(void)setContentMode:(long long)arg1 ;
-(HRElectrocardiogramSessionSimulationView *)screenView;
@end

