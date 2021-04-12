/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class OSLogEventStream, NSMutableArray, _OSLogEventSerializationMetadata, OSLogEventSource, NSPredicate;

@interface OSLogEventSerializer : NSObject {

	OSLogEventStream* _stream;
	unsigned long long _maxLogEventBatchSize;
	unsigned long long _curBatchSize;
	NSMutableArray* _curBatchDictionaries;
	_OSLogEventSerializationMetadata* _metadata;
	unsigned long long _serializedEventCount;

}

@property (nonatomic,readonly) OSLogEventSource * source; 
@property (nonatomic,readonly) OSLogEventStream * stream;                                //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) unsigned long long curBatchSize;                            //@synthesize curBatchSize=_curBatchSize - In the implementation block
@property (nonatomic,readonly) NSMutableArray * curBatchDictionaries;                    //@synthesize curBatchDictionaries=_curBatchDictionaries - In the implementation block
@property (nonatomic,readonly) _OSLogEventSerializationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,copy) NSPredicate * filterPredicate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> target; 
@property (assign,nonatomic) unsigned long long maxLogEventBatchSize;                    //@synthesize maxLogEventBatchSize=_maxLogEventBatchSize - In the implementation block
@property (nonatomic,readonly) unsigned long long serializedEventCount;                  //@synthesize serializedEventCount=_serializedEventCount - In the implementation block
-(OSLogEventStream *)stream;
-(void)setTarget:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)filterPredicate;
-(unsigned long long)flags;
-(unsigned long long)maxLogEventBatchSize;
-(void)setMaxLogEventBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)serializedEventCount;
-(void)serializeFromDate:(id)arg1 ;
-(id)_dictForArg:(id)arg1 ;
-(id)initWithSource:(id)arg1 dataProcessingBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)serializeFromLastBoot;
-(void)serializeFromPosition:(id)arg1 ;
-(void)_serializeEvent:(id)arg1 ;
-(BOOL)_isBatchCompleted;
-(id)_dictForPlaceholder:(id)arg1 ;
-(id)_dictForDecomposedMessage:(id)arg1 index:(unsigned long long)arg2 ;
-(id)_arrayForDecomposedMessage:(id)arg1 ;
-(void)_completeBatch:(/*^block*/id)arg1 ;
-(id)_dictForDecomposedMessage:(id)arg1 ;
-(id)_dictionaryForProxy:(id)arg1 ;
-(unsigned long long)curBatchSize;
-(void)setCurBatchSize:(unsigned long long)arg1 ;
-(NSMutableArray *)curBatchDictionaries;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)target;
-(_OSLogEventSerializationMetadata *)metadata;
-(OSLogEventSource *)source;
@end

