/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class HKMCDayViewModel, NSDate;

@interface MenstrualCyclesAppPlugin.TimelineDayCell : UICollectionViewCell <CAAnimationDelegate> {

	 supplementaryDisplayTypes;
	 cycleDay;
	 $__lazy_storage_$_fertilityProjectionReversed;
	 $__lazy_storage_$_menstruationProjectionHighReversed;
	 $__lazy_storage_$_menstruationProjectionLowReversed;
	 didUpdateFromCycleDay;
	 $__lazy_storage_$_dayOfWeekLabel;
	 $__lazy_storage_$_formatter;
	 $__lazy_storage_$_logIndicator;
	 $__lazy_storage_$_pill;
	 $__lazy_storage_$_menstruationIndicator;
	 zoomLevel;
	 configuration;

}

@property (readonly,nonatomic) HKMCDayViewModel * axCycleDayViewModel; 
@property (readonly,nonatomic) NSDate * axCycleDay; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(HKMCDayViewModel *)axCycleDayViewModel;
-(NSDate *)axCycleDay;
@end

