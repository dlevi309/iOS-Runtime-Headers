/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, ADPrerollSlider;

@interface ADProgressView : UIView {

	UILabel* _elapsedTimeLabel;
	UILabel* _remainingTimeLabel;
	ADPrerollSlider* _slider;

}

@property (nonatomic,retain) UILabel * elapsedTimeLabel;                //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * remainingTimeLabel;              //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (nonatomic,retain) ADPrerollSlider * slider;                  //@synthesize slider=_slider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(ADPrerollSlider *)slider;
-(void)setSlider:(ADPrerollSlider *)arg1 ;
-(UILabel *)elapsedTimeLabel;
-(void)setElapsedTime:(double)arg1 totalTime:(double)arg2 ;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(UILabel *)remainingTimeLabel;
@end

