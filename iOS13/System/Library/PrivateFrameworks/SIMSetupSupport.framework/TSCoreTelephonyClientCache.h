/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/


@class CoreTelephonyClient;

@interface TSCoreTelephonyClientCache : NSObject {

	CoreTelephonyClient* _client;

}
+(id)sharedInstance;
-(id)init;
-(void)installPendingPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDataFallbackEnabled:(BOOL)arg1 forIccid:(id)arg2 ;
-(void)transferPlanWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)transferPlansWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)bootstrapPlanTransferUsingMessageSession:(id)arg1 ;
-(void)transferPlanListWithCompletion:(/*^block*/id)arg1 ;
-(void)pendingInstallItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)isAnyPlanOfTransferCapability:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)getTransferCapability:(unsigned long long)arg1 ;
@end

