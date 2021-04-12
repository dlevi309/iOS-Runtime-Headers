/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, HKQuantity;

@interface HKHeartRateSummaryReading : NSObject <NSSecureCoding> {

	NSDate* _date;
	HKQuantity* _quantity;
	long long _context;

}

@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) HKQuantity * quantity;              //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,readonly) long long context;                  //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDate:(id)arg1 quantity:(id)arg2 context:(long long)arg3 ;
-(id)initWithDate:(id)arg1 quantity:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQuantity *)quantity;
-(long long)context;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(BOOL)isEqual:(id)arg1 ;
@end

