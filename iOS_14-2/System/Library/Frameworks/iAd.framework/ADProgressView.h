/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ADPrerollSlider *)slider;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)remainingTimeLabel;
-(UILabel *)elapsedTimeLabel;
-(void)layoutSubviews;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(void)setSlider:(ADPrerollSlider *)arg1 ;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(void)setElapsedTime:(double)arg1 totalTime:(double)arg2 ;
@end

