/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <libobjc.A.dylib/WDTimePeriod.h>

@protocol WDTimePeriod <NSObject>
@required
-(id)endDate;
-(id)startDate;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface WDTimePeriod : NSObject <WDTimePeriod, NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)timePeriodWithSample:(id)arg1 ;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)sleep_titleString;
@end

