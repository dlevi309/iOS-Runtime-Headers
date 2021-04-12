/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPreviousServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setFetchRecordZoneChangesCompletionBlock:(id)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(FCCKPrivateDatabaseServerChangeToken *)previousServerChangeToken;
-(BOOL)fetchAllChanges;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(NSArray *)desiredKeys;
-(void)setResultServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(FCCKPrivateDatabaseServerChangeToken *)resultServerChangeToken;
-(CKRecordZoneID *)recordZoneID;
-(id)fetchRecordZoneChangesCompletionBlock;
-(BOOL)fetchNewestChangesFirst;
-(void)setFetchNewestChangesFirst:(BOOL)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)_configurationForDestination:(long long)arg1 ;
-(void)setResultChangedRecords:(NSArray *)arg1 ;
-(void)setResultDeletedRecordIDs:(NSArray *)arg1 ;
-(void)setResultMoreComing:(BOOL)arg1 ;
-(BOOL)resultMoreComing;
-(NSArray *)resultChangedRecords;
-(NSArray *)resultDeletedRecordIDs;
@end

