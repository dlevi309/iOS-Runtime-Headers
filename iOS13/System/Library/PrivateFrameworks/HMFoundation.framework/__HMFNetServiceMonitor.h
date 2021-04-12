/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFNetMonitor.h>

@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor {

	HMFNetService* _service;

}

@property (readonly) HMFNetService * service;              //@synthesize service=_service - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(HMFNetService *)service;
-(id)logIdentifier;
-(id)initWithNetAddress:(id)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(unsigned long long)reachabilityPath;
-(id)netAddress;
@end

