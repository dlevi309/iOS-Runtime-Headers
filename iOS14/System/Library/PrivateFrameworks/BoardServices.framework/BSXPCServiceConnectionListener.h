/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (getter=_isInvalidated,nonatomic,readonly) BOOL _invalidated; 
@property (getter=_isClientInvalidated,nonatomic,readonly) BOOL _clientInvalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isInvalidated;
-(void)_invalidateChildConnection:(id)arg1 ;
-(void)setConnectionHandler:(/*^block*/id)arg1 ;
-(void)setErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)setEndpointDescription:(id)arg1 ;
-(void)setServiceQuality:(id)arg1 ;
-(void)invalidate;
-(BOOL)_isClientInvalidated;
-(void)dealloc;
@end

