/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCPurchaseManagerType
@property (assign,nonatomic,__weak) id<FCPurchaseManagerDelegate> delegate; 
@property (nonatomic,retain) id<FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider; 
@required
-(id<FCPurchaseManagerDelegate>)delegate;
-(void)startPurchaseWithTagID:(id)arg1 purchase:(id)arg2 webAccessOptIn:(BOOL)arg3 error:(id*)arg4;
-(void)setPurchaseFlowOverrideProvider:(id)arg1;
-(void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3;
-(void)simulateFailurePurchaseWithProductID:(id)arg1 transactionState:(long long)arg2 error:(id)arg3;
-(void)setDelegate:(id)arg1;
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2;
-(BOOL)anyOngoingPurchases;
-(void)startBundlePurchaseWithPurchase:(id)arg1 error:(id*)arg2;
-(id<FCPurchaseFlowOverrideProviderType>)purchaseFlowOverrideProvider;
-(BOOL)isPurchaseOngoingForTagID:(id)arg1;

@end

