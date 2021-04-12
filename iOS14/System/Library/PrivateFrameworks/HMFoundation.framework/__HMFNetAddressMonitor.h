/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)handleNetworkReachabilityChange:(unsigned)arg1 ;
-(id)initWithNetAddress:(id)arg1 ;
-(unsigned)currentNetworkFlags;
-(id)init;
-(void)setCurrentNetworkFlags:(unsigned)arg1 ;
-(SCNetworkReachabilityRef)networkReachabilityRef;
-(id)netAddress;
-(unsigned long long)reachabilityPath;
-(id)shortDescription;
-(id)logIdentifier;
-(id)initWithNetService:(id)arg1 ;
-(id)attributeDescriptions;
-(void)dealloc;
@end

