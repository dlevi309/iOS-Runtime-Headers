/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKArchiveRecordsOperationCallbacks.h>

@class NSArray, NSMutableDictionary, CKArchiveRecordsOperationInfo;

@interface CKArchiveRecordsOperation : CKDatabaseOperation <CKArchiveRecordsOperationCallbacks> {

	/*^block*/id _recordArchivedBlock;
	/*^block*/id _archiveRecordsCompletionBlock;
	NSArray* _recordIDs;
	NSMutableDictionary* _perItemErrors;

}

@property (nonatomic,retain) NSMutableDictionary * perItemErrors;                                                //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,readonly) id<CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKArchiveRecordsOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * recordIDs;                                                                  //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) id recordArchivedBlock;                                                               //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
@property (nonatomic,copy) id archiveRecordsCompletionBlock;                                                     //@synthesize archiveRecordsCompletionBlock=_archiveRecordsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSArray *)recordIDs;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)perItemErrors;
-(id)recordArchivedBlock;
-(id)archiveRecordsCompletionBlock;
-(void)setArchiveRecordsCompletionBlock:(id)arg1 ;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(void)handleRecordArchivalForRecordID:(id)arg1 error:(id)arg2 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
@end

