/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFLocking, HMFNetMonitorDelegate;
@class HMFNetAddress, NSString;

@interface HMFNetMonitor : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
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
-(id)init;
-(id<HMFNetMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMFNetMonitorDelegate>)arg1 ;
-(id)initWithNetAddress:(id)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(unsigned long long)reachabilityPath;
-(HMFNetAddress *)netAddress;
@end

