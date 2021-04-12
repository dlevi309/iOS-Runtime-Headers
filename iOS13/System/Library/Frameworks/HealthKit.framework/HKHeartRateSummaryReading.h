/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(long long)context;
-(HKQuantity *)quantity;
-(id)initWithDate:(id)arg1 quantity:(id)arg2 context:(long long)arg3 ;
-(id)initWithDate:(id)arg1 quantity:(id)arg2 ;
@end

