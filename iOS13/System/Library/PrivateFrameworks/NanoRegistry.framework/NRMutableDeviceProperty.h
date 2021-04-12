/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)enclosedClassTypes;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying>)value;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)setProtobuf:(NRPBMutableDeviceProperty *)arg1 ;
-(NRPBMutableDeviceProperty *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
@end

