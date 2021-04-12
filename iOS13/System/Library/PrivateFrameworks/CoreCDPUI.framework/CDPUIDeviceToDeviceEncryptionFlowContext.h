/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/


@class UIViewController, NSString;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject {

	UIViewController* _presentingViewController;
	long long _deviceToDeviceEncryptionUpgradeUIStyle;
	long long _deviceToDeviceEncryptionUpgradeType;
	NSString* _securityUpgradeContext;
	NSString* _featureName;
	NSString* _altDSID;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle;                //@synthesize deviceToDeviceEncryptionUpgradeUIStyle=_deviceToDeviceEncryptionUpgradeUIStyle - In the implementation block
@property (assign,nonatomic) long long deviceToDeviceEncryptionUpgradeType;                   //@synthesize deviceToDeviceEncryptionUpgradeType=_deviceToDeviceEncryptionUpgradeType - In the implementation block
@property (nonatomic,copy) NSString * securityUpgradeContext;                                 //@synthesize securityUpgradeContext=_securityUpgradeContext - In the implementation block
@property (nonatomic,copy) NSString * featureName;                                            //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy,readonly) NSString * altDSID;                                       //@synthesize altDSID=_altDSID - In the implementation block
-(NSString *)altDSID;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(NSString *)featureName;
-(id)initWithAltDSID:(id)arg1 ;
-(NSString *)securityUpgradeContext;
-(void)setSecurityUpgradeContext:(NSString *)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setDeviceToDeviceEncryptionUpgradeUIStyle:(long long)arg1 ;
-(void)setDeviceToDeviceEncryptionUpgradeType:(long long)arg1 ;
-(long long)deviceToDeviceEncryptionUpgradeUIStyle;
-(long long)deviceToDeviceEncryptionUpgradeType;
@end

