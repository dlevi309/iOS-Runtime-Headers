/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface NRActiveDeviceAssertionMonitor : NSObject {

	int _assertionToken;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) BOOL hasActiveAssertion; 
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(BOOL)hasActiveAssertion;
-(void)removeObserver:(id)arg1 ;
@end

