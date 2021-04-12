/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthVisualization.framework/HealthVisualization
*/

#import <HealthVisualization/HealthVisualization-Structs.h>
#import <AppSupportUI/NUIContainerGridView.h>

@class NSArray;

@interface HealthVisualization.HighlightCalendarView : NUIContainerGridView {

	 longWeekdayStrings;
	 shortWeekdayStrings;
	 $__lazy_storage_$_ringsRenderer;
	 weekdayLabels;
	 monthLabels;

}

@property (readonly,nonatomic) NSArray * accessibilityWeekdayLabels; 
@property (readonly,nonatomic) NSArray * accessibilityMonthLabels; 
-(NSArray *)accessibilityMonthLabels;
-(NSArray *)accessibilityWeekdayLabels;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithArrangedSubviewRows:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

