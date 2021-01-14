/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENDeviceKey.h>

@class IDSMPFullLegacyIdentity, IDSMPFullDeviceIdentity, IDSAccountIdentity, NSString;

@interface IDSDeviceIdentity : NSObject <ENDeviceKey> {

	IDSMPFullLegacyIdentity* _legacyIdentity;
	IDSMPFullDeviceIdentity* _modernIdentity;
	IDSAccountIdentity* _accountIdentity;

}

@property (nonatomic,readonly) IDSMPFullLegacyIdentity * legacyIdentity;              //@synthesize legacyIdentity=_legacyIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPFullDeviceIdentity * modernIdentity;              //@synthesize modernIdentity=_modernIdentity - In the implementation block
@property (nonatomic,readonly) IDSAccountIdentity * accountIdentity;                  //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,readonly) id<ENDevicePublicKey> devicePublicKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(IDSAccountIdentity *)accountIdentity;
-(IDSMPFullLegacyIdentity *)legacyIdentity;
-(IDSMPFullDeviceIdentity *)modernIdentity;
-(id)initWithLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<ENDevicePublicKey>)devicePublicKey;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

