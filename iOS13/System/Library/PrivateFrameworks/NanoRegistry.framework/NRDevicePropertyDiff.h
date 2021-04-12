/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)enclosedClassTypes;
+(id)unpackPropertyValue:(id)arg1 ;
+(id)packPropertyValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying>)value;
-(id)initWithValue:(id)arg1 ;
-(NRPBDevicePropertyDiff *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
@end

