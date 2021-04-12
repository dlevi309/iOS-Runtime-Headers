/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSMutableArray;

@interface SYStoreResetSessionOwner : SYStoreSessionOwner {

	NSMutableArray* _buffer;
	long long _bufferedState;
	/*^block*/id _fetchNextBatch;

}

@property (nonatomic,copy) id fetchNextBatch;              //@synthesize fetchNextBatch=_fetchNextBatch - In the implementation block
-(id)init;
-(BOOL)isResetSync;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)setFetchNextBatch:(id)arg1 ;
-(long long)_sendBufferedChanges:(/*^block*/id)arg1 ;
-(id)fetchNextBatch;
@end

