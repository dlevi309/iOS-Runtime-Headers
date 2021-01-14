/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/AMSPurchaseResponseProtocol.h>
#import <libobjc.A.dylib/SSEventMonitorDelegate.h>

@class VUIPurchaseRequest, NSMutableSet, AMSPurchaseQueue, SSEventMonitor, NSString;

@interface VUIPurchaser : NSObject <AMSPurchaseResponseProtocol, SSEventMonitorDelegate> {

	VUIPurchaseRequest* _interruptedPurchaseRequest;
	NSMutableSet* _purchasingParamsSet;
	AMSPurchaseQueue* _purchaseQueue;
	SSEventMonitor* _eventMonitor;

}

@property (nonatomic,retain) NSMutableSet * purchasingParamsSet;                           //@synthesize purchasingParamsSet=_purchasingParamsSet - In the implementation block
@property (nonatomic,retain) AMSPurchaseQueue * purchaseQueue;                             //@synthesize purchaseQueue=_purchaseQueue - In the implementation block
@property (nonatomic,retain) SSEventMonitor * eventMonitor;                                //@synthesize eventMonitor=_eventMonitor - In the implementation block
@property (nonatomic,retain) VUIPurchaseRequest * interruptedPurchaseRequest;              //@synthesize interruptedPurchaseRequest=_interruptedPurchaseRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPurchaser;
-(id)init;
-(void)eventMonitor:(id)arg1 receivedEventWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setInterruptedPurchaseRequest:(VUIPurchaseRequest *)arg1 ;
-(AMSPurchaseQueue *)purchaseQueue;
-(BOOL)_isInterruptedPurchaseFulfilledBySSPurchaseResponse:(id)arg1 ;
-(id)_getAdamIdFromBuyParams:(id)arg1 ;
-(void)enqueuePurchase:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)isPurchasing:(id)arg1 ;
-(void)rememberPurchasing:(id)arg1 ;
-(void)forgetPurchasing:(id)arg1 ;
-(VUIPurchaseRequest *)interruptedPurchaseRequest;
-(NSMutableSet *)purchasingParamsSet;
-(void)setPurchasingParamsSet:(NSMutableSet *)arg1 ;
-(void)setPurchaseQueue:(AMSPurchaseQueue *)arg1 ;
-(SSEventMonitor *)eventMonitor;
-(void)setEventMonitor:(SSEventMonitor *)arg1 ;
@end

