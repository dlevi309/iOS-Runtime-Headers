/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@protocol OS_dispatch_queue;
#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
@class NSObject;

@interface PPXPCClientPipelinedBatchQueryContext : NSObject {

	BOOL _stop;
	/*^block*/id _finalizeCall;
	atomic_flag _calledFinalizeBlock;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handleBatch;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id handleBatch;                                    //@synthesize handleBatch=_handleBatch - In the implementation block
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setFinalizeCall:(/*^block*/id)arg1 ;
-(void)finalizeCallWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)handleBatch;
-(void)setHandleBatch:(id)arg1 ;
@end

