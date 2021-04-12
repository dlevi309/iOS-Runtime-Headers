/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addService:(id)arg1 ;
-(void)exit;
-(NSMutableSet *)services;
-(NSMutableDictionary *)listeners;
-(id)init;
-(void)setServices:(NSMutableSet *)arg1 ;
-(void)_exit;
-(void)start;
-(void)setListeners:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)signals;
-(void)_start;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)serviceWithClass:(Class)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSignals:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)submitUptimeMetricsWithDefaultsMananger:(id)arg1 ;
-(id)createSourceForSignal:(int)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)exitWithDelay:(double)arg1 ;
@end

