/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HKQuantity, NSDateInterval, NSData;

@interface HKQuantityDatum : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _UUID;
	HKQuantity* _quantity;
	NSDateInterval* _dateInterval;
	NSData* _resumeContext;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * quantity;                      //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSData * resumeContext;                     //@synthesize resumeContext=_resumeContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSDateInterval *)dateInterval;
-(HKQuantity *)quantity;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 quantity:(id)arg3 resumeContext:(id)arg4 ;
-(NSData *)resumeContext;
@end

