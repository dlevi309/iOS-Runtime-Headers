/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, MTCoalescableWorkManifest;

@interface MTCoalescableWorkController : NSObject {

	BOOL _verboseDebugLoggingEnabled;
	unsigned _qosClass;
	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	MTCoalescableWorkManifest* _activeWorkManifest;
	MTCoalescableWorkManifest* _pendingWorkManifest;

}

@property (nonatomic,retain) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL verboseDebugLoggingEnabled;                              //@synthesize verboseDebugLoggingEnabled=_verboseDebugLoggingEnabled - In the implementation block
@property (assign,nonatomic) unsigned qosClass;                                            //@synthesize qosClass=_qosClass - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) MTCoalescableWorkManifest * activeWorkManifest;               //@synthesize activeWorkManifest=_activeWorkManifest - In the implementation block
@property (nonatomic,retain) MTCoalescableWorkManifest * pendingWorkManifest;              //@synthesize pendingWorkManifest=_pendingWorkManifest - In the implementation block
+(id)_uniqueGenericIdentifier;
+(id)controllerWithQosClass:(unsigned)arg1 identifier:(id)arg2 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)qosClass;
-(void)setQosClass:(unsigned)arg1 ;
-(id)initWithWorkQueue:(id)arg1 identifier:(id)arg2 ;
-(MTCoalescableWorkManifest *)activeWorkManifest;
-(MTCoalescableWorkManifest *)pendingWorkManifest;
-(void)schedule:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_syncScheduleUpdatePendingWork:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_syncScheduleStartActiveWork:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)verboseDebugLoggingEnabled;
-(void)setPendingWorkManifest:(MTCoalescableWorkManifest *)arg1 ;
-(void)setActiveWorkManifest:(MTCoalescableWorkManifest *)arg1 ;
-(void)_onWorkQueuePerformActiveWorkBlock;
-(void)schedule:(/*^block*/id)arg1 ;
-(void)setVerboseDebugLoggingEnabled:(BOOL)arg1 ;
@end

