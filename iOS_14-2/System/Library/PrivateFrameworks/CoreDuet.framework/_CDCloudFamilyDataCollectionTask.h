/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>

@protocol OS_xpc_object;
@class NSObject, NSString, NSDate, _CDInteractionStore, CNContactStore, HKHealthStore, NSMutableDictionary, _CDCloudFamilyDataCollectionSession;

@interface _CDCloudFamilyDataCollectionTask : NSObject <HMHomeManagerDelegate> {

	BOOL _selectedForDataCollection;
	BOOL _deleteSessionOnCleanup;
	NSObject*<OS_xpc_object> _activity;
	/*^block*/id _submissionBlock;
	NSString* _dataDirectory;
	NSString* _sessionPath;
	NSDate* _collectionDate;
	_CDInteractionStore* _interactionStore;
	CNContactStore* _contactStore;
	HKHealthStore* _healthStore;
	NSMutableDictionary* _videoBundleIDLookup;
	_CDCloudFamilyDataCollectionSession* _session;
	double _samplingRate;
	unsigned long long _maxBatches;
	unsigned long long _daysPerBatch;
	unsigned long long _airPlayVideoEventCount;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,copy) id submissionBlock;                                 //@synthesize submissionBlock=_submissionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)execute;
-(NSObject*<OS_xpc_object>)activity;
-(id)submissionBlock;
-(void)setSubmissionBlock:(id)arg1 ;
-(id)initWithActivity:(id)arg1 ;
-(id)eventDictsForContacts:(id)arg1 ;
@end

