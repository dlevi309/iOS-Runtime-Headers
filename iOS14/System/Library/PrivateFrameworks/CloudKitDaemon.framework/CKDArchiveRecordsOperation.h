/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

@interface CKDArchiveRecordsOperation : CKDDatabaseOperation {

	/*^block*/id _recordArchivedBlock;
	NSArray* _recordIDs;

}

@property (nonatomic,retain) NSArray * recordIDs;                                                              //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) id<CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id recordArchivedBlock;                                                             //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(NSArray *)recordIDs;
-(id)recordArchivedBlock;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)_handleRecordArchived:(id)arg1 responseCode:(id)arg2 ;
@end

