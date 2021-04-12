/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCPurchaseManagerType
@property (assign,nonatomic,__weak) id<FCPurchaseManagerDelegate> delegate; 
@property (nonatomic,retain) id<FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider; 
@required
-(id<FCPurchaseManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurcase:(BOOL)arg2;
-(id<FCPurchaseFlowOverrideProviderType>)purchaseFlowOverrideProvider;
-(void)startBundlePurchaseWithPurchase:(id)arg1 error:(id*)arg2;
-(void)startPurchaseWithTagID:(id)arg1 purchase:(id)arg2 webAccessOptIn:(BOOL)arg3 error:(id*)arg4;
-(void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3;
-(void)simulateFailurePurchaseWithProductID:(id)arg1 transactionState:(long long)arg2 error:(id)arg3;
-(void)authenticateAppleIDWithCompletion:(/*^block*/id)arg1;
-(BOOL)isPurchaseOngoingForTagID:(id)arg1;
-(BOOL)anyOngoingPurchases;
-(void)setPurchaseFlowOverrideProvider:(id)arg1;

@end

