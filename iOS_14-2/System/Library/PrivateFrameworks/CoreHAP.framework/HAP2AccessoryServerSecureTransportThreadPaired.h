/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerSecureTransportPairVerify.h>

@class HAPSecuritySessionEncryption;

@interface HAP2AccessoryServerSecureTransportThreadPaired : HAP2AccessoryServerSecureTransportPairVerify {

	HAPSecuritySessionEncryption* _eventEncryption;

}

@property (nonatomic,retain) HAPSecuritySessionEncryption * eventEncryption;              //@synthesize eventEncryption=_eventEncryption - In the implementation block
-(void)securitySessionDidOpen:(id)arg1 ;
-(void)securitySession:(id)arg1 didCloseWithError:(id)arg2 ;
-(id)securitySessionDidRequestAdditionalDerivedKeyTuples:(id)arg1 ;
-(id)decryptData:(id)arg1 type:(unsigned long long)arg2 error:(id*)arg3 ;
-(HAPSecuritySessionEncryption *)eventEncryption;
-(void)setEventEncryption:(HAPSecuritySessionEncryption *)arg1 ;
@end

