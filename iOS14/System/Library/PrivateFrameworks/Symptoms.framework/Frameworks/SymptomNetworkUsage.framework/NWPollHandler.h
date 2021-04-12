/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


@protocol OS_dispatch_semaphore;
@class NSMutableArray, NWUsageTargetSelector, NSObject, NWUsageManager;

@interface NWPollHandler : NSObject {

	NSMutableArray* _batchedSnapshots[10];
	AQ _batchesOutstanding;
	unsigned _producerSeqno;
	unsigned _consumerSeqno;
	BOOL _active;
	BOOL _paused;
	NWUsageTargetSelector* _flowSelector;
	/*^block*/id _deliveryBlock;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	unsigned long long _ntstatContext;
	NWUsageManager* _manager;

}

@property (retain) NWUsageTargetSelector * flowSelector;                    //@synthesize flowSelector=_flowSelector - In the implementation block
@property (copy) id deliveryBlock;                                          //@synthesize deliveryBlock=_deliveryBlock - In the implementation block
@property (copy) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (assign,nonatomic) unsigned long long ntstatContext;              //@synthesize ntstatContext=_ntstatContext - In the implementation block
@property (assign,nonatomic) BOOL paused;                                   //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) BOOL completed; 
@property (nonatomic,readonly) BOOL shouldRestartPoll; 
@property (retain) NWUsageManager * manager;                                //@synthesize manager=_manager - In the implementation block
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setDeliveryBlock:(id)arg1 ;
-(void)shutdown;
-(id)init;
-(void)handleSnapshot:(id)arg1 ;
-(BOOL)completed;
-(void)setManager:(NWUsageManager *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setNtstatContext:(unsigned long long)arg1 ;
-(id)description;
-(NWUsageTargetSelector *)flowSelector;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NWUsageManager *)manager;
-(BOOL)paused;
-(void)setFlowSelector:(NWUsageTargetSelector *)arg1 ;
-(void)decrementBatchCount;
-(id)deliveryBlock;
-(void)pushCurrentSnapshots:(BOOL)arg1 ;
-(unsigned long long)ntstatContext;
-(id)nextDelivery;
-(BOOL)shouldRestartPoll;
-(void)_dispatchNextBatch;
@end

