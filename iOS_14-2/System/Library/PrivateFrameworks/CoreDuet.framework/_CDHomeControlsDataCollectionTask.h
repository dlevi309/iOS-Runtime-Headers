/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_xpc_object, _DKKnowledgeQuerying;
@class NSObject, NSString, NSDate, _CDHomeControlsDataCollectionSession;

@interface _CDHomeControlsDataCollectionTask : NSObject {

	BOOL _selectedForDataCollection;
	BOOL _deleteSessionOnCleanup;
	NSObject*<OS_xpc_object> _activity;
	NSString* _sessionPath;
	NSDate* _collectionDate;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	_CDHomeControlsDataCollectionSession* _session;
	double _samplingRate;
	unsigned long long _maxBatches;
	unsigned long long _daysPerBatch;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
-(void)execute;
-(NSObject*<OS_xpc_object>)activity;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 ;
@end

