/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)withMinimumNetworkType:(int)arg1 timeout:(double)arg2 runBlock:(/*^block*/id)arg3 ;
-(int)currentNetworkType;
-(void)_initNetworkObservation;
-(int)_networkTypeFromFlags:(unsigned)arg1 ;
-(void)setCurrentNetworkType:(int)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
@end

