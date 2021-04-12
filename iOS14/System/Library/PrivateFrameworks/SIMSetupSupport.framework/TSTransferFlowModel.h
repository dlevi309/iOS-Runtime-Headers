/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/


@class NSMutableArray, CTDisplayPlanList;

@interface TSTransferFlowModel : NSObject {

	BOOL _areTransferPlansReady;
	BOOL _hasPendingInstallPlansQueried;
	BOOL _isBootstrapTriggerred;
	BOOL _isProximityFlow;
	BOOL _isActivationPolicyMismatch;
	BOOL _showTransferredPane;
	NSMutableArray* _transferItems;
	CTDisplayPlanList* _pendingInstallItems;

}

@property (nonatomic,retain) NSMutableArray * transferItems;                       //@synthesize transferItems=_transferItems - In the implementation block
@property (nonatomic,retain) CTDisplayPlanList * pendingInstallItems;              //@synthesize pendingInstallItems=_pendingInstallItems - In the implementation block
@property (assign,nonatomic) BOOL isActivationPolicyMismatch;                      //@synthesize isActivationPolicyMismatch=_isActivationPolicyMismatch - In the implementation block
@property (assign,nonatomic) BOOL showTransferredPane;                             //@synthesize showTransferredPane=_showTransferredPane - In the implementation block
+(id)sharedInstance;
-(NSMutableArray *)transferItems;
-(void)setTransferItems:(NSMutableArray *)arg1 ;
-(void)requestPlans:(id)arg1 transferablePlanOnSource:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIsActivationPolicyMismatch:(BOOL)arg1 ;
-(void)filterTransferPlans:(id)arg1 ;
-(CTDisplayPlanList *)pendingInstallItems;
-(void)requestTransferPlans:(/*^block*/id)arg1 ;
-(void)bootstrap:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestPendingInstallPlans:(/*^block*/id)arg1 ;
-(void)arePlansAvailable:(id)arg1 transferablePlanOnSource:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPendingInstallItems:(CTDisplayPlanList *)arg1 ;
-(BOOL)isActivationPolicyMismatch;
-(BOOL)showTransferredPane;
-(void)setShowTransferredPane:(BOOL)arg1 ;
@end

