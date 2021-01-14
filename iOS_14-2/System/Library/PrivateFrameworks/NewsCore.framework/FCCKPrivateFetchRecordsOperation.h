/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(NSDictionary *)resultRecordsByRecordID;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)desiredKeys;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(id)fetchRecordsCompletionBlock;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setResultRecordsByRecordID:(NSDictionary *)arg1 ;
@end

