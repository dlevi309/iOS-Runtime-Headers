/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/


@protocol CDPLocalDeviceSecretProxy;
@interface CDPLocalDevice : NSObject {

	id<CDPLocalDeviceSecretProxy> _localSecretProxy;

}
+(id)sharedInstance;
+(BOOL)hasLocalSecret;
-(id)init;
-(id)hardwareModel;
-(id)deviceName;
-(id)serialNumber;
-(id)deviceClass;
-(id)osVersion;
-(id)modelVersion;
-(BOOL)hasLocalSecret;
-(BOOL)_currentProcessCreatesDaemonTypeProxy;
-(BOOL)_isHomePod;
-(BOOL)_currentProcessHasEntitlement:(id)arg1 ;
-(BOOL)supportsSecureBackupRecovery;
-(id)marketingModel;
@end

