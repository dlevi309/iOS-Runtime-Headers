/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CKModifyWebSharingOperation : CKDatabaseOperation {

	/*^block*/id _recordSharedBlock;
	/*^block*/id _recordUnsharedBlock;
	/*^block*/id _webShareRecordsCompletionBlock;
	NSArray* _recordIDsToShareReadWrite;
	NSArray* _recordIDsToShare;
	NSArray* _recordIDsToUnshare;
	NSMutableDictionary* _recordErrors;
	NSMutableArray* _sharedRecordIDs;
	NSMutableArray* _unsharedRecordIDs;

}

@property (nonatomic,retain) NSArray * recordIDsToShare;                       //@synthesize recordIDsToShare=_recordIDsToShare - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToUnshare;                     //@synthesize recordIDsToUnshare=_recordIDsToUnshare - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;               //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * sharedRecordIDs;                 //@synthesize sharedRecordIDs=_sharedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * unsharedRecordIDs;               //@synthesize unsharedRecordIDs=_unsharedRecordIDs - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToShareReadWrite;              //@synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite - In the implementation block
@property (nonatomic,copy) id recordSharedBlock;                               //@synthesize recordSharedBlock=_recordSharedBlock - In the implementation block
@property (nonatomic,copy) id recordUnsharedBlock;                             //@synthesize recordUnsharedBlock=_recordUnsharedBlock - In the implementation block
@property (nonatomic,copy) id webShareRecordsCompletionBlock;                  //@synthesize webShareRecordsCompletionBlock=_webShareRecordsCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)recordIDsToShare;
-(void)setRecordIDsToShare:(NSArray *)arg1 ;
-(NSArray *)recordIDsToUnshare;
-(void)setRecordIDsToUnshare:(NSArray *)arg1 ;
-(NSArray *)recordIDsToShareReadWrite;
-(void)setRecordIDsToShareReadWrite:(NSArray *)arg1 ;
-(id)recordSharedBlock;
-(id)recordUnsharedBlock;
-(id)webShareRecordsCompletionBlock;
-(NSMutableDictionary *)recordErrors;
-(NSMutableArray *)sharedRecordIDs;
-(NSMutableArray *)unsharedRecordIDs;
-(void)setWebShareRecordsCompletionBlock:(id)arg1 ;
-(void)setRecordSharedBlock:(id)arg1 ;
-(void)setRecordUnsharedBlock:(id)arg1 ;
-(id)initWithRecordIDsToWebShare:(id)arg1 recordIDsToUnshare:(id)arg2 ;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(void)setSharedRecordIDs:(NSMutableArray *)arg1 ;
-(void)setUnsharedRecordIDs:(NSMutableArray *)arg1 ;
@end

