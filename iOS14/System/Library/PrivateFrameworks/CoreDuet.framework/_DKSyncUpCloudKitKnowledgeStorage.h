/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSyncRemoteKnowledgeStorage.h>

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;
@class _DKSyncCloudKitKnowledgeStorage;

@interface _DKSyncUpCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage> {

	_DKSyncCloudKitKnowledgeStorage* _common;
	id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;

}

@property (retain) _DKSyncCloudKitKnowledgeStorage * common;                             //@synthesize common=_common - In the implementation block
@property (retain) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAvailable) BOOL available; 
+(id)sharedInstance;
-(void)setAvailable:(BOOL)arg1 ;
-(void)clearPrewarmedFlag;
-(BOOL)hasAdditionsFlagForPeer:(id)arg1 ;
-(void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelOutstandingOperations;
-(void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)setFetchDelegate:(id)arg1 ;
-(BOOL)isAvailable;
-(void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)delegate;
-(void)start;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(long long)transportType;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)name;
-(void)setDelegate:(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)arg1 ;
-(void)prewarmFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)setCommon:(_DKSyncCloudKitKnowledgeStorage *)arg1 ;
-(void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)hasDeletionsFlagForPeer:(id)arg1 ;
-(_DKSyncCloudKitKnowledgeStorage *)common;
@end

