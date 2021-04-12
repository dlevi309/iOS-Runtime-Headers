/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFNetMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFNetAddress;

@interface __HMFNetAddressMonitor : HMFNetMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned _currentNetworkFlags;
	HMFNetAddress* _netAddress;
	SCNetworkReachabilityRef _networkReachabilityRef;

}

@property (nonatomic,readonly) SCNetworkReachabilityRef networkReachabilityRef;              //@synthesize networkReachabilityRef=_networkReachabilityRef - In the implementation block
@property (assign,nonatomic) unsigned currentNetworkFlags;                                   //@synthesize currentNetworkFlags=_currentNetworkFlags - In the implementation block
-(id)init;
-(void)dealloc;
-(id)shortDescription;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(id)initWithNetAddress:(id)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(unsigned long long)reachabilityPath;
-(id)netAddress;
-(unsigned)currentNetworkFlags;
-(void)setCurrentNetworkFlags:(unsigned)arg1 ;
-(void)handleNetworkReachabilityChange:(unsigned)arg1 ;
-(SCNetworkReachabilityRef)networkReachabilityRef;
@end

