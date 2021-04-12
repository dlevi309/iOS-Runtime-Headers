/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol OS_dispatch_queue;
@class AMSURLSession, NSOperationQueue, AMSPurchaseQueueConfiguration, NSMutableArray, NSObject, NSLock, AMSPurchaseProtocolHandler, NSString;

@interface AMSPurchaseQueue : NSObject <AMSBagConsumer> {

	AMSURLSession* _session;
	BOOL _isSuspeneded;
	NSOperationQueue* _backgroundQueue;
	AMSPurchaseQueueConfiguration* _config;
	NSMutableArray* _batches;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_queue> _enqueue;
	NSLock* _lock;
	AMSPurchaseProtocolHandler* _protocolHandler;

}

@property (nonatomic,retain) NSOperationQueue * backgroundQueue;                        //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (nonatomic,retain) AMSPurchaseQueueConfiguration * config;                    //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSMutableArray * batches;                                  //@synthesize batches=_batches - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> enqueue;                      //@synthesize enqueue=_enqueue - In the implementation block
@property (assign,nonatomic) BOOL isSuspeneded;                                         //@synthesize isSuspeneded=_isSuspeneded - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                             //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) AMSPurchaseProtocolHandler * protocolHandler;              //@synthesize protocolHandler=_protocolHandler - In the implementation block
@property (nonatomic,retain) AMSURLSession * session;                                   //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(NSLock *)lock;
-(AMSPurchaseQueueConfiguration *)config;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfig:(AMSPurchaseQueueConfiguration *)arg1 ;
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)batches;
-(void)setBatches:(NSMutableArray *)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(NSObject*<OS_dispatch_queue>)enqueue;
-(NSOperationQueue *)backgroundQueue;
-(void)setProtocolHandler:(AMSPurchaseProtocolHandler *)arg1 ;
-(id)contextForPurchaseId:(id)arg1 ;
-(id)_purchaseContextForPurchase:(id)arg1 ;
-(void)_handleNextPurchase;
-(void)_processPurchase:(id)arg1 ;
-(id)_processURLRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)isSuspeneded;
-(void)_handlePurchaseCompleted:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(id)enquePurchases:(id)arg1 ;
-(BOOL)finishPurchaseId:(id)arg1 withError:(id)arg2 ;
-(void)setSuspended:(BOOL)arg1 logUUID:(id)arg2 ;
-(void)setBackgroundQueue:(NSOperationQueue *)arg1 ;
-(void)setEnqueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsSuspeneded:(BOOL)arg1 ;
-(AMSPurchaseProtocolHandler *)protocolHandler;
@end

