/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber, HAPCharacteristicMetadata;

@interface HAPBLECharacteristicCache : HMFObject <NSSecureCoding> {

	NSUUID* _characteristicUUID;
	NSNumber* _characteristicInstanceId;
	unsigned long long _characteristicProperties;
	HAPCharacteristicMetadata* _characteristicMetadata;

}

@property (assign,nonatomic) unsigned long long characteristicProperties;                     //@synthesize characteristicProperties=_characteristicProperties - In the implementation block
@property (nonatomic,retain) HAPCharacteristicMetadata * characteristicMetadata;              //@synthesize characteristicMetadata=_characteristicMetadata - In the implementation block
@property (nonatomic,readonly) NSUUID * characteristicUUID;                                   //@synthesize characteristicUUID=_characteristicUUID - In the implementation block
@property (nonatomic,readonly) NSNumber * characteristicInstanceId;                           //@synthesize characteristicInstanceId=_characteristicInstanceId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HAPCharacteristicMetadata *)characteristicMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)characteristicProperties;
-(void)setCharacteristicProperties:(unsigned long long)arg1 ;
-(NSUUID *)characteristicUUID;
-(NSNumber *)characteristicInstanceId;
-(void)setCharacteristicMetadata:(HAPCharacteristicMetadata *)arg1 ;
-(id)initWithCharacteristicUUID:(id)arg1 instanceId:(id)arg2 characteristicProperties:(unsigned long long)arg3 characteristicMetadata:(id)arg4 ;
-(void)updateWithCharacteristic:(id)arg1 ;
@end

