/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSampleListDataProvider.h>

@class NSDateFormatter, NSCalendar;

@interface WDSleepScheduleListDataProvider : WDSampleListDataProvider {

	NSDateFormatter* _standaloneFormatter;
	NSDateFormatter* _listItemFormatter;
	NSCalendar* _gregorianCalender;

}
-(id)sampleTypes;
-(id)titleForSection:(unsigned long long)arg1 ;
-(long long)cellStyle;
-(id)textForObject:(id)arg1 ;
-(id)secondaryTextForObject:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
@end

