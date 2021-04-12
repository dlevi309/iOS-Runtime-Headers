/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class CKServerChangeToken;

@interface CKFetchDatabaseChangesOperation : CKDatabaseOperation {

	BOOL _fetchAllChanges;
	/*^block*/id _recordZoneWithIDChangedBlock;
	/*^block*/id _recordZoneWithIDWasDeletedBlock;
	/*^block*/id _recordZoneWithIDWasPurgedBlock;
	/*^block*/id _changeTokenUpdatedBlock;
	/*^block*/id _fetchDatabaseChangesCompletionBlock;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	CKServerChangeToken* _serverChangeToken;
	long long _status;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;                    //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) long long status;                                           //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                       //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDChangedBlock;                              //@synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasDeletedBlock;                           //@synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasPurgedBlock;                            //@synthesize recordZoneWithIDWasPurgedBlock=_recordZoneWithIDWasPurgedBlock - In the implementation block
@property (nonatomic,copy) id changeTokenUpdatedBlock;                                   //@synthesize changeTokenUpdatedBlock=_changeTokenUpdatedBlock - In the implementation block
@property (nonatomic,copy) id fetchDatabaseChangesCompletionBlock;                       //@synthesize fetchDatabaseChangesCompletionBlock=_fetchDatabaseChangesCompletionBlock - In the implementation block
-(id)init;
-(long long)status;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(id)initWithPreviousServerChangeToken:(id)arg1 ;
-(void)setRecordZoneWithIDChangedBlock:(id)arg1 ;
-(void)setRecordZoneWithIDWasDeletedBlock:(id)arg1 ;
-(void)setChangeTokenUpdatedBlock:(id)arg1 ;
-(void)setFetchDatabaseChangesCompletionBlock:(id)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setRecordZoneWithIDWasPurgedBlock:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
-(BOOL)fetchAllChanges;
-(id)recordZoneWithIDChangedBlock;
-(id)recordZoneWithIDWasDeletedBlock;
-(id)fetchDatabaseChangesCompletionBlock;
-(id)changeTokenUpdatedBlock;
-(id)recordZoneWithIDWasPurgedBlock;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
@end

