/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@protocol AMSUIWebJSPropertiesDelegate, OS_dispatch_queue;
@class AMSUIWebClientContext, CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSObject;

@interface AMSUIWebJSProperties : NSObject {

	BOOL _telephonySetupFailed;
	id<AMSUIWebJSPropertiesDelegate> _delegate;
	AMSUIWebClientContext* _context;
	CoreTelephonyClient* _telephonyClient;
	CTXPCServiceSubscriptionContext* _telephonyContext;
	NSObject*<OS_dispatch_queue> _telephonyQueue;

}

@property (assign,nonatomic,__weak) AMSUIWebClientContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * telephonyClient;                           //@synthesize telephonyClient=_telephonyClient - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * telephonyContext;              //@synthesize telephonyContext=_telephonyContext - In the implementation block
@property (assign,nonatomic) BOOL telephonySetupFailed;                                       //@synthesize telephonySetupFailed=_telephonySetupFailed - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> telephonyQueue;                     //@synthesize telephonyQueue=_telephonyQueue - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIWebJSPropertiesDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
+(BOOL)_hasRequiredTelephonyEntitlement;
-(void)phoneNumberChanged:(id)arg1 ;
-(void)phoneNumberAvailable:(id)arg1 ;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id<AMSUIWebJSPropertiesDelegate>)delegate;
-(void)setTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setDelegate:(id<AMSUIWebJSPropertiesDelegate>)arg1 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(CoreTelephonyClient *)telephonyClient;
-(void)dealloc;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)generateProperties;
-(id)_pluginProperties;
-(id)_accountsProperties;
-(id)_clientOptionsProperties;
-(id)_deviceProperties;
-(id)_processProperties;
-(id)_telephoneProperties;
-(id)_propertiesForClientInfo:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)telephonyQueue;
-(BOOL)_setupTelephonyIfNeeded;
-(CTXPCServiceSubscriptionContext *)telephonyContext;
-(BOOL)telephonySetupFailed;
-(void)setTelephonyContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)setTelephonySetupFailed:(BOOL)arg1 ;
-(id)_hexStringFromColor:(id)arg1 ;
-(void)setTelephonyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

