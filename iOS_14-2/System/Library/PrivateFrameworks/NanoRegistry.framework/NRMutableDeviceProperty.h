/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRMutableStateBase.h>

@protocol NSObjectNSCopying;
@class NRPBMutableDeviceProperty;

@interface NRMutableDeviceProperty : NRMutableStateBase {

	id<NSObject><NSCopying> _value;
	NRPBMutableDeviceProperty* _protobuf;

}

@property (nonatomic,retain,readonly) id<NSObject><NSCopying> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NRPBMutableDeviceProperty * protobuf;                //@synthesize protobuf=_protobuf - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(id)enclosedClassTypes;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(id)init;
-(void)setProtobuf:(NRPBMutableDeviceProperty *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(id)description;
-(NRPBMutableDeviceProperty *)protobuf;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject><NSCopying>)value;
-(BOOL)isEqual:(id)arg1 ;
@end

