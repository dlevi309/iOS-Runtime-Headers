/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(NSArray *)recordIDsToDelete;
-(void)setResultDeletedRecordIDs:(NSArray *)arg1 ;
-(NSArray *)resultDeletedRecordIDs;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(NSArray *)resultSavedRecords;
-(void)setResultSavedRecords:(NSArray *)arg1 ;
-(id)deleteRecordsCompletionBlock;
-(void)setDeleteRecordsCompletionBlock:(id)arg1 ;
@end

