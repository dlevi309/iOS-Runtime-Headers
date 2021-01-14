/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/


@protocol TPSCloudCallingURLControllerDelegate;
@class CTXPCServiceSubscriptionContext, NSURL, NSData, TPSCarrierBundleController, TPSCloudCallingWebViewController, TUSenderIdentityCapabilities;

@interface TPSCloudCallingURLController : NSObject {

	BOOL _capabilityEnabled;
	BOOL _capabilityProvisioningURLInvalid;
	int _capabilityProvisioningStatus;
	id<TPSCloudCallingURLControllerDelegate> _delegate;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	NSURL* _capabilityProvisioningURL;
	NSData* _capabilityProvisioningPostData;
	TPSCarrierBundleController* _carrierBundleController;
	TPSCloudCallingWebViewController* _webViewController;

}

@property (nonatomic,retain) TPSCarrierBundleController * carrierBundleController;                                           //@synthesize carrierBundleController=_carrierBundleController - In the implementation block
@property (assign,nonatomic,__weak) TPSCloudCallingWebViewController * webViewController;                                    //@synthesize webViewController=_webViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TPSCloudCallingURLControllerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TUSenderIdentityCapabilities * subscriptionCapabilities; 
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;                                        //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnableCapability; 
@property (getter=isCapabilityEnabled,nonatomic,readonly) BOOL capabilityEnabled;                                            //@synthesize capabilityEnabled=_capabilityEnabled - In the implementation block
@property (nonatomic,readonly) int capabilityProvisioningStatus;                                                             //@synthesize capabilityProvisioningStatus=_capabilityProvisioningStatus - In the implementation block
@property (nonatomic,copy,readonly) NSURL * capabilityProvisioningURL;                                                       //@synthesize capabilityProvisioningURL=_capabilityProvisioningURL - In the implementation block
@property (getter=isCapabilityProvisioningURLInvalid,nonatomic,readonly) BOOL capabilityProvisioningURLInvalid;              //@synthesize capabilityProvisioningURLInvalid=_capabilityProvisioningURLInvalid - In the implementation block
@property (nonatomic,copy,readonly) NSData * capabilityProvisioningPostData;                                                 //@synthesize capabilityProvisioningPostData=_capabilityProvisioningPostData - In the implementation block
-(id)init;
-(id<TPSCloudCallingURLControllerDelegate>)delegate;
-(TPSCloudCallingWebViewController *)webViewController;
-(void)setDelegate:(id<TPSCloudCallingURLControllerDelegate>)arg1 ;
-(void)setWebViewController:(TPSCloudCallingWebViewController *)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(TUSenderIdentityCapabilities *)subscriptionCapabilities;
-(void)enableCapability;
-(void)reloadWebViewController;
-(void)webSheetCompletion;
-(BOOL)isCapabilityEnabled;
-(int)capabilityProvisioningStatus;
-(NSURL *)capabilityProvisioningURL;
-(BOOL)isCapabilityProvisioningURLInvalid;
-(NSData *)capabilityProvisioningPostData;
-(TPSCarrierBundleController *)carrierBundleController;
-(void)setCarrierBundleController:(TPSCarrierBundleController *)arg1 ;
-(id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg1 ;
-(void)loadWebViewController;
-(BOOL)shouldEnableCapability;
-(id)genericErrorAlertController;
-(id)_webViewControllerWithType:(long long)arg1 ;
-(id)provisionCapabilityController;
-(id)updateEmergencyAddressController;
@end

