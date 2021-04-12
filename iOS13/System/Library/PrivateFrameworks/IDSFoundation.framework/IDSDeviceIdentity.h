/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<ENDevicePublicKey> devicePublicKey; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IDSAccountIdentity *)accountIdentity;
-(IDSMPFullLegacyIdentity *)legacyIdentity;
-(IDSMPFullDeviceIdentity *)modernIdentity;
-(id)initWithLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3 ;
-(id<ENDevicePublicKey>)devicePublicKey;
@end

