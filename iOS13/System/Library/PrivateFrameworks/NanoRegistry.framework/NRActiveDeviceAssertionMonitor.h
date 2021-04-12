/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface NRActiveDeviceAssertionMonitor : NSObject {

	int _assertionToken;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSHashTable * observers;                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) int assertionToken;                                  //@synthesize assertionToken=_assertionToken - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveAssertion; 
+(id)sharedInstance;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)startObservingToken;
-(void)stopObservingToken;
-(void)notifyObserversWithTokenValue:(int)arg1 ;
-(BOOL)hasActiveAssertion;
-(int)assertionToken;
-(void)setAssertionToken:(int)arg1 ;
@end

