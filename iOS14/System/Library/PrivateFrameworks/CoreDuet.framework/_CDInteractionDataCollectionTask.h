/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_xpc_object;
@class NSObject, NSString, NSDate, _CDInteractionStore, _CDInteractionDataCollectionSession;

@interface _CDInteractionDataCollectionTask : NSObject {

	BOOL _selectedForDataCollection;
	BOOL _deleteSessionOnCleanup;
	NSObject*<OS_xpc_object> _activity;
	NSString* _sessionPath;
	NSDate* _collectionDate;
	_CDInteractionStore* _interactionStore;
	_CDInteractionDataCollectionSession* _session;
	double _samplingRate;
	unsigned long long _maxBatches;
	unsigned long long _daysPerBatch;

}

@property (nonatomic,copy,readonly) NSString * sessionPath;                              //@synthesize sessionPath=_sessionPath - In the implementation block
@property (nonatomic,copy,readonly) NSDate * collectionDate;                             //@synthesize collectionDate=_collectionDate - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;                     //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) _CDInteractionDataCollectionSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) double samplingRate;                                      //@synthesize samplingRate=_samplingRate - In the implementation block
@property (nonatomic,readonly) unsigned long long maxBatches;                            //@synthesize maxBatches=_maxBatches - In the implementation block
@property (nonatomic,readonly) unsigned long long daysPerBatch;                          //@synthesize daysPerBatch=_daysPerBatch - In the implementation block
@property (assign,nonatomic) BOOL selectedForDataCollection;                             //@synthesize selectedForDataCollection=_selectedForDataCollection - In the implementation block
@property (assign,nonatomic) BOOL deleteSessionOnCleanup;                                //@synthesize deleteSessionOnCleanup=_deleteSessionOnCleanup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;                        //@synthesize activity=_activity - In the implementation block
-(void)execute;
-(_CDInteractionStore *)interactionStore;
-(id)initWithStore:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 collectionDate:(id)arg4 samplingRate:(double)arg5 maxBatches:(unsigned long long)arg6 daysPerBatch:(unsigned long long)arg7 ;
-(NSObject*<OS_xpc_object>)activity;
-(_CDInteractionDataCollectionSession *)session;
-(void)_execute;
-(void)setSession:(_CDInteractionDataCollectionSession *)arg1 ;
-(void)cleanup;
-(unsigned long long)maxBatches;
-(void)setDeleteSessionOnCleanup:(BOOL)arg1 ;
-(NSDate *)collectionDate;
-(double)samplingRate;
-(unsigned long long)daysPerBatch;
-(void)setSelectedForDataCollection:(BOOL)arg1 ;
-(BOOL)selectedForDataCollection;
-(NSString *)sessionPath;
-(BOOL)deleteSessionOnCleanup;
-(id)initWithStore:(id)arg1 activity:(id)arg2 ;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
@end

