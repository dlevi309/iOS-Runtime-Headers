/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSMutableArray;

@interface SYStoreResetSessionOwner : SYStoreSessionOwner {

	NSMutableArray* _buffer;
	unsigned _bufferedState;
	/*^block*/id _fetchNextBatch;

}

@property (nonatomic,copy) id fetchNextBatch;              //@synthesize fetchNextBatch=_fetchNextBatch - In the implementation block
-(id)init;
-(unsigned)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)isResetSync;
-(void)setFetchNextBatch:(id)arg1 ;
-(unsigned)_sendBufferedChanges:(/*^block*/id)arg1 ;
-(id)fetchNextBatch;
@end

