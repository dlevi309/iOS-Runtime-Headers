/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_xpc_object, _DKKnowledgeQuerying;
@class NSObject, NSString, NSDate, _CDDataCollectionSession, _CDEventStreamsRegister;

@interface _CDDataCollection : NSObject {

	BOOL _selectedForDataCollection;
	BOOL _deleteSessionOnCleanup;
	NSObject*<OS_xpc_object> _activity;
	id<_DKKnowledgeQuerying> _storage;
	/*^block*/id _submissionBlock;
	NSString* _dataDirectory;
	NSString* _sessionPath;
	NSDate* _collectionDate;
	_CDDataCollectionSession* _session;
	double _samplingRate;
	unsigned long long _daysPerBatch;
	unsigned long long _maxBatches;
	_CDEventStreamsRegister* _eventStreamsRegister;

}

@property (nonatomic,copy,readonly) NSString * dataDirectory;                               //@synthesize dataDirectory=_dataDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataPath; 
@property (nonatomic,copy,readonly) NSString * sessionPath;                                 //@synthesize sessionPath=_sessionPath - In the implementation block
@property (nonatomic,copy,readonly) NSDate * collectionDate;                                //@synthesize collectionDate=_collectionDate - In the implementation block
@property (nonatomic,retain) _CDDataCollectionSession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) double samplingRate;                                         //@synthesize samplingRate=_samplingRate - In the implementation block
@property (nonatomic,readonly) unsigned long long daysPerBatch;                             //@synthesize daysPerBatch=_daysPerBatch - In the implementation block
@property (nonatomic,readonly) unsigned long long maxBatches;                               //@synthesize maxBatches=_maxBatches - In the implementation block
@property (assign,nonatomic) BOOL selectedForDataCollection;                                //@synthesize selectedForDataCollection=_selectedForDataCollection - In the implementation block
@property (assign,nonatomic) BOOL deleteSessionOnCleanup;                                   //@synthesize deleteSessionOnCleanup=_deleteSessionOnCleanup - In the implementation block
@property (nonatomic,readonly) _CDEventStreamsRegister * eventStreamsRegister;              //@synthesize eventStreamsRegister=_eventStreamsRegister - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;                           //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> storage;                            //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy) id submissionBlock;                                              //@synthesize submissionBlock=_submissionBlock - In the implementation block
-(id<_DKKnowledgeQuerying>)storage;
-(NSObject*<OS_xpc_object>)activity;
-(void)_execute;
-(void)cleanup;
-(NSDate *)collectionDate;
-(_CDDataCollectionSession *)session;
-(double)samplingRate;
-(void)setSelectedForDataCollection:(BOOL)arg1 ;
-(BOOL)selectedForDataCollection;
-(void)setSession:(_CDDataCollectionSession *)arg1 ;
-(unsigned long long)daysPerBatch;
-(void)setDeleteSessionOnCleanup:(BOOL)arg1 ;
-(unsigned long long)maxBatches;
-(id)truncatedFileHandle;
-(BOOL)submitDataForCollection;
-(NSString *)sessionPath;
-(BOOL)deleteSessionOnCleanup;
-(NSString *)dataDirectory;
-(NSString *)dataPath;
-(id)submissionBlock;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 ;
-(void)execute;
-(void)setSubmissionBlock:(id)arg1 ;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 dataDirectory:(id)arg4 collectionDate:(id)arg5 samplingRate:(double)arg6 daysPerBatch:(unsigned long long)arg7 eventStreams:(id)arg8 maxBatches:(unsigned long long)arg9 ;
-(_CDEventStreamsRegister *)eventStreamsRegister;
@end

