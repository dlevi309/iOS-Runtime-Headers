/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKArchiveRecordsOperation : CKDatabaseOperation {

	/*^block*/id _recordArchivedBlock;
	/*^block*/id _archiveRecordsCompletionBlock;
	NSArray* _recordIDs;
	NSMutableDictionary* _perItemErrors;

}

@property (nonatomic,retain) NSMutableDictionary * perItemErrors;              //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) id recordArchivedBlock;                             //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
@property (nonatomic,copy) id archiveRecordsCompletionBlock;                   //@synthesize archiveRecordsCompletionBlock=_archiveRecordsCompletionBlock - In the implementation block
-(id)init;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)recordIDs;
-(id)recordArchivedBlock;
-(id)archiveRecordsCompletionBlock;
-(NSMutableDictionary *)perItemErrors;
-(void)setArchiveRecordsCompletionBlock:(id)arg1 ;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
@end

