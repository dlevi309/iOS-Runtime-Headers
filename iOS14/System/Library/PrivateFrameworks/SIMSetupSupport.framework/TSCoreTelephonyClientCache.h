/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/


@class CoreTelephonyClient;

@interface TSCoreTelephonyClientCache : NSObject {

	CoreTelephonyClient* _client;

}
+(id)sharedInstance;
-(id)init;
-(void)installPendingPlanList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)hideTransferPlan:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installPendingPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDataFallbackEnabled:(BOOL)arg1 forIccid:(id)arg2 ;
-(void)transferPlanWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)transferPlansWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)transferPlanListWithCompletion:(/*^block*/id)arg1 ;
-(void)bootstrapPlanTransferUsingMessageSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pendingInstallItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)isAnyPlanOfTransferCapability:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)getTransferCapability:(unsigned long long)arg1 ;
@end

