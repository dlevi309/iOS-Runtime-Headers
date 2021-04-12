/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSNumber, HAPCharacteristicMetadata;

@interface HAPBTLECharacteristicSignature : HMFObject {

	BOOL _authenticated;
	NSUUID* _characteristicType;
	NSNumber* _serviceInstanceID;
	NSUUID* _serviceType;
	unsigned long long _characteristicProperties;
	HAPCharacteristicMetadata* _characteristicMetadata;

}

@property (nonatomic,copy,readonly) NSUUID * characteristicType;                                //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * serviceInstanceID;                               //@synthesize serviceInstanceID=_serviceInstanceID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * serviceType;                                       //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) unsigned long long characteristicProperties;                     //@synthesize characteristicProperties=_characteristicProperties - In the implementation block
@property (nonatomic,readonly) HAPCharacteristicMetadata * characteristicMetadata;              //@synthesize characteristicMetadata=_characteristicMetadata - In the implementation block
@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated;                       //@synthesize authenticated=_authenticated - In the implementation block
-(NSUUID *)serviceType;
-(NSUUID *)characteristicType;
-(BOOL)isAuthenticated;
-(unsigned long long)characteristicProperties;
-(HAPCharacteristicMetadata *)characteristicMetadata;
-(NSNumber *)serviceInstanceID;
-(id)initWithCharacteristicType:(id)arg1 serviceInstanceID:(id)arg2 serviceType:(id)arg3 characteristicProperties:(unsigned long long)arg4 characteristicMetadata:(id)arg5 authenticated:(BOOL)arg6 ;
@end

