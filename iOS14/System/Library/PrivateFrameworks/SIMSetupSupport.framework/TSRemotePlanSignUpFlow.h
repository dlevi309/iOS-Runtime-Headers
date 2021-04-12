/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>
#import <libobjc.A.dylib/TSEntitlementJSHandlerDelegate.h>

@class NSString, CTXPCServiceSubscriptionContext;

@interface TSRemotePlanSignUpFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate> {

	NSString* _carrierName;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,retain) NSString * carrierName;                                             //@synthesize carrierName=_carrierName - In the implementation block
@property (assign,nonatomic) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)carrierName;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(id)firstViewController;
-(void)setCarrierName:(NSString *)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(void)viewControllerDidComplete:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 carrier:(id)arg2 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
-(void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 ;
-(void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 srcIccid:(id)arg5 alternateSDMP:(id)arg6 state:(id)arg7 ;
-(void)accountCancelled;
-(void)accountPendingRelease;
@end

