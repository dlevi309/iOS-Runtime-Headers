/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface HFDebugStateDumpManager : NSObject {

	int _logStateDumpNotifyToken;
	NSObject*<OS_dispatch_queue> _stateHandlerQueue;
	NSMutableDictionary* _stateDumpHandlersByName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateHandlerQueue;              //@synthesize stateHandlerQueue=_stateHandlerQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stateDumpHandlersByName;               //@synthesize stateDumpHandlersByName=_stateDumpHandlersByName - In the implementation block
@property (nonatomic,readonly) int logStateDumpNotifyToken;                               //@synthesize logStateDumpNotifyToken=_logStateDumpNotifyToken - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)registerStateDumpHandler:(/*^block*/id)arg1 withName:(id)arg2 ;
-(void)setStateHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStateDumpHandlersByName:(NSMutableDictionary *)arg1 ;
-(id)performStateDump:(BOOL)arg1 ;
-(int)logStateDumpNotifyToken;
-(NSMutableDictionary *)stateDumpHandlersByName;
-(NSObject*<OS_dispatch_queue>)stateHandlerQueue;
@end

