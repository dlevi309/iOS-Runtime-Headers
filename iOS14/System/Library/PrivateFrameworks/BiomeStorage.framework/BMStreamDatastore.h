/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/


@class NSString, NSMutableOrderedSet, BMStreamMetadata, BMFrameStore;

@interface BMStreamDatastore : NSObject {

	unsigned long long _permission;
	unsigned long long _datastoreVersion;
	unsigned long long _maxFileSize;
	NSString* _streamPath;
	NSMutableOrderedSet* _segmentNames;
	BMStreamMetadata* _metadata;
	NSString* _streamId;
	BMFrameStore* _framesStore;

}

@property (nonatomic,retain) BMFrameStore * framesStore;              //@synthesize framesStore=_framesStore - In the implementation block
@property (nonatomic,readonly) NSString * streamId;                   //@synthesize streamId=_streamId - In the implementation block
+(id)newFileNameWithTimestamp:(double)arg1 ;
+(double)timestampWithFilename:(id)arg1 ;
+(long long)fileSizeOfURL:(id)arg1 ;
+(unsigned long long)indexOfSegmentContainingEventTime:(double)arg1 fromSegments:(id)arg2 ;
+(id)orderedSegmentsInDirectory:(id)arg1 includeZeroSizeSegments:(BOOL)arg2 ;
-(unsigned long long)maxFileSize;
-(BMFrameStore *)framesStore;
-(id)newEnumeratorFromBookmark:(id)arg1 ;
-(id)newEnumeratorFromStartTime:(double)arg1 ;
-(id)initWithStream:(id)arg1 streamPath:(id)arg2 permission:(unsigned long long)arg3 config:(id)arg4 ;
-(BOOL)writeEventData:(id)arg1 dataVersion:(unsigned)arg2 timestamp:(double)arg3 ;
-(id)initWithStream:(id)arg1 permission:(unsigned long long)arg2 config:(id)arg3 ;
-(BOOL)writeEventWithEventBody:(id)arg1 timestamp:(double)arg2 ;
-(id)_localStreamPath;
-(void)pruneStreamToMaxStreamSizeInBytes:(unsigned long long)arg1 ;
-(id)initForPruningWithStream:(id)arg1 config:(id)arg2 ;
-(id)metadataPath;
-(Class)eventClass;
-(id)initForReadingWithStream:(id)arg1 config:(id)arg2 ;
-(BOOL)writeEventBytes:(const void*)arg1 length:(unsigned long long)arg2 dataVersion:(unsigned)arg3 timestamp:(double)arg4 ;
-(void)enumerateSegmentsFrom:(double)arg1 to:(double)arg2 withBlock:(/*^block*/id)arg3 ;
-(long long)indexForFrameStoreAfterFrameStore:(id)arg1 ;
-(id)filelockPath;
-(id)fetchEventsFrom:(double)arg1 to:(double)arg2 ;
-(BOOL)removeFrameStoreFileWithSegmentName:(id)arg1 ;
-(id)copySegmentAfterFrameStore:(id)arg1 createNewSegment:(BOOL)arg2 ;
-(id)newFrameStoreOfSegmentContainingEventTime:(double)arg1 ;
-(BOOL)writeEventClass:(Class)arg1 ;
-(BOOL)shouldRemoveEmptyFrameStoreFromSegmentName:(id)arg1 ;
-(void)fetchEventsFrom:(double)arg1 to:(double)arg2 callback:(/*^block*/id)arg3 ;
-(void)eventsFrom:(double)arg1 to:(double)arg2 shouldDeleteUsingBlock:(/*^block*/id)arg3 ;
-(void)setFramesStore:(BMFrameStore *)arg1 ;
-(BOOL)writeEventWithEventBody:(id)arg1 ;
-(void)removeEventsFrom:(double)arg1 to:(double)arg2 pruneFutureEvents:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)copySegmentWithFilename:(id)arg1 error:(id*)arg2 ;
-(id)loadMetadata;
-(id)initForWritingWithStream:(id)arg1 config:(id)arg2 ;
-(BOOL)tryToAddTypeInfoToStoreEvent:(id)arg1 ;
-(BOOL)saveMetadata:(id)arg1 ;
-(void)syncMappedFiles;
-(NSString *)streamId;
-(void)nextEventFromFrameStore:(id)arg1 withOffset:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)updateWithNewSegmentNames;
-(id)segmentNames;
-(unsigned long long)streamSizeInBytes;
-(id)copyNextSegmentAfterIndex:(long long*)arg1 ;
-(id)newFramestoreWithTime:(double)arg1 ;
-(void)dealloc;
-(void)enumerateEventsFrom:(double)arg1 to:(double)arg2 withBlock:(/*^block*/id)arg3 ;
@end

