/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateDeleteRecordZonesOperation : FCCKPrivateDatabaseOperation {

	BOOL _secureDatabaseOnly;
	NSArray* _recordZoneIDsToDelete;
	/*^block*/id _deleteRecordZonesCompletionBlock;
	NSArray* _resultDeletedRecordZoneIDs;

}

@property (nonatomic,retain) NSArray * resultDeletedRecordZoneIDs;              //@synthesize resultDeletedRecordZoneIDs=_resultDeletedRecordZoneIDs - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDsToDelete;                     //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (assign,nonatomic) BOOL secureDatabaseOnly;                           //@synthesize secureDatabaseOnly=_secureDatabaseOnly - In the implementation block
@property (nonatomic,copy) id deleteRecordZonesCompletionBlock;                 //@synthesize deleteRecordZonesCompletionBlock=_deleteRecordZonesCompletionBlock - In the implementation block
-(NSArray *)recordZoneIDsToDelete;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)secureDatabaseOnly;
-(void)setResultDeletedRecordZoneIDs:(NSArray *)arg1 ;
-(id)deleteRecordZonesCompletionBlock;
-(NSArray *)resultDeletedRecordZoneIDs;
-(void)setSecureDatabaseOnly:(BOOL)arg1 ;
-(void)setDeleteRecordZonesCompletionBlock:(id)arg1 ;
@end

