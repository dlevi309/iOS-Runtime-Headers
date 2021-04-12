/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@protocol OS_dispatch_queue;
#import <SetupAssistant/SetupAssistant-Structs.h>
@class NSHashTable, NSMutableDictionary, NSObject;

@interface BYNetworkMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	NSHashTable* _observers;
	int _currentNetworkType;
	NSMutableDictionary* _networkTypeBlocks;
	NSObject*<OS_dispatch_queue> _networkTypeQueue;

}
+(id)sharedInstance;
+(void)setHoldsWiFiAssertion:(BOOL)arg1 ;
+(BOOL)holdsWiFiAssertion;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)withMinimumNetworkType:(int)arg1 timeout:(double)arg2 runBlock:(/*^block*/id)arg3 ;
-(void)_initNetworkObservation;
-(int)currentNetworkType;
-(int)_networkTypeFromFlags:(unsigned)arg1 ;
-(void)setCurrentNetworkType:(int)arg1 ;
@end

