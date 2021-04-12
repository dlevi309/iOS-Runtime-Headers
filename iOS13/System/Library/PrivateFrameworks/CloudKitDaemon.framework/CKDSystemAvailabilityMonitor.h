/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface CKDSystemAvailabilityMonitor : NSObject {

	unsigned long long _availabilityState;
	NSMutableSet* _watcherWrappers;
	NSObject*<OS_dispatch_queue> _availabilityQueue;

}

@property (nonatomic,retain) NSMutableSet * watcherWrappers;                              //@synthesize watcherWrappers=_watcherWrappers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> availabilityQueue;              //@synthesize availabilityQueue=_availabilityQueue - In the implementation block
@property (assign) unsigned long long availabilityState;                                  //@synthesize availabilityState=_availabilityState - In the implementation block
@property (readonly) BOOL systemIsAvailable; 
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(id)_init;
-(unsigned long long)availabilityState;
-(void)registerWatcher:(id)arg1 ;
-(void)unregisterWatcher:(id)arg1 ;
-(BOOL)_systemMayNowBeReady;
-(NSObject*<OS_dispatch_queue>)availabilityQueue;
-(NSMutableSet *)watcherWrappers;
-(void)setAvailabilityState:(unsigned long long)arg1 ;
-(void)_notifyWatchersOfStateChange;
-(BOOL)systemIsAvailable;
-(void)setWatcherWrappers:(NSMutableSet *)arg1 ;
-(void)setAvailabilityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

