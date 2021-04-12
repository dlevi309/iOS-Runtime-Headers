/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/_REPeriodOfDayProperties.h>

@class NSDate, NSDateInterval;

@interface _REPeriodOfDay : NSObject <_REPeriodOfDayProperties> {

	unsigned long long _periodOfDay;
	NSDateInterval* _interval;

}

@property (nonatomic,readonly) NSDateInterval * interval;                   //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) unsigned long long periodOfDay;              //@synthesize periodOfDay=_periodOfDay - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDateInterval *)interval;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned long long)periodOfDay;
-(id)initWithInterval:(id)arg1 periodOfDay:(unsigned long long)arg2 ;
@end

