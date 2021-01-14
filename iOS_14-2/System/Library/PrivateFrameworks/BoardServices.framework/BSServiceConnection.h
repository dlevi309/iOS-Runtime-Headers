/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionContext.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionMessaging.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol NSCopying;
@class BSProcessHandle, BSXPCServiceConnection, _BSServiceConnectionConfiguration, BSAtomicSignal, NSString;

@interface BSServiceConnection : NSObject <BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable> {

	BSXPCServiceConnection* _connection;
	id<NSCopying> _userInfo;
	os_unfair_lock_s _lock;
	_BSServiceConnectionConfiguration* _lock_config;
	BSAtomicSignal* _lock_activatedSignal;
	BOOL _lock_invalidated;
	BOOL _lock_noAssertInvalidatedOnDealloc;
	NSString* _service;
	NSString* _instance;

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
+(id)connectionWithEndpoint:(id)arg1 ;
+(id)currentContext;
+(id)connectionWithEndpoint:(id)arg1 clientContextBuilder:(/*^block*/id)arg2 ;
-(BSProcessHandle *)remoteProcess;
-(id<NSCopying>)userInfo;
-(id)init;
-(id)remoteTarget;
-(NSString *)instance;
-(void)activate;
-(id)createMessage;
-(NSString *)description;
-(void)invalidate;
-(id)createMessageWithCompletion:(/*^block*/id)arg1 ;
-(void)_configureConnection:(/*^block*/id)arg1 ;
-(void)configureConnection:(/*^block*/id)arg1 ;
-(NSString *)service;
-(void)dealloc;
@end

