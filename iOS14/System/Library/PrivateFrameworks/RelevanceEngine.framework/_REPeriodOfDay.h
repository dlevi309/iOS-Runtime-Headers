/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(NSDateInterval *)interval;
-(NSDate *)startDate;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)periodOfDay;
-(id)initWithInterval:(id)arg1 periodOfDay:(unsigned long long)arg2 ;
@end

