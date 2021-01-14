/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLHighlightItemClustererRule.h>
#import <libobjc.A.dylib/PLHighlightItemPromoterRule.h>

@class NSCalendar, NSString;

@interface PLMonthGroupingRule : NSObject <PLHighlightItemClustererRule, PLHighlightItemPromoterRule> {

	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSCalendar * calendar;               //@synthesize calendar=_calendar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)init;
-(NSCalendar *)calendar;
-(id)dominantMonthDateComponentForStartDateComponents:(id)arg1 endDateComponents:(id)arg2 numberOfDaysInMonthOfStartDate:(long long)arg3 ;
-(BOOL)highlightItem:(id)arg1 belongsToHighlightItemList:(id)arg2 ;
-(BOOL)highlightItemHasMinimumRequirementToBePromoted:(id)arg1 ;
-(unsigned long long)maximumNumberOfHighlightItemsToPromote;
-(BOOL)highlightItemList:(id)arg1 canBeMergedWithOtherHighlightItemList:(id)arg2 ;
-(id)fallbackHighlightItemFromAllHighlightItems:(id)arg1 ;
-(id)highlightItemsSortedByImportance:(id)arg1 ;
-(void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 forceUpdateLocale:(BOOL)arg3 resultBlock:(/*^block*/id)arg4 ;
@end

