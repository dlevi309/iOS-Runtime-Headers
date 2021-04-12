/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject;

@interface RTLifeCycleManager : NSObject {

	NSMutableArray* _signals;
	NSMutableDictionary* _listeners;
	NSMutableSet* _services;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * signals;                        //@synthesize signals=_signals - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * listeners;                 //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSMutableSet * services;                         //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)start;
-(void)exit;
-(void)_start;
-(NSMutableDictionary *)listeners;
-(NSMutableSet *)services;
-(id)serviceWithClass:(Class)arg1 ;
-(void)setListeners:(NSMutableDictionary *)arg1 ;
-(void)setServices:(NSMutableSet *)arg1 ;
-(void)addService:(id)arg1 ;
-(NSMutableArray *)signals;
-(void)setSignals:(NSMutableArray *)arg1 ;
-(void)_exit;
-(void)submitUptimeMetricsWithDefaultsMananger:(id)arg1 ;
-(id)createSourceForSignal:(int)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)exitWithDelay:(double)arg1 ;
@end

