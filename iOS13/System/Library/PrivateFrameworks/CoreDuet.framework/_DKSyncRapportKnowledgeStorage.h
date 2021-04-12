/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_DKSyncRapportStorage.h>
#import <libobjc.A.dylib/_DKSyncRemoteKnowledgeStorage.h>

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;
@class _DKSync2Policy;

@interface _DKSyncRapportKnowledgeStorage : _DKSyncRapportStorage <_DKSyncRemoteKnowledgeStorage> {

	unsigned long long _currentChangeSetSequenceNumber;
	id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
	_DKSync2Policy* _policy;

}

@property (nonatomic,readonly) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _DKSync2Policy * policy;                                                //@synthesize policy=_policy - In the implementation block
+(id)sharedInstance;
-(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)delegate;
-(void)setFetchDelegate:(id)arg1 ;
-(void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(_DKSync2Policy *)policy;
-(void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)hasAdditionsFlagForPeer:(id)arg1 ;
-(BOOL)hasDeletionsFlagForPeer:(id)arg1 ;
-(void)clearPrewarmedFlag;
-(void)prewarmFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerRequestIDsWithClient:(id)arg1 ;
-(void)setPolicy:(_DKSync2Policy *)arg1 ;
-(void)handleFetchEventsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)handleFetchDeletedEventIDsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)handleFetchEventsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)handleUnexpectedRequest:(id)arg1 fromPeer:(id)arg2 ;
-(id)changeSetForSyncWithEventsToInsert:(id)arg1 eventIDsToDeletes:(id)arg2 error:(id*)arg3 ;
-(id)dataFromChangeSet:(id)arg1 didCompress:(BOOL*)arg2 ;
-(void)handleUnexpectedResponse:(id)arg1 fromPeer:(id)arg2 ;
-(id)changeSetFromCompressedData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 ;
-(void)handleFetchDeletedEventIDsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

