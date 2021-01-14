/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFNetMonitor.h>

@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor {

	HMFNetService* _service;

}

@property (readonly) HMFNetService * service;              //@synthesize service=_service - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithNetAddress:(id)arg1 ;
-(id)netAddress;
-(unsigned long long)reachabilityPath;
-(id)logIdentifier;
-(id)initWithNetService:(id)arg1 ;
-(HMFNetService *)service;
-(void)dealloc;
@end

