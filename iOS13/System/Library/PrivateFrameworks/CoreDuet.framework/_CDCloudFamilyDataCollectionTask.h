/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,copy,readonly) NSString * dataDirectory;                            //@synthesize dataDirectory=_dataDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataPath; 
@property (nonatomic,copy,readonly) NSString * sessionPath;                              //@synthesize sessionPath=_sessionPath - In the implementation block
@property (nonatomic,copy,readonly) NSDate * collectionDate;                             //@synthesize collectionDate=_collectionDate - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;                     //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * videoBundleIDLookup;                //@synthesize videoBundleIDLookup=_videoBundleIDLookup - In the implementation block
@property (nonatomic,retain) _CDCloudFamilyDataCollectionSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) double samplingRate;                                      //@synthesize samplingRate=_samplingRate - In the implementation block
@property (nonatomic,readonly) unsigned long long maxBatches;                            //@synthesize maxBatches=_maxBatches - In the implementation block
@property (nonatomic,readonly) unsigned long long daysPerBatch;                          //@synthesize daysPerBatch=_daysPerBatch - In the implementation block
@property (assign,nonatomic) unsigned long long airPlayVideoEventCount;                  //@synthesize airPlayVideoEventCount=_airPlayVideoEventCount - In the implementation block
@property (assign,nonatomic) BOOL selectedForDataCollection;                             //@synthesize selectedForDataCollection=_selectedForDataCollection - In the implementation block
@property (assign,nonatomic) BOOL deleteSessionOnCleanup;                                //@synthesize deleteSessionOnCleanup=_deleteSessionOnCleanup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;                        //@synthesize activity=_activity - In the implementation block
@property (nonatomic,copy) id submissionBlock;                                           //@synthesize submissionBlock=_submissionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_xpc_object>)activity;
-(_CDInteractionStore *)interactionStore;
-(void)_execute;
-(void)cleanup;
-(NSDate *)collectionDate;
-(void)setAirPlayVideoEventCount:(unsigned long long)arg1 ;
-(unsigned long long)airPlayVideoEventCount;
-(_CDCloudFamilyDataCollectionSession *)session;
-(double)samplingRate;
-(void)setSelectedForDataCollection:(BOOL)arg1 ;
-(BOOL)selectedForDataCollection;
-(void)setSession:(_CDCloudFamilyDataCollectionSession *)arg1 ;
-(unsigned long long)daysPerBatch;
-(void)setDeleteSessionOnCleanup:(BOOL)arg1 ;
-(unsigned long long)maxBatches;
-(id)truncatedFileHandle;
-(BOOL)submitDataForCollection;
-(NSString *)sessionPath;
-(BOOL)deleteSessionOnCleanup;
-(NSString *)dataDirectory;
-(NSString *)dataPath;
-(NSMutableDictionary *)videoBundleIDLookup;
-(id)submissionBlock;
-(void)execute;
-(void)setSubmissionBlock:(id)arg1 ;
-(id)initWithStorage:(id)arg1 contactStore:(id)arg2 healthStore:(id)arg3 activity:(id)arg4 sessionPath:(id)arg5 dataDirectory:(id)arg6 collectionDate:(id)arg7 samplingRate:(double)arg8 maxBatches:(unsigned long long)arg9 daysPerBatch:(unsigned long long)arg10 ;
-(id)labelMembers;
-(id)contactsInContactStore;
-(CNContactStore *)contactStore;
-(id)contactKeysToFetch;
-(id)contactRelationsUsingMe:(id)arg1 ;
-(id)contactsEmergencyFamily;
-(id)contactsEmergency;
-(id)contactsInHome;
-(id)contactParentsUsingRegexNamesUsingContacts:(id)arg1 ;
-(id)photosPeople;
-(id)contactIdsInFmfFollowingMyLocation;
-(id)contactIdsInFmfSharingLocationWithMe;
-(id)airDropPeople;
-(id)airDropPeopleAtHome;
-(id)avgOfAllCallsUsingManager:(id)arg1 ;
-(id)allEmailAndPhoneNumberHandlesForContact:(id)arg1 ;
-(id)aggregateInteractionDataUsingStore:(id)arg1 contact:(id)arg2 callHistoryManager:(id)arg3 avgCallDur:(id)arg4 ;
-(id)contactFamilyRelationForContact:(id)arg1 contactRelations:(id)arg2 ;
-(id)contactFamilyEmergencyForContact:(id)arg1 contactFamilyEmergency:(id)arg2 ;
-(id)contactEmergencyForContact:(id)arg1 contactEmergency:(id)arg2 ;
-(id)contactParentsForContact:(id)arg1 contactParents:(id)arg2 ;
-(id)contactsInHomeForContact:(id)arg1 homeContacts:(id)arg2 ;
-(id)contactFamilyNameForContact:(id)arg1 me:(id)arg2 ;
-(id)personRelationshipVocabularyByLocaleDictionary;
-(HKHealthStore *)healthStore;
-(id)relationshipRegularExpressionForRelationship;
-(BOOL)regexMatchForRegex:(id)arg1 string:(id)arg2 ;
-(id)allAirDropInteractionsFromStore:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(unsigned long long)indexToInsertDate:(id)arg1 array:(id)arg2 ;
-(id)messagesFeaturesFromInteractions:(id)arg1 ;
-(id)thirdPartyMessageFeaturesFromresults:(id)arg1 ;
-(id)callFeaturesFromInteractions:(id)arg1 avgCallLength:(double)arg2 contact:(id)arg3 ;
-(id)initWithActivity:(id)arg1 ;
-(id)chHandlesForContact:(id)arg1 ;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
@end

