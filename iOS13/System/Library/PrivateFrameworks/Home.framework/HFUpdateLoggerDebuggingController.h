/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMutableDictionary;

@interface HFUpdateLoggerDebuggingController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* __queue_runningLoggers;
	NSMutableDictionary* __queue_historyStringsKeyedByLogger;
	long long __queue_iteration;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * _queue_runningLoggers;                                   //@synthesize _queue_runningLoggers=__queue_runningLoggers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _queue_historyStringsKeyedByLogger;              //@synthesize _queue_historyStringsKeyedByLogger=__queue_historyStringsKeyedByLogger - In the implementation block
@property (assign,nonatomic) long long _queue_iteration;                                            //@synthesize _queue_iteration=__queue_iteration - In the implementation block
+(id)_sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)set_queue_runningLoggers:(NSHashTable *)arg1 ;
-(void)set_queue_historyStringsKeyedByLogger:(NSMutableDictionary *)arg1 ;
-(void)set_queue_iteration:(long long)arg1 ;
-(id)_runningLoggerStrings;
-(long long)_queue_iteration;
-(NSHashTable *)_queue_runningLoggers;
-(NSMutableDictionary *)_queue_historyStringsKeyedByLogger;
-(void)_addRunningLogger:(id)arg1 ;
-(void)_removeRunningLogger:(id)arg1 ;
-(id)_runningLoggers;
-(id)_historyStrings;
@end

