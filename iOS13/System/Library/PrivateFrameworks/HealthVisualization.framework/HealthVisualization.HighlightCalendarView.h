/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)accessibilityWeekdayLabels;
-(NSArray *)accessibilityMonthLabels;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithArrangedSubviewRows:(id)arg1 ;
@end

