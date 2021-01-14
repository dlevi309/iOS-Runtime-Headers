/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFPairingIdentity.h>

@interface HAPPairingIdentity : HMFPairingIdentity {

	unsigned long long _permissions;

}

@property (nonatomic,readonly) unsigned long long permissions;              //@synthesize permissions=_permissions - In the implementation block
+(id)hmd_pairingIdentityWithDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)hmd_dictionaryEncoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)permissions;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(unsigned long long)arg4 ;
@end

