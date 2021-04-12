/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class FCCKPrivateDatabaseServerChangeToken, NSArray;

@interface FCCKPrivateFetchDatabaseChangesOperation : FCCKPrivateDatabaseOperation {

	BOOL _resultMoreComing;
	FCCKPrivateDatabaseServerChangeToken* _previousServerChangeToken;
	/*^block*/id _fetchDatabaseChangesCompletionBlock;
	NSArray* _resultChangedZoneIDs;
	NSArray* _resultDeletedZoneIDs;
	FCCKPrivateDatabaseServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,retain) NSArray * resultChangedZoneIDs;                                              //@synthesize resultChangedZoneIDs=_resultChangedZoneIDs - In the implementation block
@property (nonatomic,retain) NSArray * resultDeletedZoneIDs;                                              //@synthesize resultDeletedZoneIDs=_resultDeletedZoneIDs - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabaseServerChangeToken * resultServerChangeToken;              //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL resultMoreComing;                                                       //@synthesize resultMoreComing=_resultMoreComing - In the implementation block
@property (nonatomic,copy) FCCKPrivateDatabaseServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (nonatomic,copy) id fetchDatabaseChangesCompletionBlock;                                        //@synthesize fetchDatabaseChangesCompletionBlock=_fetchDatabaseChangesCompletionBlock - In the implementation block
-(void)setPreviousServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(void)setFetchDatabaseChangesCompletionBlock:(id)arg1 ;
-(FCCKPrivateDatabaseServerChangeToken *)previousServerChangeToken;
-(id)fetchDatabaseChangesCompletionBlock;
-(void)setResultServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(FCCKPrivateDatabaseServerChangeToken *)resultServerChangeToken;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultMoreComing:(BOOL)arg1 ;
-(BOOL)resultMoreComing;
-(void)setResultChangedZoneIDs:(NSArray *)arg1 ;
-(void)setResultDeletedZoneIDs:(NSArray *)arg1 ;
-(NSArray *)resultChangedZoneIDs;
-(NSArray *)resultDeletedZoneIDs;
@end

