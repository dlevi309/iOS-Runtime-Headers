/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceMonitor.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol BSServiceConnectionEndpointMonitorDelegate, BSInvalidatable;
@class NSString, BSServiceManager, NSDictionary, NSMutableSet;

@interface BSServiceConnectionEndpointMonitor : NSObject <BSServiceMonitor, BSInvalidatable> {

	BSServiceManager* _manager;
	NSString* _service;
	os_unfair_lock_s _lock;
	id<BSServiceConnectionEndpointMonitorDelegate> _lock_delegate;
	NSDictionary* _lock_endpointToEnvironments;
	NSMutableSet* _lock_serialCallOut_endpoints;
	BOOL _lock_activated;
	BOOL _lock_invalidated;
	os_unfair_lock_s _registrationLock;
	id<BSInvalidatable> _registrationLock_assertion;

}

@property (nonatomic,copy,readonly) NSString * service;                                            //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) id<BSServiceConnectionEndpointMonitorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorForService:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id<BSServiceConnectionEndpointMonitorDelegate>)delegate;
-(void)setDelegate:(id<BSServiceConnectionEndpointMonitorDelegate>)arg1 ;
-(NSString *)service;
-(void)activate;
-(id)endpointsForEnvironment:(id)arg1 ;
-(void)serialCallOut_didUpdateEndpointEnvironments:(id)arg1 ;
-(id)_initWithManager:(id)arg1 service:(id)arg2 ;
@end

