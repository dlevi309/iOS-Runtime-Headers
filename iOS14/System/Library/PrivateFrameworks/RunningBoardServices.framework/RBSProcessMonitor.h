/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSProcessMonitorConfiguring.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol RBSServiceLocalProtocol;
@class RBSProcessMonitorConfiguration, NSMutableDictionary, NSSet;

@interface RBSProcessMonitor : NSObject <RBSProcessMonitorConfiguring, NSCopying> {

	os_unfair_lock_s _lock;
	id<RBSServiceLocalProtocol> _service;
	BOOL _valid;
	BOOL _configuring;
	RBSProcessMonitorConfiguration* _configuration;
	NSMutableDictionary* _stateByIdentity;

}

@property (nonatomic,readonly) RBSProcessMonitorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) unsigned long long events; 
@property (nonatomic,readonly) unsigned serviceClass; 
@property (nonatomic,copy,readonly) NSSet * states; 
+(id)monitor;
+(id)_monitorWithService:(id)arg1 configuration:(/*^block*/id)arg2 ;
+(id)_monitorWithService:(id)arg1 ;
+(id)monitorWithConfiguration:(/*^block*/id)arg1 ;
+(id)monitorWithPredicate:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(id)init;
-(NSSet *)states;
-(void)setUpdateHandler:(/*^block*/id)arg1 ;
-(void)setPredicates:(id)arg1 ;
-(void)setEvents:(unsigned long long)arg1 ;
-(unsigned)serviceClass;
-(void)_handleProcessStateChange:(id)arg1 ;
-(id)stateForIdentity:(id)arg1 ;
-(void)setStateDescriptor:(id)arg1 ;
-(void)_handlePreventLaunchUpdate:(id)arg1 ;
-(id)description;
-(RBSProcessMonitorConfiguration *)configuration;
-(void)setPreventLaunchUpdateHandle:(/*^block*/id)arg1 ;
-(void)updateConfiguration:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)_reconnect;
-(unsigned long long)events;
-(id)_initWithService:(id)arg1 ;
-(void)_handleExitEvent:(id)arg1 ;
-(void)setServiceClass:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

