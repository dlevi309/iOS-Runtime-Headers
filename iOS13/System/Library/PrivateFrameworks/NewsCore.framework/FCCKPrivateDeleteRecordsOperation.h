/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateDeleteRecordsOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordIDsToDelete;
	/*^block*/id _deleteRecordsCompletionBlock;
	NSArray* _resultSavedRecords;
	NSArray* _resultDeletedRecordIDs;

}

@property (nonatomic,retain) NSArray * resultSavedRecords;                  //@synthesize resultSavedRecords=_resultSavedRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultDeletedRecordIDs;              //@synthesize resultDeletedRecordIDs=_resultDeletedRecordIDs - In the implementation block
@property (nonatomic,copy) NSArray * recordIDsToDelete;                     //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,copy) id deleteRecordsCompletionBlock;                 //@synthesize deleteRecordsCompletionBlock=_deleteRecordsCompletionBlock - In the implementation block
-(NSArray *)recordIDsToDelete;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultDeletedRecordIDs:(NSArray *)arg1 ;
-(NSArray *)resultDeletedRecordIDs;
-(NSArray *)resultSavedRecords;
-(void)setResultSavedRecords:(NSArray *)arg1 ;
-(void)setDeleteRecordsCompletionBlock:(id)arg1 ;
-(id)deleteRecordsCompletionBlock;
@end

