/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/


@protocol TPSCloudCallingThumperControllerDelegate;
@class TPSCarrierBundleController, NSDictionary, CTXPCServiceSubscriptionContext, TUSenderIdentityCapabilities, NSString;

@interface TPSCloudCallingThumperController : NSObject {

	id<TPSCloudCallingThumperControllerDelegate> _delegate;
	TPSCarrierBundleController* _carrierBundleController;
	NSDictionary* _encryptedIdentityInfo;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	TUSenderIdentityCapabilities* _subscriptionCapabilities;

}

@property (nonatomic,retain) TPSCarrierBundleController * carrierBundleController;                      //@synthesize carrierBundleController=_carrierBundleController - In the implementation block
@property (nonatomic,copy) NSDictionary * encryptedIdentityInfo;                                        //@synthesize encryptedIdentityInfo=_encryptedIdentityInfo - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;                   //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (nonatomic,retain) TUSenderIdentityCapabilities * subscriptionCapabilities;                   //@synthesize subscriptionCapabilities=_subscriptionCapabilities - In the implementation block
@property (assign,nonatomic,__weak) id<TPSCloudCallingThumperControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isThumperCallingEnabled,nonatomic) BOOL thumperCallingEnabled; 
@property (nonatomic,readonly) BOOL supportsThumperCalling; 
@property (nonatomic,copy,readonly) NSString * localizedCarrierName; 
-(id)init;
-(id<TPSCloudCallingThumperControllerDelegate>)delegate;
-(void)setDelegate:(id<TPSCloudCallingThumperControllerDelegate>)arg1 ;
-(BOOL)isThumperCallingEnabled;
-(BOOL)supportsThumperCalling;
-(void)setThumperCallingEnabled:(BOOL)arg1 ;
-(TUSenderIdentityCapabilities *)subscriptionCapabilities;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(TPSCarrierBundleController *)carrierBundleController;
-(NSString *)localizedCarrierName;
-(void)setCarrierBundleController:(TPSCarrierBundleController *)arg1 ;
-(NSDictionary *)encryptedIdentityInfo;
-(void)setEncryptedIdentityInfo:(NSDictionary *)arg1 ;
-(void)setSubscriptionCapabilities:(TUSenderIdentityCapabilities *)arg1 ;
@end

