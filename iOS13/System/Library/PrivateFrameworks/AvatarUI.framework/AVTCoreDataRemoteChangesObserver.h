/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCoreDataRemoteChangesObserver.h>

@protocol AVTCoreDataRemoteChangesObserver
@required
-(void)addChangesHandler:(/*^block*/id)arg1;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;

@end


@protocol AVTCoreDataPersistentStoreConfiguration, AVTUILogger, OS_dispatch_queue, AVTEventCoalescer, NSObject;
@class NSObject, AVTCoreEnvironment, NSMutableArray;

@interface AVTCoreDataRemoteChangesObserver : NSObject <AVTCoreDataRemoteChangesObserver> {

	id<AVTCoreDataPersistentStoreConfiguration> _configuration;
	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<AVTEventCoalescer> _coalescer;
	AVTCoreEnvironment* _environment;
	id<NSObject> _observationToken;
	NSMutableArray* _changeHandlers;
	NSMutableArray* _transactionsForPendingChanges;

}

@property (nonatomic,readonly) id<AVTCoreDataPersistentStoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<AVTEventCoalescer> coalescer;                                        //@synthesize coalescer=_coalescer - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;                                       //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) id<NSObject> observationToken;                                            //@synthesize observationToken=_observationToken - In the implementation block
@property (nonatomic,readonly) NSMutableArray * changeHandlers;                                        //@synthesize changeHandlers=_changeHandlers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * transactionsForPendingChanges;                         //@synthesize transactionsForPendingChanges=_transactionsForPendingChanges - In the implementation block
-(AVTCoreEnvironment *)environment;
-(id<AVTUILogger>)logger;
-(id<AVTCoreDataPersistentStoreConfiguration>)configuration;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<AVTEventCoalescer>)coalescer;
-(id<NSObject>)observationToken;
-(void)addChangesHandler:(/*^block*/id)arg1 ;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(id)initWithConfiguration:(id)arg1 workQueue:(id)arg2 coalescer:(id)arg3 environment:(id)arg4 ;
-(NSMutableArray *)changeHandlers;
-(NSMutableArray *)transactionsForPendingChanges;
-(void)performManagedObjectContextWork:(/*^block*/id)arg1 ;
-(void)registerCoalescerEventHandler;
-(void)processRemoteChangeNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setObservationToken:(id<NSObject>)arg1 ;
-(id)changeTransactionsForToken:(id)arg1 managedObjectContext:(id)arg2 ;
@end

