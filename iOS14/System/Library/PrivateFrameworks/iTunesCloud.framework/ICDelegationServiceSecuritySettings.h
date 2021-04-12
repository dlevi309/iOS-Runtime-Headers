/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSString;

@interface ICDelegationServiceSecuritySettings : NSObject {

	long long _securityMode;
	NSString* _password;

}

@property (nonatomic,readonly) long long securityMode;                //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
+(void)getDeviceReceiverSettingsWithCompletion:(/*^block*/id)arg1 ;
+(void)getDeviceSenderSettingsForReceiverName:(id)arg1 securityMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)password;
-(id)description;
-(id)_init;
-(long long)securityMode;
@end

