/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/


@protocol CDPLocalDeviceSecretProxy;
@interface CDPLocalDevice : NSObject {

	id<CDPLocalDeviceSecretProxy> _localSecretProxy;

}
+(id)sharedInstance;
+(BOOL)hasLocalSecret;
-(id)deviceName;
-(id)serialNumber;
-(id)modelVersion;
-(id)init;
-(id)deviceClass;
-(id)osVersion;
-(id)hardwareModel;
-(BOOL)hasLocalSecret;
-(BOOL)supportsSecureBackupRecovery;
-(id)marketingModel;
-(BOOL)_currentProcessCreatesDaemonTypeProxy;
-(BOOL)_isHomePod;
-(BOOL)_currentProcessHasEntitlement:(id)arg1 ;
@end

