/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/EDGESettings.bundle/EDGESettings
*/

#import <Preferences/PSBundleController.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient;

@interface EdgeController : PSBundleController {

	CTXPCServiceSubscriptionContext* _context;
	CoreTelephonyClient* _coreTelephonyClient;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
-(void)dealloc;
-(CTXPCServiceSubscriptionContext *)context;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(void)setBasebandValue:(id)arg1 forTraceName:(id)arg2 property:(id)arg3 ;
@end

