/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setBasebandValue:(id)arg1 forTraceName:(id)arg2 property:(id)arg3 ;
-(CTXPCServiceSubscriptionContext *)context;
-(void)dealloc;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
@end

