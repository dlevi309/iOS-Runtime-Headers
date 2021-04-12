/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSyncRemoteKnowledgeStorage.h>

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;
@class _DKSyncCloudKitKnowledgeStorage;

@interface _DKSyncDownCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage> {

	_DKSyncCloudKitKnowledgeStorage* _common;
	id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;

}

@property (retain) _DKSyncCloudKitKnowledgeStorage * common;                             //@synthesize common=_common - In the implementation block
@property (retain) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAvailable) BOOL available; 
+(id)sharedInstance;
-(id)init;
-(id)name;
-(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)delegate;
-(void)setDelegate:(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)arg1 ;
-(void)start;
-(BOOL)isAvailable;
-(void)setFetchDelegate:(id)arg1 ;
-(long long)transportType;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)cancelOutstandingOperations;
-(BOOL)hasAdditionsFlagForPeer:(id)arg1 ;
-(BOOL)hasDeletionsFlagForPeer:(id)arg1 ;
-(void)clearPrewarmedFlag;
-(void)prewarmFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(_DKSyncCloudKitKnowledgeStorage *)common;
-(void)setCommon:(_DKSyncCloudKitKnowledgeStorage *)arg1 ;
@end

