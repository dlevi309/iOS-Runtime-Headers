/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/


@class BMStreamDatastore, BMFrameStore, BMStoreBookmark;

@interface BMStoreEnumerator : NSObject {

	BMStreamDatastore* _ds;
	BMFrameStore* _currentFrameStore;
	unsigned long long _frameStoreOffset;
	double _iterationStartTime;

}

@property (nonatomic,readonly) BMFrameStore * currentFrameStore;              //@synthesize currentFrameStore=_currentFrameStore - In the implementation block
@property (nonatomic,readonly) BMStoreBookmark * bookmark; 
-(BMStoreBookmark *)bookmark;
-(id)copyNextUntypedEvent;
-(id)initWithStreamDatastore:(id)arg1 bookmark:(id)arg2 ;
-(id)initWithStreamDatastore:(id)arg1 startTime:(double)arg2 ;
-(id)initWithStreamDatastore:(id)arg1 currentFrameStore:(id)arg2 frameStoreOffset:(unsigned long long)arg3 iterationStartTime:(double)arg4 ;
-(void)nextEventWithContext:(/*^block*/id)arg1 ;
-(id)copyPeekEvent;
-(id)copyNextEvent;
-(id)copyNextEventAndMoveBookmark:(BOOL)arg1 ;
-(id)copyPeekUntypedEvent;
-(BMFrameStore *)currentFrameStore;
-(void)dealloc;
@end

