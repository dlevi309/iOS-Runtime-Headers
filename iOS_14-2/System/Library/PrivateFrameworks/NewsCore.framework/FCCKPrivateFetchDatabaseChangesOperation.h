/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setResultServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(FCCKPrivateDatabaseServerChangeToken *)resultServerChangeToken;
-(BOOL)resultMoreComing;
-(void)setResultMoreComing:(BOOL)arg1 ;
-(void)setPreviousServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(void)setFetchDatabaseChangesCompletionBlock:(id)arg1 ;
-(void)setResultChangedZoneIDs:(NSArray *)arg1 ;
-(void)setResultDeletedZoneIDs:(NSArray *)arg1 ;
-(NSArray *)resultChangedZoneIDs;
-(NSArray *)resultDeletedZoneIDs;
-(FCCKPrivateDatabaseServerChangeToken *)previousServerChangeToken;
-(id)fetchDatabaseChangesCompletionBlock;
@end

