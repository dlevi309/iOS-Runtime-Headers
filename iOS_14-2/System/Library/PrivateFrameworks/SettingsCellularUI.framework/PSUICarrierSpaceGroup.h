/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, Logger, NSDictionary, RemoteUIController, PSListController, PSSpecifier, CTCarrierSpaceCapabilities, PSUICarrierSpaceOptInSplashScreen, NSString;

@interface PSUICarrierSpaceGroup : NSObject <RemoteUIControllerDelegate> {

	CTXPCServiceSubscriptionContext* _subscriptionContext;
	CoreTelephonyClient* _ctClient;
	Logger* _logger;
	NSDictionary* _specifersByID;
	BOOL _isSubscriptionDataPreferred;
	RemoteUIController* _remoteUIController;
	PSListController* _listController;
	PSSpecifier* _groupSpecifier;
	PSSpecifier* _parentSpecifier;
	CTCarrierSpaceCapabilities* _capabilities;
	PSUICarrierSpaceOptInSplashScreen* _optInSplashScreen;

}

@property (nonatomic,retain) RemoteUIController * remoteUIController;                            //@synthesize remoteUIController=_remoteUIController - In the implementation block
@property (assign,nonatomic,__weak) PSListController * listController;                           //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                                //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * parentSpecifier;                               //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceCapabilities * capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) PSUICarrierSpaceOptInSplashScreen * optInSplashScreen;              //@synthesize optInSplashScreen=_optInSplashScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CTCarrierSpaceCapabilities *)capabilities;
-(void)setCapabilities:(CTCarrierSpaceCapabilities *)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(PSSpecifier *)groupSpecifier;
-(id)specifierForID:(id)arg1 ;
-(void)setListController:(PSListController *)arg1 ;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(RemoteUIController *)remoteUIController;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
-(void)openURLWithSpecifier:(id)arg1 ;
-(void)carrierSpaceChanged;
-(void)newCarrierNotification;
-(id)getLogger;
-(void)setIsSubscriptionDataPreferred;
-(void)prepareSpecifiers;
-(id)cellularPlansSpecifier;
-(id)usageSpecifier;
-(id)carrierServicesSpecifier;
-(id)descriptionForPlans:(id)arg1 ;
-(void)showConsentFlow:(id)arg1 ;
-(id)descriptionForUsage:(id)arg1 ;
-(void)showTermsAndConditions:(id)arg1 consentFlowInfo:(id)arg2 ;
-(void)agreePressed;
-(void)disagreeOrCancelPressed;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3 ctClient:(id)arg4 ;
-(void)setRemoteUIController:(RemoteUIController *)arg1 ;
-(PSUICarrierSpaceOptInSplashScreen *)optInSplashScreen;
-(void)setOptInSplashScreen:(PSUICarrierSpaceOptInSplashScreen *)arg1 ;
@end

