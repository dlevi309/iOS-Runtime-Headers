/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDateFormatter, PLDateRangeFormatter, NSString, NSArray;

@interface PLSearchIndexDateFormatter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDateFormatter* _dateFormatter;
	PLDateRangeFormatter* _dateRangeFormatter;
	NSString* _yearFormat;
	NSString* _monthFormat;
	NSString* _displayFormat;
	NSString* _parseFormat;
	NSArray* _monthSymbols;
	BOOL _didSetupLocaleAndFormats;

}
+(id)monthFormatForLocale:(id)arg1 ;
+(id)yearFormatForLocale:(id)arg1 ;
-(id)_inqNewLocalizedStringFromDate:(id)arg1 ;
-(id)init;
-(id)localizedSeasonNameFromDate:(id)arg1 ;
-(id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(BOOL)arg2 ;
-(id)newLocalizedStringFromDate:(id)arg1 ;
-(id)_arrangedMonthSymbols;
-(void)_inqSetupDateFormatter;
-(void)_inqUpdateDateFormat:(id)arg1 ;
-(id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2 ;
-(id)localizedMonthStringsFromDate:(id)arg1 ;
-(id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
@end

