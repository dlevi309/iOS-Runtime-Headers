/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HKDevice, NSString;

@interface _HKFitnessMachine : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	unsigned long long _type;
	unsigned long long _activityType;
	HKDevice* _device;
	NSString* _brand;

}

@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) HKDevice * device;                            //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * brand;                             //@synthesize brand=_brand - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_setActivityType:(unsigned long long)arg1 ;
-(void)_setBrand:(id)arg1 ;
-(NSString *)brand;
-(unsigned long long)activityType;
-(void)encodeWithCoder:(id)arg1 ;
-(HKDevice *)device;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)_setDevice:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

