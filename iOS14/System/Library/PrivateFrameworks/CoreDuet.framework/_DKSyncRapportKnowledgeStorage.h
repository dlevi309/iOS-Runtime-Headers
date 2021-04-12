/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clearPrewarmedFlag;
-(BOOL)hasAdditionsFlagForPeer:(id)arg1 ;
-(void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)setFetchDelegate:(id)arg1 ;
-(void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPolicy:(_DKSync2Policy *)arg1 ;
-(_DKSync2Policy *)policy;
-(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)delegate;
-(void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)prewarmFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)hasDeletionsFlagForPeer:(id)arg1 ;
-(void)registerRequestIDsWithClient:(id)arg1 ;
@end

