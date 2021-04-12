/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableSet *)pendingBlocks;
-(void)performAsync:(/*^block*/id)arg1 ;
-(id<CalAsyncBlockPerformer>)blockPerformer;
-(void)performAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithBlockPerformer:(id)arg1 ;
-(void)cancelAllPendingBlocks;
@end

