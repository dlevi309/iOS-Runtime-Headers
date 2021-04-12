/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finalizeCallWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)setHandleBatch:(id)arg1 ;
-(id)handleBatch;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setFinalizeCall:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

