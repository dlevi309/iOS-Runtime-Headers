/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSDictionary, NSArray, NSMutableDictionary;

@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation {

	/*^block*/id _shareParticipantKeyFetchedBlock;
	/*^block*/id _shareParticipantKeyCompletionBlock;
	NSDictionary* _baseTokensByShareID;
	NSDictionary* _childRecordIDsByShareID;
	NSArray* _shareIDs;
	NSMutableDictionary* _errorsByShareID;

}

@property (nonatomic,retain) NSArray * shareIDs;                                  //@synthesize shareIDs=_shareIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByShareID;               //@synthesize errorsByShareID=_errorsByShareID - In the implementation block
@property (nonatomic,retain) NSDictionary * baseTokensByShareID;                  //@synthesize baseTokensByShareID=_baseTokensByShareID - In the implementation block
@property (nonatomic,retain) NSDictionary * childRecordIDsByShareID;              //@synthesize childRecordIDsByShareID=_childRecordIDsByShareID - In the implementation block
@property (nonatomic,copy) id shareParticipantKeyFetchedBlock;                    //@synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock - In the implementation block
@property (nonatomic,copy) id shareParticipantKeyCompletionBlock;                 //@synthesize shareParticipantKeyCompletionBlock=_shareParticipantKeyCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(Class)operationInfoClass;
-(NSArray *)shareIDs;
-(void)setShareIDs:(NSArray *)arg1 ;
-(NSDictionary *)baseTokensByShareID;
-(void)setBaseTokensByShareID:(NSDictionary *)arg1 ;
-(NSDictionary *)childRecordIDsByShareID;
-(void)setChildRecordIDsByShareID:(NSDictionary *)arg1 ;
-(id)shareParticipantKeyFetchedBlock;
-(id)shareParticipantKeyCompletionBlock;
-(NSMutableDictionary *)errorsByShareID;
-(void)setShareParticipantKeyCompletionBlock:(id)arg1 ;
-(void)setShareParticipantKeyFetchedBlock:(id)arg1 ;
-(id)initWithShareIDs:(id)arg1 ;
-(void)setErrorsByShareID:(NSMutableDictionary *)arg1 ;
@end

