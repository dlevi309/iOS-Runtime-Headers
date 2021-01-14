/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTCarrierSpaceDataPlanMetricsItem : NSObject <NSSecureCoding> {

	BOOL _capacityValid;
	NSNumber* _capacityBytes;
	long long _units;
	unsigned long long _capacity;

}

@property (nonatomic,retain) NSNumber * capacityBytes;                 //@synthesize capacityBytes=_capacityBytes - In the implementation block
@property (assign,nonatomic) BOOL capacityValid;                       //@synthesize capacityValid=_capacityValid - In the implementation block
@property (assign,nonatomic) long long units;                          //@synthesize units=_units - In the implementation block
@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)units;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)setUnits:(long long)arg1 ;
-(NSNumber *)capacityBytes;
-(void)setCapacityBytes:(NSNumber *)arg1 ;
-(id)init;
-(unsigned long long)capacity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)capacityValid;
-(void)setCapacityValid:(BOOL)arg1 ;
@end

