/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPContainerPersister.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface MSPFileContainerPersister : MSPContainerPersister {

	NSURL* _persistenceFileURL;
	NSObject*<OS_dispatch_queue> _ioQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ioQueue;              //@synthesize ioQueue=_ioQueue - In the implementation block
@property (nonatomic,readonly) NSURL * persistenceFileURL;                      //@synthesize persistenceFileURL=_persistenceFileURL - In the implementation block
+(void)initialize;
-(id)init;
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ioQueue;
-(void)setIoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)newStateSnapshot;
-(BOOL)getSnapshot:(out id*)arg1 data:(out id*)arg2 forNewContents:(id)arg3 edits:(id)arg4 appliedToOldContents:(id)arg5 error:(out id*)arg6 ;
-(BOOL)getSnapshot:(out id*)arg1 data:(out id*)arg2 mergingCurrentState:(id)arg3 withState:(id)arg4 mergeOptions:(id)arg5 error:(out id*)arg6 ;
-(id)stateSnapshotFromData:(id)arg1 ;
-(id)initWithPersistenceFileAtURL:(id)arg1 ;
-(void)fetchStateSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)commitByCreatingStateSnapshotAndDataWithCreationHandler:(/*^block*/id)arg1 error:(out id*)arg2 ;
-(NSURL *)persistenceFileURL;
@end

