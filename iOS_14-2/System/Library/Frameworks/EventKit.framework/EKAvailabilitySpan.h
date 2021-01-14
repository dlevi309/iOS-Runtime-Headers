/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/CalDateRangeProtocol.h>

@class NSDate, NSString;

@interface EKAvailabilitySpan : NSObject <CalDateRangeProtocol> {

	long long _type;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)description;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3 ;
-(long long)type;
@end

