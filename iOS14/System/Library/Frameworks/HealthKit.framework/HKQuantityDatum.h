/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	/*^block*/id _saveCompletion;

}

@property (nonatomic,copy) id saveCompletion;                                   //@synthesize saveCompletion=_saveCompletion - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * quantity;                      //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSData * resumeContext;                     //@synthesize resumeContext=_resumeContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(NSUUID *)UUID;
-(id)init;
-(void)setSaveCompletion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQuantity *)quantity;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)saveCompletion;
-(NSData *)resumeContext;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 quantity:(id)arg3 resumeContext:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

