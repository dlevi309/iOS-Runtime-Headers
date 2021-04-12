/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@protocol AMSUIWebJSPropertiesDelegate, OS_dispatch_queue;
@class AMSUIWebClientContext, CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSObject;

@interface AMSUIWebJSProperties : NSObject {

	id<AMSUIWebJSPropertiesDelegate> _delegate;
	AMSUIWebClientContext* _context;
	CoreTelephonyClient* _telephonyClient;
	CTXPCServiceSubscriptionContext* _telephonyContext;
	NSObject*<OS_dispatch_queue> _telephonyQueue;

}

@property (assign,nonatomic,__weak) AMSUIWebClientContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * telephonyClient;                           //@synthesize telephonyClient=_telephonyClient - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * telephonyContext;              //@synthesize telephonyContext=_telephonyContext - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> telephonyQueue;                     //@synthesize telephonyQueue=_telephonyQueue - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIWebJSPropertiesDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
+(BOOL)_hasRequiredTelephonyEntitlement;
-(void)dealloc;
-(id<AMSUIWebJSPropertiesDelegate>)delegate;
-(void)setDelegate:(id<AMSUIWebJSPropertiesDelegate>)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)phoneNumberAvailable:(id)arg1 ;
-(void)phoneNumberChanged:(id)arg1 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(CoreTelephonyClient *)telephonyClient;
-(void)setTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(id)generateProperties;
-(void)setTelephonyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_accountsProperties;
-(id)_deviceProperties;
-(id)_processProperties;
-(id)_telephoneProperties;
-(id)_propertiesForAccount:(id)arg1 store:(id)arg2 ;
-(id)_propertiesForClientInfo:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)telephonyQueue;
-(BOOL)_setupTelephonyIfNeeded;
-(CTXPCServiceSubscriptionContext *)telephonyContext;
-(void)setTelephonyContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(id)_hexStringFromColor:(id)arg1 ;
@end

