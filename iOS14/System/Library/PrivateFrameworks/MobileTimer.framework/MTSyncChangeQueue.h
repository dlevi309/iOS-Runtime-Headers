/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol OS_dispatch_queue, NAScheduler, OS_dispatch_group, MTSyncChangeStore;
@class NSObject, NSMutableArray;

@interface MTSyncChangeQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<NAScheduler> _serializer;
	NSObject*<OS_dispatch_group> _changesLoaded;
	id<MTSyncChangeStore> _changeStore;
	NSMutableArray* _changeQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                              //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> changesLoaded;              //@synthesize changesLoaded=_changesLoaded - In the implementation block
@property (nonatomic,retain) id<MTSyncChangeStore> changeStore;                       //@synthesize changeStore=_changeStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * changeQueue;                            //@synthesize changeQueue=_changeQueue - In the implementation block
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)_enqueueChange:(id)arg1 changeCompareBlock:(/*^block*/id)arg2 ;
-(id)resolveChange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSObject*<OS_dispatch_group>)changesLoaded;
-(id)_resolveChange:(id)arg1 resolutionHandler:(/*^block*/id)arg2 ;
-(void)dequeueChanges:(id)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setChangeQueue:(NSMutableArray *)arg1 ;
-(void)setChangesLoaded:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)performBlockOnceChangesAreLoaded:(/*^block*/id)arg1 async:(BOOL)arg2 ;
-(void)enqueueChange:(id)arg1 ;
-(id)initWithChangeStore:(id)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_enqueueAction:(id)arg1 ;
-(void)persistChanges;
-(void)loadChanges;
-(BOOL)hasPendingChanges;
-(NSMutableArray *)changeQueue;
-(id)_resolveChange:(id)arg1 ;
-(id<MTSyncChangeStore>)changeStore;
-(id)pendingChanges;
-(void)removePendingChanges;
-(void)setChangeStore:(id<MTSyncChangeStore>)arg1 ;
@end

