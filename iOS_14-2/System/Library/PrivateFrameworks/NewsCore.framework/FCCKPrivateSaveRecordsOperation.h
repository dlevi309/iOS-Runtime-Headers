/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateSaveRecordsOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordsToSave;
	long long _savePolicy;
	/*^block*/id _saveRecordsCompletionBlock;
	NSArray* _resultSavedRecords;

}

@property (nonatomic,retain) NSArray * resultSavedRecords;              //@synthesize resultSavedRecords=_resultSavedRecords - In the implementation block
@property (nonatomic,copy) NSArray * recordsToSave;                     //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (assign,nonatomic) long long savePolicy;                      //@synthesize savePolicy=_savePolicy - In the implementation block
@property (nonatomic,copy) id saveRecordsCompletionBlock;               //@synthesize saveRecordsCompletionBlock=_saveRecordsCompletionBlock - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(long long)savePolicy;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(void)setSavePolicy:(long long)arg1 ;
-(id)saveRecordsCompletionBlock;
-(NSArray *)resultSavedRecords;
-(void)setResultSavedRecords:(NSArray *)arg1 ;
-(NSArray *)recordsToSave;
-(void)setSaveRecordsCompletionBlock:(id)arg1 ;
@end

