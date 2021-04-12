/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class HKMCDayViewModel, NSDate;

@interface MenstrualCyclesAppPlugin.TimelineDayCell : UICollectionViewCell <CAAnimationDelegate> {

	??? gregorianCalendar;
	 supplementaryDisplayTypes;
	 cycleDay;
	??? startDate;
	 $__lazy_storage_$_fertilityProjectionReversed;
	 $__lazy_storage_$_menstruationProjectionHighReversed;
	 $__lazy_storage_$_menstruationProjectionLowReversed;
	 didUpdateFromCycleDay;
	 $__lazy_storage_$_dayOfWeekLabel;
	 $__lazy_storage_$_formatter;
	 $__lazy_storage_$_pill;
	 $__lazy_storage_$_pillMask;
	 $__lazy_storage_$_menstruationIndicator;
	 $__lazy_storage_$_menstruationIndicatorMask;
	 $__lazy_storage_$_logIndicator;
	 zoomLevel;
	 configuration;

}

@property (readonly,nonatomic) HKMCDayViewModel * axCycleDayViewModel; 
@property (readonly,nonatomic) NSDate * axCycleDay; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(HKMCDayViewModel *)axCycleDayViewModel;
-(NSDate *)axCycleDay;
@end

