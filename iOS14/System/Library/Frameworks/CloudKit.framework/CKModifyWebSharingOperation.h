/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKModifyWebSharingOperationCallbacks.h>

@class NSArray, NSMutableDictionary, NSMutableArray, CKModifyWebSharingOperationInfo;

@interface CKModifyWebSharingOperation : CKDatabaseOperation <CKModifyWebSharingOperationCallbacks> {

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

@property (nonatomic,readonly) id<CKModifyWebSharingOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKModifyWebSharingOperationInfo * operationInfo; 
@property (nonatomic,retain) NSArray * recordIDsToShare;                                                           //@synthesize recordIDsToShare=_recordIDsToShare - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToUnshare;                                                         //@synthesize recordIDsToUnshare=_recordIDsToUnshare - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                                                   //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * sharedRecordIDs;                                                     //@synthesize sharedRecordIDs=_sharedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * unsharedRecordIDs;                                                   //@synthesize unsharedRecordIDs=_unsharedRecordIDs - In the implementation block
@property (nonatomic,copy) NSArray * recordIDsToShareReadWrite;                                                    //@synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite - In the implementation block
@property (nonatomic,copy) id recordSharedBlock;                                                                   //@synthesize recordSharedBlock=_recordSharedBlock - In the implementation block
@property (nonatomic,copy) id recordUnsharedBlock;                                                                 //@synthesize recordUnsharedBlock=_recordUnsharedBlock - In the implementation block
@property (nonatomic,copy) id webShareRecordsCompletionBlock;                                                      //@synthesize webShareRecordsCompletionBlock=_webShareRecordsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSArray *)recordIDsToShare;
-(void)setRecordIDsToShare:(NSArray *)arg1 ;
-(NSArray *)recordIDsToUnshare;
-(void)setRecordIDsToUnshare:(NSArray *)arg1 ;
-(NSArray *)recordIDsToShareReadWrite;
-(void)setRecordIDsToShareReadWrite:(NSArray *)arg1 ;
-(id)recordSharedBlock;
-(id)recordUnsharedBlock;
-(id)webShareRecordsCompletionBlock;
-(NSMutableArray *)sharedRecordIDs;
-(NSMutableArray *)unsharedRecordIDs;
-(void)setWebShareRecordsCompletionBlock:(id)arg1 ;
-(void)setRecordSharedBlock:(id)arg1 ;
-(void)setRecordUnsharedBlock:(id)arg1 ;
-(void)handleWebSharingRevocationForRecordID:(id)arg1 error:(id)arg2 ;
-(void)setUnsharedRecordIDs:(NSMutableArray *)arg1 ;
-(void)handleWebSharingInitiationForRecordID:(id)arg1 sharingKey:(id)arg2 baseSharingToken:(id)arg3 error:(id)arg4 ;
-(void)setSharedRecordIDs:(NSMutableArray *)arg1 ;
-(id)initWithRecordIDsToWebShare:(id)arg1 recordIDsToUnshare:(id)arg2 ;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
@end

