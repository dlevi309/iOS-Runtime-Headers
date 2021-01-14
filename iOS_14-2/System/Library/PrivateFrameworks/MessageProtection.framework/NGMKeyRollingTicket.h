/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@class NGMFullPrekey, NGMPublicDeviceIdentity;

@interface NGMKeyRollingTicket : NSObject {

	NGMFullPrekey* _prekey;
	NGMPublicDeviceIdentity* _registrationInfo;

}

@property (nonatomic,readonly) NGMFullPrekey * prekey;                                  //@synthesize prekey=_prekey - In the implementation block
@property (nonatomic,readonly) NGMPublicDeviceIdentity * registrationInfo;              //@synthesize registrationInfo=_registrationInfo - In the implementation block
-(NGMPublicDeviceIdentity *)registrationInfo;
-(NGMFullPrekey *)prekey;
-(id)identityData;
-(id)prekeyData;
-(id)publicDeviceIdentity;
-(id)initTicketWithSigningKey:(id)arg1 error:(id*)arg2 ;
@end

