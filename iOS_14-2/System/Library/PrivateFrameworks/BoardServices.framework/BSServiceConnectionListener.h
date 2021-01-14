/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerConfiguring.h>
#import <libobjc.A.dylib/BSServiceListener.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol BSServiceConnectionListenerDelegate, BSInvalidatable;
@class NSString, BSServiceManager, BSServiceConnectionEndpoint;

@interface BSServiceConnectionListener : NSObject <BSServiceConnectionListenerConfiguring, BSServiceListener, BSInvalidatable> {

	BSServiceManager* _manager;
	os_unfair_lock_s _lock;
	id<BSServiceConnectionListenerDelegate> _lock_delegate;
	BOOL _lock_activated;
	BOOL _lock_invalidated;
	os_unfair_lock_s _registrationLock;
	id<BSInvalidatable> _registrationLock_assertion;
	NSString* _domain;
	NSString* _service;
	NSString* _instance;
	BSServiceConnectionEndpoint* _endpoint;

}

@property (nonatomic,copy,readonly) NSString * domain;                                   //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSString * service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * instance;                                 //@synthesize instance=_instance - In the implementation block
@property (nonatomic,copy,readonly) BSServiceConnectionEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listenerWithConfigurator:(/*^block*/id)arg1 ;
+(id)extendBootstrap;
-(void)setInstance:(NSString *)arg1 ;
-(id)init;
-(void)didReceiveConnection:(id)arg1 ;
-(NSString *)instance;
-(BSServiceConnectionEndpoint *)endpoint;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)activate;
-(void)setDelegate:(id)arg1 ;
-(NSString *)description;
-(void)setService:(NSString *)arg1 ;
-(void)invalidate;
-(NSString *)service;
-(void)dealloc;
@end

