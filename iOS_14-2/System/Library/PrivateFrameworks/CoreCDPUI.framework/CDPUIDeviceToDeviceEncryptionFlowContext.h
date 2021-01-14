/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)securityUpgradeContext;
-(void)setSecurityUpgradeContext:(NSString *)arg1 ;
-(UIViewController *)presentingViewController;
-(NSString *)altDSID;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setDeviceToDeviceEncryptionUpgradeType:(long long)arg1 ;
-(void)setDeviceToDeviceEncryptionUpgradeUIStyle:(long long)arg1 ;
-(id)initWithAltDSID:(id)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(NSString *)featureName;
-(long long)deviceToDeviceEncryptionUpgradeUIStyle;
-(long long)deviceToDeviceEncryptionUpgradeType;
@end

