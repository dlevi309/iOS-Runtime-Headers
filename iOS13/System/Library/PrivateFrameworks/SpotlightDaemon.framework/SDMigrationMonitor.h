/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/

#import <libobjc.A.dylib/SDEventHandlerProvider.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SDMigrationMonitor : NSObject <SDEventHandlerProvider> {

	BOOL _unlocked;
	BOOL _foundExtensions;
	BOOL _finishedDataMigration;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completionBlock;
	/*^block*/id _eventHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL unlocked;                                   //@synthesize unlocked=_unlocked - In the implementation block
@property (assign,nonatomic) BOOL foundExtensions;                            //@synthesize foundExtensions=_foundExtensions - In the implementation block
@property (assign,nonatomic) BOOL finishedDataMigration;                      //@synthesize finishedDataMigration=_finishedDataMigration - In the implementation block
@property (nonatomic,copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id eventHandler;                                   //@synthesize eventHandler=_eventHandler - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)unlock;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)unlocked;
-(void)setUnlocked:(BOOL)arg1 ;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(void)_didFindExtensions:(id)arg1 ;
-(void)_finishMigration;
-(void)registerHandlerWithEventMonitor:(id)arg1 ;
-(void)suspendMigrationQueue;
-(void)resumeMigrationQueue;
-(void)monitorDataMigrationWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)foundExtensions;
-(void)setFoundExtensions:(BOOL)arg1 ;
-(BOOL)finishedDataMigration;
-(void)setFinishedDataMigration:(BOOL)arg1 ;
@end

