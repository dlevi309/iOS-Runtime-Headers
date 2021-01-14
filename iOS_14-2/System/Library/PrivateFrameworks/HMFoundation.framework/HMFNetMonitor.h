/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFNetMonitorDelegate;
@class HMFNetAddress, NSString;

@interface HMFNetMonitor : HMFObject <HMFLogging> {

	os_unfair_lock_s _lock;
	BOOL _reachable;
	id<HMFNetMonitorDelegate> _delegate;
	HMFNetAddress* _netAddress;

}

@property (getter=isReachable) BOOL reachable; 
@property (__weak) id<HMFNetMonitorDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) HMFNetAddress * netAddress;              //@synthesize netAddress=_netAddress - In the implementation block
@property (readonly) unsigned long long reachabilityPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)isReachable;
-(id)initWithNetAddress:(id)arg1 ;
-(id)init;
-(id<HMFNetMonitorDelegate>)delegate;
-(HMFNetAddress *)netAddress;
-(unsigned long long)reachabilityPath;
-(void)setReachable:(BOOL)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(void)setDelegate:(id<HMFNetMonitorDelegate>)arg1 ;
@end

