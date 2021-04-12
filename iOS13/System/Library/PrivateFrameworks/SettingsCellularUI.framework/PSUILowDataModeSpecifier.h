/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@class CTServiceDescriptor, CoreTelephonyClient, PSListController;

@interface PSUILowDataModeSpecifier : PSSpecifier {

	CTServiceDescriptor* _serviceDescriptor;
	CoreTelephonyClient* _ctClient;
	PSListController* _hostController;

}

@property (nonatomic,retain) CTServiceDescriptor * serviceDescriptor;               //@synthesize serviceDescriptor=_serviceDescriptor - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * ctClient;                        //@synthesize ctClient=_ctClient - In the implementation block
@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(CoreTelephonyClient *)ctClient;
-(void)setCtClient:(CoreTelephonyClient *)arg1 ;
-(id)initWithFactory:(id)arg1 hostController:(id)arg2 parentSpecifier:(id)arg3 ;
-(void)setLowDataMode:(id)arg1 specifier:(id)arg2 ;
-(id)isLowDataModeEnabled:(id)arg1 ;
-(CTServiceDescriptor *)serviceDescriptor;
-(void)setServiceDescriptor:(CTServiceDescriptor *)arg1 ;
@end

