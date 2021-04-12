/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol OS_dispatch_queue, NPKTransitPassesInfoManagerDelegate;
@class NSObject, NSMutableDictionary, PKPaymentService, NSSet, NSString;

@interface NPKTransitPassesInfoManager : NSObject <PKPaymentServiceDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _delegateCallbackQueue;
	NSMutableDictionary* _transitPassBalanceModelsByPassUniqueID;
	int _pendingAddValueUpdatedNotifyToken;
	id<NPKTransitPassesInfoManagerDelegate> _delegate;
	PKPaymentService* _paymentService;

}

@property (nonatomic,readonly) PKPaymentService * paymentService;                 //@synthesize paymentService=_paymentService - In the implementation block
@property (copy) NSSet * passes; 
@property (__weak) id<NPKTransitPassesInfoManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NPKTransitPassesInfoManagerDelegate>)delegate;
-(void)setDelegate:(id<NPKTransitPassesInfoManagerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSSet *)passes;
-(PKPaymentService *)paymentService;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)removePassWithUniqueID:(id)arg1 ;
-(id)initWithPaymentService:(id)arg1 delegate:(id)arg2 ;
-(void)_updateAllPassesItemsFieldsPendingUpdateStatus;
-(id)_transitPassBalanceModelWithPass:(id)arg1 currentModel:(id)arg2 ;
-(void)_loadPassContentIfNeeded:(id)arg1 ;
-(void)_fetchMostRecentInfoForPass:(id)arg1 ;
-(void)_notifyDelegateOfUpdatedTransitPassInfoForModel:(id)arg1 ;
-(void)_updatePassTransitPassesInfoManagerForPassUniqueID:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)_fetchMostRecentBalancesForPass:(id)arg1 ;
-(void)_fetchMostRecentTransitPropertiesForPass:(id)arg1 ;
-(void)setPasses:(NSSet *)arg1 ;
-(void)addPass:(id)arg1 ;
-(void)setPendingAmount:(id)arg1 forBalanceField:(id)arg2 passWithUniqueID:(id)arg3 ;
-(void)refreshAllPasses;
-(id)passInfoForForPassWithUniqueID:(id)arg1 ;
@end

