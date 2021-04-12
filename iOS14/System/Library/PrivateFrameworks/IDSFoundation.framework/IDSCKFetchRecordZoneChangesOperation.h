/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKFetchRecordZoneChangesOperation : IDSCKDatabaseOperation {

	BOOL _fetchAllChanges;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _fetchRecordZoneChangesCompletionBlock;

}

@property (assign,nonatomic) BOOL fetchAllChanges;                                //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                 //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                        //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                 //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                     //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordZoneChangesCompletionBlock;              //@synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock - In the implementation block
+(id)alloc;
+(Class)__class;
-(id)recordChangedBlock;
-(id)recordWithIDWasDeletedBlock;
-(id)fetchRecordZoneChangesCompletionBlock;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setFetchRecordZoneChangesCompletionBlock:(id)arg1 ;
-(BOOL)fetchAllChanges;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(id)recordZoneChangeTokensUpdatedBlock;
-(id)recordZoneFetchCompletionBlock;
@end

