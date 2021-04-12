/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionContext.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionMessaging.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol NSCopying;
@class BSProcessHandle, BSXPCServiceConnection, NSString, _BSServiceConnectionConfiguration, BSAtomicSignal;

@interface BSServiceConnection : NSObject <BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable> {

	BSXPCServiceConnection* _connection;
	NSString* _service;
	NSString* _instance;
	id<NSCopying> _userInfo;
	os_unfair_lock_s _lock;
	_BSServiceConnectionConfiguration* _lock_config;
	BSAtomicSignal* _lock_activatedSignal;
	BOOL _lock_invalidated;
	BOOL _lock_noAssertInvalidatedOnDealloc;

}

@property (nonatomic,readonly) BSProcessHandle * remoteProcess; 
@property (nonatomic,copy,readonly) NSString * service;                      //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * instance;                     //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) id remoteTarget; 
@property (nonatomic,readonly) id<NSCopying> userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentContext;
+(id)_currentConnection;
+(id)_connectionWithEndpoint:(id)arg1 clientContextBuilder:(/*^block*/id)arg2 ;
+(id)_nameForService:(id)arg1 instance:(id)arg2 host:(BOOL)arg3 ;
+(id)connectionWithEndpoint:(id)arg1 ;
+(id)connectionWithEndpoint:(id)arg1 clientContextBuilder:(/*^block*/id)arg2 ;
+(id)_connectionFromIncomingConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id<NSCopying>)userInfo;
-(NSString *)instance;
-(NSString *)service;
-(id)createMessage;
-(void)activate;
-(id)_clientContext;
-(id)_initWithConnection:(id)arg1 service:(id)arg2 instance:(id)arg3 clientContext:(id)arg4 ;
-(void)_configureConnection:(/*^block*/id)arg1 ;
-(id)remoteTarget;
-(id)createMessageWithCompletion:(/*^block*/id)arg1 ;
-(BSProcessHandle *)remoteProcess;
-(void)configureConnection:(/*^block*/id)arg1 ;
@end

