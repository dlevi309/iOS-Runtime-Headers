/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMapTable, NTKFaceSnapshotCacheRequest, NSMutableOrderedSet;

@interface NTKFaceSnapshotCache : NSObject {

	NSMutableDictionary* _snapshots;
	NSObject*<OS_dispatch_queue> _snapshotQueue;
	NSMapTable* _requestsByFace;
	NSMapTable* _callCountsByFace;
	NTKFaceSnapshotCacheRequest* _servicingRequest;
	NSMutableOrderedSet* _highPriorityRequests;
	NSMutableOrderedSet* _lowPriorityRequests;

}

@property (nonatomic,readonly) NSMutableDictionary * snapshots;                           //@synthesize snapshots=_snapshots - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> snapshotQueue;                //@synthesize snapshotQueue=_snapshotQueue - In the implementation block
@property (nonatomic,readonly) NSMapTable * requestsByFace;                               //@synthesize requestsByFace=_requestsByFace - In the implementation block
@property (nonatomic,readonly) NSMapTable * callCountsByFace;                             //@synthesize callCountsByFace=_callCountsByFace - In the implementation block
@property (nonatomic,retain) NTKFaceSnapshotCacheRequest * servicingRequest;              //@synthesize servicingRequest=_servicingRequest - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * highPriorityRequests;                  //@synthesize highPriorityRequests=_highPriorityRequests - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * lowPriorityRequests;                   //@synthesize lowPriorityRequests=_lowPriorityRequests - In the implementation block
+(id)snapshotCache;
-(NSObject*<OS_dispatch_queue>)snapshotQueue;
-(id)init;
-(NSMutableDictionary *)snapshots;
-(void)dealloc;
-(void)_snapshotProcessInterrupted:(id)arg1 ;
-(NSMapTable *)callCountsByFace;
-(void)_invokeCallbacksOfFace:(id)arg1 withSnapshot:(id)arg2 ;
-(NTKFaceSnapshotCacheRequest *)servicingRequest;
-(void)_attemptSnapshotForRequest:(id)arg1 ;
-(NSMapTable *)requestsByFace;
-(NSMutableOrderedSet *)highPriorityRequests;
-(NSMutableOrderedSet *)lowPriorityRequests;
-(void)_serviceRequestsIfIdle;
-(void)setServicingRequest:(NTKFaceSnapshotCacheRequest *)arg1 ;
-(id)cachedSnapshotOfFace:(id)arg1 ;
-(void)_attemptSnapshotOfFace:(id)arg1 atQOS:(unsigned)arg2 ;
-(void)cancelSnapshotRequest:(id)arg1 ;
-(void)fetchSnapshotWithRequest:(id)arg1 ;
-(void)setHighPriorityRequests:(NSMutableOrderedSet *)arg1 ;
-(void)setLowPriorityRequests:(NSMutableOrderedSet *)arg1 ;
@end

