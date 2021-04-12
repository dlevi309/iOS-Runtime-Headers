/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_xpc_object, _DKKnowledgeQuerying;
@class NSObject, NSString, NSDate, NSMutableDictionary, _CDAirPlayDataCollectionSession, _CDDateQuantizer;

@interface _CDAirPlayDataCollectionTask : NSObject {

	BOOL _selectedForDataCollection;
	BOOL _deleteSessionOnCleanup;
	NSObject*<OS_xpc_object> _activity;
	id<_DKKnowledgeQuerying> _storage;
	/*^block*/id _submissionBlock;
	NSString* _dataDirectory;
	NSString* _sessionPath;
	NSDate* _collectionDate;
	NSMutableDictionary* _videoBundleIDLookup;
	_CDAirPlayDataCollectionSession* _session;
	_CDDateQuantizer* _dateQuantizer;
	double _samplingRate;
	unsigned long long _daysPerBatch;
	unsigned long long _maxBatches;
	unsigned long long _airPlayVideoEventCount;

}

@property (nonatomic,copy,readonly) NSString * dataDirectory;                          //@synthesize dataDirectory=_dataDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataPath; 
@property (nonatomic,copy,readonly) NSString * sessionPath;                            //@synthesize sessionPath=_sessionPath - In the implementation block
@property (nonatomic,copy,readonly) NSDate * collectionDate;                           //@synthesize collectionDate=_collectionDate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * videoBundleIDLookup;              //@synthesize videoBundleIDLookup=_videoBundleIDLookup - In the implementation block
@property (nonatomic,retain) _CDAirPlayDataCollectionSession * session;                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) _CDDateQuantizer * dateQuantizer;                       //@synthesize dateQuantizer=_dateQuantizer - In the implementation block
@property (nonatomic,readonly) double samplingRate;                                    //@synthesize samplingRate=_samplingRate - In the implementation block
@property (nonatomic,readonly) unsigned long long daysPerBatch;                        //@synthesize daysPerBatch=_daysPerBatch - In the implementation block
@property (nonatomic,readonly) unsigned long long maxBatches;                          //@synthesize maxBatches=_maxBatches - In the implementation block
@property (assign,nonatomic) unsigned long long airPlayVideoEventCount;                //@synthesize airPlayVideoEventCount=_airPlayVideoEventCount - In the implementation block
@property (assign,nonatomic) BOOL selectedForDataCollection;                           //@synthesize selectedForDataCollection=_selectedForDataCollection - In the implementation block
@property (assign,nonatomic) BOOL deleteSessionOnCleanup;                              //@synthesize deleteSessionOnCleanup=_deleteSessionOnCleanup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;                      //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> storage;                       //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy) id submissionBlock;                                         //@synthesize submissionBlock=_submissionBlock - In the implementation block
-(id<_DKKnowledgeQuerying>)storage;
-(NSObject*<OS_xpc_object>)activity;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 dataDirectory:(id)arg4 collectionDate:(id)arg5 samplingRate:(double)arg6 daysPerBatch:(unsigned long long)arg7 maxBatches:(unsigned long long)arg8 ;
-(void)_execute;
-(void)cleanup;
-(NSDate *)collectionDate;
-(void)setAirPlayVideoEventCount:(unsigned long long)arg1 ;
-(unsigned long long)airPlayVideoEventCount;
-(_CDAirPlayDataCollectionSession *)session;
-(double)samplingRate;
-(void)setSelectedForDataCollection:(BOOL)arg1 ;
-(BOOL)selectedForDataCollection;
-(void)setSession:(_CDAirPlayDataCollectionSession *)arg1 ;
-(unsigned long long)daysPerBatch;
-(void)setDeleteSessionOnCleanup:(BOOL)arg1 ;
-(unsigned long long)maxBatches;
-(id)truncatedFileHandle;
-(id)filterEventsByLongFormVideoAppEvents:(id)arg1 ;
-(void)writeEvents:(id)arg1 handle:(id)arg2 ;
-(BOOL)submitDataForCollection;
-(NSString *)sessionPath;
-(BOOL)deleteSessionOnCleanup;
-(NSString *)dataDirectory;
-(NSString *)dataPath;
-(_CDDateQuantizer *)dateQuantizer;
-(NSMutableDictionary *)videoBundleIDLookup;
-(id)submissionBlock;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 ;
-(void)execute;
-(void)setSubmissionBlock:(id)arg1 ;
@end

