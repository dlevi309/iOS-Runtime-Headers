/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENDevicePublicKey.h>

@class IDSMPPublicLegacyIdentity, IDSMPPublicDeviceIdentity, IDSPublicAccountIdentity, NSString;

@interface IDSPublicDeviceIdentity : NSObject <ENDevicePublicKey> {

	IDSMPPublicLegacyIdentity* _legacyIdentity;
	IDSMPPublicDeviceIdentity* _modernIdentity;
	IDSPublicAccountIdentity* _accountIdentity;

}

@property (nonatomic,readonly) IDSMPPublicLegacyIdentity * legacyIdentity;              //@synthesize legacyIdentity=_legacyIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPPublicDeviceIdentity * modernIdentity;              //@synthesize modernIdentity=_modernIdentity - In the implementation block
@property (nonatomic,readonly) IDSPublicAccountIdentity * accountIdentity;              //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IDSPublicAccountIdentity *)accountIdentity;
-(id)initWithPublicLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3 ;
-(IDSMPPublicLegacyIdentity *)legacyIdentity;
-(IDSMPPublicDeviceIdentity *)modernIdentity;
@end

