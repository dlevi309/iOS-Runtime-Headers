/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/

#import <libobjc.A.dylib/HKSleepDataSourceProvider.h>

@class NSCalendar;

@interface HKSHSleepDataSourceProvider : NSObject <HKSleepDataSourceProvider> {

	NSCalendar* _calendar;

}

@property (nonatomic,retain) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(id)initWithCalendar:(id)arg1 ;
-(id)makeSleepDataSourceFromHealthStore:(id)arg1 representativeDisplayType:(id)arg2 ;
@end

