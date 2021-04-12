/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, PKPaymentService, NSHashTable, NSSet, NSString;

@interface NPKPassAssociatedInfoManager : NSObject <PKPaymentServiceDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _passAssociatedInfoModelsByPassUniqueID;
	int _pendingAddValueUpdatedNotifyToken;
	BOOL _paymentServiceWasInterrupted;
	PKPaymentService* _paymentService;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) PKPaymentService * paymentService;              //@synthesize paymentService=_paymentService - In the implementation block
@property (assign,nonatomic) BOOL paymentServiceWasInterrupted;                //@synthesize paymentServiceWasInterrupted=_paymentServiceWasInterrupted - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
@property (copy) NSSet * passes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
-(void)setPasses:(NSSet *)arg1 ;
-(PKPaymentService *)paymentService;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSSet *)passes;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentServiceEstablishedConnection;
-(void)paymentServiceReceivedInterruption;
-(void)removePassWithUniqueID:(id)arg1 ;
-(id)initWithPaymentService:(id)arg1 ;
-(void)_updateAllPassesItemsFieldsPendingUpdateStatus;
-(id)_transitPassBalanceModelWithPass:(id)arg1 currentModel:(id)arg2 ;
-(void)_loadPassContentIfNeeded:(id)arg1 ;
-(void)_fetchMostRecentInfoForPass:(id)arg1 ;
-(void)_notifyObserversOfUpdatedTransitPassInfoForModel:(id)arg1 ;
-(void)_updatePassTransitPassesInfoManagerForPassUniqueID:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)_fetchMostRecentTransitPropertiesAndAppletStateForPass:(id)arg1 ;
-(void)refreshAllPasses;
-(void)_fetchMostRecentBalancesForPass:(id)arg1 ;
-(void)addPass:(id)arg1 ;
-(void)setPendingAmount:(id)arg1 forBalanceField:(id)arg2 passWithUniqueID:(id)arg3 ;
-(id)passInfoForPassWithUniqueID:(id)arg1 ;
-(BOOL)paymentServiceWasInterrupted;
-(void)setPaymentServiceWasInterrupted:(BOOL)arg1 ;
@end

