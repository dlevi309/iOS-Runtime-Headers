/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NPKCompanionAgentConnectionDeferredActionHandler : NSObject {

	NSMutableDictionary* _deferredActions;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _deferredSharedPaymentWebServiceContexts;
	NSMutableDictionary* _deferredAddedPaymentPasses;

}

@property (nonatomic,retain) NSMutableDictionary * deferredActions;                                      //@synthesize deferredActions=_deferredActions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                                 //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deferredSharedPaymentWebServiceContexts;              //@synthesize deferredSharedPaymentWebServiceContexts=_deferredSharedPaymentWebServiceContexts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deferredAddedPaymentPasses;                           //@synthesize deferredAddedPaymentPasses=_deferredAddedPaymentPasses - In the implementation block
+(id)sharedDeferredActionHandler;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_handleDeviceUnpaired:(id)arg1 ;
-(void)_handleDevicePaired:(id)arg1 ;
-(void)_handleDeviceBecameActive:(id)arg1 ;
-(void)_handleDevicePairingFailure:(id)arg1 ;
-(void)_handleCompanionAgentStarted;
-(NSMutableDictionary *)deferredActions;
-(NSMutableDictionary *)deferredSharedPaymentWebServiceContexts;
-(NSMutableDictionary *)deferredAddedPaymentPasses;
-(id)deferredPaymentPassesForDevice:(id)arg1 ;
-(void)_performDeferredActions;
-(void)_cleanUpDeferredDataForPairingID:(id)arg1 ;
-(void)performActionWhenCompanionAgentIsAvailable:(/*^block*/id)arg1 forDevice:(id)arg2 ;
-(id)deferredSharedPaymentWebServiceContextForDevice:(id)arg1 ;
-(void)setDeferredSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2 ;
-(void)addDeferredPaymentPass:(id)arg1 forDevice:(id)arg2 ;
-(id)deferredPaymentPassUniqueIDsForDevice:(id)arg1 ;
-(id)deferredPaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2 ;
-(void)setDeferredActions:(NSMutableDictionary *)arg1 ;
-(void)setDeferredSharedPaymentWebServiceContexts:(NSMutableDictionary *)arg1 ;
-(void)setDeferredAddedPaymentPasses:(NSMutableDictionary *)arg1 ;
@end

