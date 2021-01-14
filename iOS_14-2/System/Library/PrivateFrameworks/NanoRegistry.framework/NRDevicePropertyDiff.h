/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>

@protocol NSObjectNSCopying;
@class NRPBDevicePropertyDiff;

@interface NRDevicePropertyDiff : NRDiffBase {

	id<NSObject><NSCopying> _value;

}

@property (nonatomic,readonly) id<NSObject><NSCopying> value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NRPBDevicePropertyDiff * protobuf; 
+(BOOL)supportsSecureCoding;
+(id)unpackPropertyValue:(id)arg1 ;
+(id)packPropertyValue:(id)arg1 ;
+(id)enclosedClassTypes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)description;
-(NRPBDevicePropertyDiff *)protobuf;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject><NSCopying>)value;
-(BOOL)isEqual:(id)arg1 ;
@end

