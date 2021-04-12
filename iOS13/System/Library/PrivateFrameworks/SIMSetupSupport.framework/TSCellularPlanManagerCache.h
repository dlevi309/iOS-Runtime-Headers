/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/


@protocol TSCellularPlanManagerCacheDelegate;
@class NSArray;

@interface TSCellularPlanManagerCache : NSObject {

	id<TSCellularPlanManagerCacheDelegate> delegate;
	NSArray* _planItems;
	unsigned long long _supportedFlowTypes;
	NSArray* _danglingPlanItems;

}

@property (retain) NSArray * planItems;                                                           //@synthesize planItems=_planItems - In the implementation block
@property (retain) NSArray * danglingPlanItems;                                                   //@synthesize danglingPlanItems=_danglingPlanItems - In the implementation block
@property (assign,nonatomic) unsigned long long supportedFlowTypes;                               //@synthesize supportedFlowTypes=_supportedFlowTypes - In the implementation block
@property (assign,nonatomic,__weak) id<TSCellularPlanManagerCacheDelegate> delegate; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<TSCellularPlanManagerCacheDelegate>)delegate;
-(void)setDelegate:(id<TSCellularPlanManagerCacheDelegate>)arg1 ;
-(void)setUserInPurchaseFlow:(BOOL)arg1 ;
-(long long)calculateInstallConsentTextTypeFor:(id)arg1 ;
-(id)remapSimLabel:(id)arg1 to:(id)arg2 ;
-(id)setLabelForPlan:(id)arg1 label:(id)arg2 ;
-(id)getPredefinedLabels;
-(id)getShortLabelsForLabels:(id)arg1 ;
-(void)_initialize;
-(NSArray *)planItems;
-(NSArray *)danglingPlanItems;
-(void)selectPlansForIMessage:(id)arg1 ;
-(void)selectPlanForVoice:(id)arg1 ;
-(void)selectPlanForData:(id)arg1 ;
-(void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 userConsentResponse:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)shouldShowPlanSetupWithCompletion:(/*^block*/id)arg1 ;
-(id)getDanglingPlanItems;
-(void)didPurchasePlanForEid:(id)arg1 iccid:(id)arg2 smdpURL:(id)arg3 ;
-(void)didTransferPlanForEid:(id)arg1 iccid:(id)arg2 smdpURL:(id)arg3 state:(id)arg4 ;
-(void)_updateLocalCachedPlanItems:(id)arg1 ;
-(id)_getValidatedPlanItemFor:(id)arg1 ;
-(void)_updateCachedPlanItems;
-(id)_getByteRepresentationOf:(id)arg1 ;
-(void)_updateCachedFlowTypes;
-(void)setSupportedFlowTypes:(unsigned long long)arg1 ;
-(void)setPlanItems:(NSArray *)arg1 ;
-(void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 confirmationCode:(id)arg3 userConsent:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)resumePlanProvisioning:(BOOL)arg1 userConsent:(long long)arg2 ;
-(void)provideUserResponse:(long long)arg1 confirmationCode:(id)arg2 ;
-(void)sendUserResponse:(unsigned long long)arg1 confirmationCode:(id)arg2 ;
-(unsigned long long)supportedFlowTypes;
-(void)setDanglingPlanItems:(NSArray *)arg1 ;
@end

