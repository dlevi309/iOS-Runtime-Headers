/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_path_monitor;
@class NSString, NSObject;

@interface TVLNetworkUtilities : NSObject {

	NSString* _activeNetworkInterface;
	NSString* _ipv4;
	NSString* _ipv6;
	NSObject*<OS_dispatch_queue> _monitor_queue;
	NSObject*<OS_dispatch_semaphore> _initial_update_semaphore;
	NSObject*<OS_nw_path_monitor> _monitor;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> monitor_queue;                             //@synthesize monitor_queue=_monitor_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> initial_update_semaphore;              //@synthesize initial_update_semaphore=_initial_update_semaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_monitor> monitor;                                  //@synthesize monitor=_monitor - In the implementation block
@property (copy) NSString * activeNetworkInterface;                                                  //@synthesize activeNetworkInterface=_activeNetworkInterface - In the implementation block
@property (copy) NSString * ipv4;                                                                    //@synthesize ipv4=_ipv4 - In the implementation block
@property (copy) NSString * ipv6;                                                                    //@synthesize ipv6=_ipv6 - In the implementation block
+(id)sharedInstance;
+(void)startMonitoring;
+(id)convertIPv6ToHostOrderData:(id)arg1 ;
+(int)convertIPv4ToHostOrderData:(id)arg1 ;
+(id)_IPAddressForFamily:(unsigned char)arg1 interface:(id)arg2 ;
-(id)_init;
-(NSObject*<OS_nw_path_monitor>)monitor;
-(void)setIpv4:(NSString *)arg1 ;
-(void)setIpv6:(NSString *)arg1 ;
-(NSString *)ipv4;
-(NSString *)ipv6;
-(void)setMonitor:(NSObject*<OS_nw_path_monitor>)arg1 ;
-(NSString *)activeNetworkInterface;
-(void)setActiveNetworkInterface:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)initial_update_semaphore;
-(void)setInitial_update_semaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_queue>)monitor_queue;
-(void)setMonitor_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

