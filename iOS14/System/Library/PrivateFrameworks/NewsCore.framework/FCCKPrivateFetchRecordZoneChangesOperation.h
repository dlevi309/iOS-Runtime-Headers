/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class CKRecordZoneID, FCCKPrivateDatabaseServerChangeToken, NSArray;

@interface FCCKPrivateFetchRecordZoneChangesOperation : FCCKPrivateDatabaseOperation {

	BOOL _fetchNewestChangesFirst;
	BOOL _fetchAllChanges;
	BOOL _resultMoreComing;
	CKRecordZoneID* _recordZoneID;
	FCCKPrivateDatabaseServerChangeToken* _previousServerChangeToken;
	NSArray* _desiredKeys;
	/*^block*/id _fetchRecordZoneChangesCompletionBlock;
	NSArray* _resultChangedRecords;
	NSArray* _resultDeletedRecordIDs;
	FCCKPrivateDatabaseServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,retain) NSArray * resultChangedRecords;                                              //@synthesize resultChangedRecords=_resultChangedRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultDeletedRecordIDs;                                            //@synthesize resultDeletedRecordIDs=_resultDeletedRecordIDs - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabaseServerChangeToken * resultServerChangeToken;              //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL resultMoreComing;                                                       //@synthesize resultMoreComing=_resultMoreComing - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * recordZoneID;                                                 //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,copy) FCCKPrivateDatabaseServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                         //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL fetchNewestChangesFirst;                                                //@synthesize fetchNewestChangesFirst=_fetchNewestChangesFirst - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                                        //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id fetchRecordZoneChangesCompletionBlock;                                      //@synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setResultServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(FCCKPrivateDatabaseServerChangeToken *)resultServerChangeToken;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(BOOL)resultMoreComing;
-(id)_configurationForDestination:(long long)arg1 ;
-(void)setResultChangedRecords:(NSArray *)arg1 ;
-(void)setResultDeletedRecordIDs:(NSArray *)arg1 ;
-(void)setResultMoreComing:(BOOL)arg1 ;
-(NSArray *)resultChangedRecords;
-(NSArray *)resultDeletedRecordIDs;
-(id)fetchRecordZoneChangesCompletionBlock;
-(void)setFetchNewestChangesFirst:(BOOL)arg1 ;
-(BOOL)fetchNewestChangesFirst;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setPreviousServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(void)setFetchRecordZoneChangesCompletionBlock:(id)arg1 ;
-(NSArray *)desiredKeys;
-(CKRecordZoneID *)recordZoneID;
-(BOOL)fetchAllChanges;
-(FCCKPrivateDatabaseServerChangeToken *)previousServerChangeToken;
@end

