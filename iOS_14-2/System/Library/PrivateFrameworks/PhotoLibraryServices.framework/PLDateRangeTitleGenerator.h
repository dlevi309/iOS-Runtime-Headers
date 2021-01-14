/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLLazyObject;

@interface PLDateRangeTitleGenerator : NSObject {

	PLLazyObject* _lazyRecentDateRangeFormatter;
	PLLazyObject* _lazyDateRangeFormatter;
	PLLazyObject* _lazyYearlessDateRangeFormatter;
	PLLazyObject* _lazyMonthYearDateRangeFormatter;
	PLLazyObject* _lazyShortMonthYearDateRangeFormatter;
	PLLazyObject* _lazyYearDateRangeFormatter;

}
-(id)newShortMonthYearDateRangeFormatter;
-(id)init;
-(id)monthYearDateRangeFormatter;
-(id)yearDateRangeFormatter;
-(id)shortMonthYearDateRangeFormatter;
-(id)newDateRangeFormatter;
-(id)newMonthYearDateRangeFormatter;
-(id)dateRangeFormatter;
-(id)newYearlessDateRangeFormatter;
-(id)yearlessDateRangeFormatter;
-(id)dateRangeFormatterForCategory:(unsigned short)arg1 kind:(unsigned short)arg2 options:(unsigned long long)arg3 ;
-(id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4 options:(unsigned long long)arg5 ;
-(id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4 ;
-(id)newYearDateRangeFormatter;
-(id)newRecentDateRangeFormatter;
-(id)recentDateRangeFormatter;
@end

