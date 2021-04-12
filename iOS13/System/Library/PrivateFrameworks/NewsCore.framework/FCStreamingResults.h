/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCStreaming;
#import <NewsCore/NewsCore-Structs.h>
@class NSHashTable, NSMutableArray, FCAsyncSerialQueue;

@interface FCStreamingResults : NSObject {

	NSHashTable* _observers;
	id<FCStreaming> _underlyingStream;
	NSMutableArray* _results;
	FCAsyncSerialQueue* _serialQueue;

}

@property (nonatomic,retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<FCStreaming> underlyingStream;              //@synthesize underlyingStream=_underlyingStream - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                      //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) FCAsyncSerialQueue * serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSRange range; 
-(id)init;
-(unsigned long long)count;
-(id)array;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(NSMutableArray *)results;
-(void)addObserver:(id)arg1 ;
-(id)initWithStream:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isFinished;
-(NSRange)range;
-(FCAsyncSerialQueue *)serialQueue;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(id<FCStreaming>)underlyingStream;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithResults:(id)arg1 followedByStream:(id)arg2 ;
-(id)objectsInRange:(NSRange)arg1 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllObjectsWithBatchSize:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

