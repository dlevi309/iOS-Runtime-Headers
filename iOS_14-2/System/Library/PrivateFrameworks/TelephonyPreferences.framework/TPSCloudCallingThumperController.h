/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isThumperCallingEnabled;
-(id<TPSCloudCallingThumperControllerDelegate>)delegate;
-(BOOL)supportsThumperCalling;
-(void)setThumperCallingEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<TPSCloudCallingThumperControllerDelegate>)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(TUSenderIdentityCapabilities *)subscriptionCapabilities;
-(TPSCarrierBundleController *)carrierBundleController;
-(NSString *)localizedCarrierName;
-(void)setCarrierBundleController:(TPSCarrierBundleController *)arg1 ;
-(NSDictionary *)encryptedIdentityInfo;
-(void)setEncryptedIdentityInfo:(NSDictionary *)arg1 ;
-(void)setSubscriptionCapabilities:(TUSenderIdentityCapabilities *)arg1 ;
@end

