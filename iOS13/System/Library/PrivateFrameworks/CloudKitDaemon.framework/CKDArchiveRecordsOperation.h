/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

@interface CKDArchiveRecordsOperation : CKDDatabaseOperation {

	/*^block*/id _recordArchivedBlock;
	NSArray* _recordIDs;

}

@property (nonatomic,retain) NSArray * recordIDs;               //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) id recordArchivedBlock;              //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
-(void)main;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)recordIDs;
-(id)recordArchivedBlock;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_handleRecordArchived:(id)arg1 responseCode:(id)arg2 ;
@end

