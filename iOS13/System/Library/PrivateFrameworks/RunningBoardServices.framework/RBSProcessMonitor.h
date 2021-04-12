/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSProcessMonitorConfiguring.h>

@protocol RBSServiceLocalProtocol;
@class RBSProcessMonitorConfiguration, NSMutableDictionary, RBSProcessPredicate, NSSet;

@interface RBSProcessMonitor : NSObject <RBSProcessMonitorConfiguring> {

	os_unfair_lock_s _lock;
	id<RBSServiceLocalProtocol> _service;
	BOOL _valid;
	BOOL _configuring;
	RBSProcessMonitorConfiguration* _configuration;
	NSMutableDictionary* _stateByIdentity;

}

@property (nonatomic,copy,readonly) RBSProcessPredicate * predicate; 
@property (nonatomic,readonly) RBSProcessMonitorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) unsigned serviceClass; 
@property (nonatomic,copy,readonly) NSSet * states; 
+(id)monitor;
+(id)monitorWithConfiguration:(/*^block*/id)arg1 ;
+(id)monitorWithPredicate:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(BOOL)isValid;
-(RBSProcessMonitorConfiguration *)configuration;
-(void)_reconnect;
-(void)setPredicates:(id)arg1 ;
-(void)setUpdateHandler:(/*^block*/id)arg1 ;
-(void)updateConfiguration:(/*^block*/id)arg1 ;
-(id)_initWithService:(id)arg1 ;
-(id)predicates;
-(unsigned)serviceClass;
-(void)setStateDescriptor:(id)arg1 ;
-(void)setServiceClass:(unsigned)arg1 ;
-(id)stateForIdentity:(id)arg1 ;
-(NSSet *)states;
-(void)_handleProcessStateChange:(id)arg1 ;
@end

