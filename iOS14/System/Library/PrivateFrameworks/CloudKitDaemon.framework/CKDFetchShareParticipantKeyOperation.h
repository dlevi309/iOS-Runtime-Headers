/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSDictionary, NSMutableDictionary;

@interface CKDFetchShareParticipantKeyOperation : CKDDatabaseOperation {

	BOOL _hasAttemptedShareUpdate;
	/*^block*/id _shareParticipantKeyFetchedBlock;
	NSMutableArray* _shareIDs;
	NSDictionary* _baseTokensByShareID;
	NSDictionary* _childRecordIDsByShareID;
	NSMutableDictionary* _sharesNeedingUpdateByID;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSMutableArray * shareIDs;                                                                  //@synthesize shareIDs=_shareIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * baseTokensByShareID;                                                         //@synthesize baseTokensByShareID=_baseTokensByShareID - In the implementation block
@property (nonatomic,retain) NSDictionary * childRecordIDsByShareID;                                                     //@synthesize childRecordIDsByShareID=_childRecordIDsByShareID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sharesNeedingUpdateByID;                                              //@synthesize sharesNeedingUpdateByID=_sharesNeedingUpdateByID - In the implementation block
@property (assign,nonatomic) BOOL hasAttemptedShareUpdate;                                                               //@synthesize hasAttemptedShareUpdate=_hasAttemptedShareUpdate - In the implementation block
@property (nonatomic,retain) id<CKFetchShareParticipantKeyOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id shareParticipantKeyFetchedBlock;                                                           //@synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSMutableArray *)shareIDs;
-(void)setShareIDs:(NSMutableArray *)arg1 ;
-(NSDictionary *)baseTokensByShareID;
-(void)setBaseTokensByShareID:(NSDictionary *)arg1 ;
-(NSDictionary *)childRecordIDsByShareID;
-(void)setChildRecordIDsByShareID:(NSDictionary *)arg1 ;
-(id)shareParticipantKeyFetchedBlock;
-(void)setShareParticipantKeyFetchedBlock:(id)arg1 ;
-(void)main;
-(BOOL)makeStateTransition;
-(void)fetchSharesFromServer;
-(NSMutableDictionary *)sharesNeedingUpdateByID;
-(BOOL)hasAttemptedShareUpdate;
-(void)setHasAttemptedShareUpdate:(BOOL)arg1 ;
-(void)updateShares;
-(void)_sendErrorForFailedShares;
-(void)_performCallbackForShareID:(id)arg1 withParticipantKey:(id)arg2 error:(id)arg3 ;
-(id)_participantKeyFromShare:(id)arg1 withError:(id*)arg2 ;
-(void)_handleFetchedShare:(id)arg1 withID:(id)arg2 error:(id)arg3 ;
-(void)setSharesNeedingUpdateByID:(NSMutableDictionary *)arg1 ;
@end

