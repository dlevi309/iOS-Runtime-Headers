/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/

#import <SleepHealthUI/SleepHealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface HKSHSleepScheduleComponentsHeader : UIView {

	 bedtimeTitleLabel;
	 wakeUpTitleLabel;
	 bedtimeTimeLabel;
	 wakeUpTimeLabel;
	 $__lazy_storage_$_bedtimeDayLabel;
	 $__lazy_storage_$_wakeUpDayLabel;
	 sizingTimeLabel;
	 isIn24HourTime;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)accessibilityBedtimeTimeLabel;
-(id)accessibilityWakeUpTimeLabel;
@end

