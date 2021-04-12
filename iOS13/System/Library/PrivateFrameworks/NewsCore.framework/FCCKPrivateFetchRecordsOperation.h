/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateFetchRecordsOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSDictionary* _resultRecordsByRecordID;

}

@property (nonatomic,retain) NSDictionary * resultRecordsByRecordID;              //@synthesize resultRecordsByRecordID=_resultRecordsByRecordID - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                   //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                 //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                        //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)desiredKeys;
-(id)fetchRecordsCompletionBlock;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultRecordsByRecordID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultRecordsByRecordID;
@end

