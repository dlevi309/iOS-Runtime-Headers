/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol CalAsyncBlockPerformer;
@class NSMutableSet;

@interface CalAsyncBlockQueue : NSObject {

	id<CalAsyncBlockPerformer> _blockPerformer;
	NSMutableSet* _pendingBlocks;

}

@property (nonatomic,readonly) id<CalAsyncBlockPerformer> blockPerformer;              //@synthesize blockPerformer=_blockPerformer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingBlocks;                           //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
-(void)performAsync:(/*^block*/id)arg1 ;
-(NSMutableSet *)pendingBlocks;
-(id<CalAsyncBlockPerformer>)blockPerformer;
-(void)performAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithBlockPerformer:(id)arg1 ;
-(void)cancelAllPendingBlocks;
@end

