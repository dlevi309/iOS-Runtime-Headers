/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HKDevice, NSString, NSArray;

@interface _HKFitnessMachine : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	unsigned long long _type;
	unsigned long long _activityType;
	HKDevice* _device;
	NSString* _brand;
	NSArray* _requestedTypes;

}

@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) HKDevice * device;                            //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * brand;                             //@synthesize brand=_brand - In the implementation block
@property (nonatomic,readonly) NSArray * requestedTypes;                     //@synthesize requestedTypes=_requestedTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(unsigned long long)activityType;
-(HKDevice *)device;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_setActivityType:(unsigned long long)arg1 ;
-(void)_setDevice:(id)arg1 ;
-(NSString *)brand;
-(void)_setBrand:(id)arg1 ;
-(void)_setRequestedTypes:(id)arg1 ;
-(NSArray *)requestedTypes;
@end

