/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLLazyObject;

@interface PLDateRangeTitleGenerator : NSObject {

	PLLazyObject* _lazyRecentDateRangeFormatter;
	PLLazyObject* _lazyDateRangeFormatter;
	PLLazyObject* _lazyYearlessDateRangeFormatter;
	PLLazyObject* _lazyMonthDateRangeFormatter;
	PLLazyObject* _lazyShortMonthDateRangeFormatter;
	PLLazyObject* _lazyYearDateRangeFormatter;

}
-(id)init;
-(id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4 ;
-(id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4 options:(unsigned long long)arg5 ;
-(id)_dateRangeFormatterForCategory:(unsigned short)arg1 kind:(unsigned short)arg2 options:(unsigned long long)arg3 ;
-(id)newRecentDateRangeFormatter;
-(id)newDateRangeFormatter;
-(id)newYearlessDateRangeFormatter;
-(id)newMonthDateRangeFormatter;
-(id)newShortMonthDateRangeFormatter;
-(id)newYearDateRangeFormatter;
-(id)recentDateRangeFormatter;
-(id)dateRangeFormatter;
-(id)yearlessDateRangeFormatter;
-(id)monthDateRangeFormatter;
-(id)shortMonthDateRangeFormatter;
-(id)yearDateRangeFormatter;
@end

