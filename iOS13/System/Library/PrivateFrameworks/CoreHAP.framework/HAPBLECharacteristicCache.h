/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)characteristicUUID;
-(NSNumber *)characteristicInstanceId;
-(unsigned long long)characteristicProperties;
-(void)setCharacteristicProperties:(unsigned long long)arg1 ;
-(HAPCharacteristicMetadata *)characteristicMetadata;
-(void)setCharacteristicMetadata:(HAPCharacteristicMetadata *)arg1 ;
-(id)initWithCharacteristicUUID:(id)arg1 instanceId:(id)arg2 characteristicProperties:(unsigned long long)arg3 characteristicMetadata:(id)arg4 ;
-(void)updateWithCharacteristic:(id)arg1 ;
@end

