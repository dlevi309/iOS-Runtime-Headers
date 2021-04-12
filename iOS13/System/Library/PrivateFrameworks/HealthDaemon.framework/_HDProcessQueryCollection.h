/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setClientState:(HDQueryServerClientState *)arg1 ;
-(HDQueryServerClientState *)clientState;
-(NSString *)processBundleIdentifier;
-(BOOL)hasQueryServers;
-(void)addQueryServer:(id)arg1 ;
-(void)removeQueryServer:(id)arg1 ;
-(id)initWithProcessBundleIdentifier:(id)arg1 ;
-(NSArray *)queryServers;
-(void)queue_startStateChangeTimerWithInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)queue_cancelStateChangeTimer;
@end

