/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMapTable, NSObject;

@interface NTKFaceSnapshotCache : NSObject {

	NSMutableDictionary* _snapshots;
	NSMapTable* _callbacks;
	NSMapTable* _faceQOS;
	NSMapTable* _callCount;
	NSObject*<OS_dispatch_queue> _snapshotQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * snapshots;                         //@synthesize snapshots=_snapshots - In the implementation block
@property (nonatomic,readonly) NSMapTable * callbacks;                                  //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,readonly) NSMapTable * faceQOS;                                    //@synthesize faceQOS=_faceQOS - In the implementation block
@property (nonatomic,readonly) NSMapTable * callCount;                                  //@synthesize callCount=_callCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> snapshotQueue;              //@synthesize snapshotQueue=_snapshotQueue - In the implementation block
+(id)snapshotCache;
-(id)init;
-(void)dealloc;
-(NSMapTable *)callbacks;
-(NSObject*<OS_dispatch_queue>)snapshotQueue;
-(NSMutableDictionary *)snapshots;
-(NSMapTable *)callCount;
-(void)_snapshotProcessInterrupted:(id)arg1 ;
-(NSMapTable *)faceQOS;
-(void)_attemptSnapshotOfFace:(id)arg1 ;
-(void)_invokeCallbacksOfFace:(id)arg1 withSnapshot:(id)arg2 ;
-(id)cachedSnapshotOfFace:(id)arg1 ;
-(void)fetchSnapshotOfFace:(id)arg1 atQOS:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
@end

