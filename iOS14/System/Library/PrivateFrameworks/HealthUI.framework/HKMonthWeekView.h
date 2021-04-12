/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKCalendarWeekView.h>

@class CALayer, NSArray;

@interface HKMonthWeekView : HKCalendarWeekView {

	BOOL _displaysMonthTitle;
	BOOL _displaysTopBorderLine;
	BOOL _isRTL;
	CALayer* _topBorderLine;
	BOOL _accessoryContentsFetched;
	NSArray* _accessoryViews;

}

@property (nonatomic,readonly) NSArray * accessoryViews;                 //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (assign,nonatomic) BOOL accessoryContentsFetched;              //@synthesize accessoryContentsFetched=_accessoryContentsFetched - In the implementation block
-(Class)cellClass;
-(void)layoutSubviews;
-(NSArray *)accessoryViews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithDateCache:(id)arg1 displaysMonthTitle:(BOOL)arg2 displaysTopBorderLine:(BOOL)arg3 ;
-(void)setTitleHighlighted:(BOOL)arg1 ;
-(void)setMonthWeekStart:(id)arg1 ;
-(id)cellMatchingDate:(id)arg1 ;
-(BOOL)accessoryContentsFetched;
-(void)setAccessoryContentsFetched:(BOOL)arg1 ;
-(Class)monthTitleClass;
-(BOOL)supportsRTL;
-(BOOL)containsMonthTitle;
-(void)selectedCalendarDay:(id)arg1 ;
-(void)clearAccessoryViews;
-(CGRect)_frameForTopBorderLine;
@end

