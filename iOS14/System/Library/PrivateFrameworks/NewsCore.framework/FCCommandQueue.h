/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCCommandDelegate.h>

@protocol FCCommandQueueDelegate, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
@class FCCloudContext, NSString, FCKeyValueStore, NSObject, NSMutableArray;

@interface FCCommandQueue : NSObject <FCNetworkReachabilityObserving, FCAppActivityObserving, FCCommandDelegate> {

	BOOL _suspended;
	BOOL _executingCommand;
	FCCloudContext* _context;
	NSString* _persistentStorePath;
	NSString* _name;
	FCKeyValueStore* _persistentStore;
	long long _urgency;
	id<FCCommandQueueDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _pendingCommands;
	NSObject*<OS_dispatch_source> _cooldownTimer;
	NSObject*<OS_dispatch_group> _pendingCommandsGroup;
	NSObject*<OS_dispatch_group> _executingCommandsGroup;

}

@property (nonatomic,retain) FCCloudContext * context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * persistentStorePath;                                     //@synthesize persistentStorePath=_persistentStorePath - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * persistentStore;                                //@synthesize persistentStore=_persistentStore - In the implementation block
@property (assign,nonatomic) long long urgency;                                                //@synthesize urgency=_urgency - In the implementation block
@property (assign,nonatomic,__weak) id<FCCommandQueueDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingCommands;                                 //@synthesize pendingCommands=_pendingCommands - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> cooldownTimer;                      //@synthesize cooldownTimer=_cooldownTimer - In the implementation block
@property (assign,getter=isExecutingCommand,nonatomic) BOOL executingCommand;                  //@synthesize executingCommand=_executingCommand - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> pendingCommandsGroup;                //@synthesize pendingCommandsGroup=_pendingCommandsGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> executingCommandsGroup;              //@synthesize executingCommandsGroup=_executingCommandsGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWorkQueue;
-(FCKeyValueStore *)persistentStore;
-(BOOL)_isEmpty;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)clear;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_encodeCommand:(id)arg1 ;
-(void)_executeNextCommand;
-(void)_applicationDidEnterBackground;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setPersistentStorePath:(NSString *)arg1 ;
-(void)activityObservingApplicationDidEnterBackground;
-(BOOL)isSuspended;
-(NSString *)persistentStorePath;
-(long long)_qualityOfServiceForNextCommand;
-(void)command:(id)arg1 didFinishWithStatus:(unsigned long long)arg2 ;
-(void)setSuspended:(BOOL)arg1 ;
-(id<FCCommandQueueDelegate>)delegate;
-(void)setExecutingCommandsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(long long)urgency;
-(NSObject*<OS_dispatch_group>)executingCommandsGroup;
-(BOOL)isExecutingCommand;
-(void)setExecutingCommand:(BOOL)arg1 ;
-(void)_loadFromDisk;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)_serializeCommands:(id)arg1 toStore:(id)arg2 ;
-(id)initWithContext:(id)arg1 urgency:(long long)arg2 suspended:(BOOL)arg3 delegate:(id)arg4 ;
-(id)_decodeCommand:(id)arg1 ;
-(void)setPendingCommandsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)_scheduleCommandExecution;
-(NSObject*<OS_dispatch_source>)cooldownTimer;
-(void)_addCommand:(id)arg1 saveCompletion:(/*^block*/id)arg2 ;
-(FCCloudContext *)context;
-(NSString *)name;
-(void)setDelegate:(id<FCCommandQueueDelegate>)arg1 ;
-(id)initWithContext:(id)arg1 storeDirectory:(id)arg2 storeFilename:(id)arg3 urgency:(long long)arg4 suspended:(BOOL)arg5 delegate:(id)arg6 ;
-(void)setCooldownTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)addCommand:(id)arg1 ;
-(id)_deserializeCommandsFromStore:(id)arg1 ;
-(void)setPendingCommands:(NSMutableArray *)arg1 ;
-(void)_savePendingCommands;
-(id)initWithContext:(id)arg1 persistentStorePath:(id)arg2 urgency:(long long)arg3 suspended:(BOOL)arg4 delegate:(id)arg5 ;
-(void)setUrgency:(long long)arg1 ;
-(NSMutableArray *)pendingCommands;
-(void)setName:(NSString *)arg1 ;
-(void)setPersistentStore:(FCKeyValueStore *)arg1 ;
-(void)addCommand:(id)arg1 saveCompletion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_group>)pendingCommandsGroup;
-(void)resume;
-(void)dealloc;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

