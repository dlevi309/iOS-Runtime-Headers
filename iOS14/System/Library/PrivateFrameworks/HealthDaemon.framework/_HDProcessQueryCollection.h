/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, HDQueryServerClientState, NSArray;

@interface _HDProcessQueryCollection : NSObject {

	NSMutableDictionary* _queryServersByUUID;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _processBundleIdentifier;
	HDQueryServerClientState* _clientState;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSString * processBundleIdentifier;              //@synthesize processBundleIdentifier=_processBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * queryServers; 
@property (nonatomic,readonly) BOOL hasQueryServers; 
@property (nonatomic,copy) HDQueryServerClientState * clientState;                   //@synthesize clientState=_clientState - In the implementation block
-(NSString *)processBundleIdentifier;
-(NSArray *)queryServers;
-(id)initWithProcessBundleIdentifier:(id)arg1 ;
-(void)queue_cancelStateChangeTimer;
-(void)removeQueryServer:(id)arg1 ;
-(void)addQueryServer:(id)arg1 ;
-(void)queue_startStateChangeTimerWithInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)setClientState:(HDQueryServerClientState *)arg1 ;
-(BOOL)hasQueryServers;
-(HDQueryServerClientState *)clientState;
-(NSObject*<OS_dispatch_queue>)queue;
@end

