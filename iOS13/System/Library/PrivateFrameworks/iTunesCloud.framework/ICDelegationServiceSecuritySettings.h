/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)password;
-(id)_init;
-(long long)securityMode;
@end

