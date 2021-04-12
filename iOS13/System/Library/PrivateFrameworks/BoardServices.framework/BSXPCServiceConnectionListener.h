/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionListenerConfiguring.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionParent.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_xpc_object;
@class NSString, BSServiceQuality, NSObject, NSHashTable;

@interface BSXPCServiceConnectionListener : NSObject <BSXPCServiceConnectionListenerConfiguring, BSXPCServiceConnectionParent, BSInvalidatable> {

	NSString* _serviceName;
	unsigned long long _unique;
	NSString* _proem;
	os_unfair_lock_s _lock;
	NSString* _lock_debugDesc;
	NSString* _config_eDesc;
	BSServiceQuality* _config_qos;
	/*^block*/id _lock_connectionHandler;
	/*^block*/id _lock_errorHandler;
	NSObject*<OS_xpc_object> _lock_listener;
	NSHashTable* _lock_childConnections;
	NSObject*<OS_xpc_object> _lock_endpoint;
	BOOL _lock_nonLaunching;
	BOOL _lock_activated;
	BOOL _lock_invalidated;
	BOOL _lock_clientInvalidated;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> endpoint; 
@property (getter=isNonLaunching,nonatomic,readonly) BOOL nonLaunching; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_isInvalidated,nonatomic,readonly) BOOL _invalidated; 
@property (getter=_isClientInvalidated,nonatomic,readonly) BOOL _clientInvalidated; 
+(id)listener;
+(id)listenerWithServiceName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setErrorHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(void)configure:(/*^block*/id)arg1 ;
-(BOOL)_isInvalidated;
-(void)activate;
-(void)setServiceQuality:(id)arg1 ;
-(BOOL)_isClientInvalidated;
-(void)setConnectionHandler:(/*^block*/id)arg1 ;
-(BOOL)isNonLaunching;
-(void)setEndpointDescription:(id)arg1 ;
-(id)_initWithServiceName:(id)arg1 ;
-(void)_invalidateWithLockBlock:(/*^block*/id)arg1 ;
-(void)_invalidateChildConnection:(id)arg1 ;
@end

