/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> storage;               //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy) id submissionBlock;                                 //@synthesize submissionBlock=_submissionBlock - In the implementation block
-(void)execute;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 dataDirectory:(id)arg4 collectionDate:(id)arg5 samplingRate:(double)arg6 daysPerBatch:(unsigned long long)arg7 eventStreams:(id)arg8 maxBatches:(unsigned long long)arg9 ;
-(NSObject*<OS_xpc_object>)activity;
-(id<_DKKnowledgeQuerying>)storage;
-(id)submissionBlock;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 ;
-(void)setSubmissionBlock:(id)arg1 ;
@end

