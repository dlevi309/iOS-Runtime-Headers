/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/

#import <SleepHealthUI/SleepHealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface HKSHSleepScheduleComponentsEditView : UIView {

	 componentsHeader;
	 clock;
	 timeInBed;
	 clockCaption;
	 clockWidthConstraint;
	 captionTopConstraint;
	 $__lazy_storage_$_formatter;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)clockDidChange:(id)arg1 ;
-(id)accessibilityComponentsHeader;
-(id)accessibilityClock;
-(id)accessibilityClockCaption;
-(id)accessibilityTimeInBedLabel;
@end

