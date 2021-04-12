/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _domain;
	NSString* _service;
	NSString* _instance;
	os_unfair_lock_s _lock;
	id<BSServiceConnectionListenerDelegate> _lock_delegate;
	BOOL _lock_activated;
	BOOL _lock_invalidated;
	os_unfair_lock_s _registrationLock;
	id<BSInvalidatable> _registrationLock_assertion;
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
+(void)disableLaunchWhitelist;
+(id)listenerWithConfigurator:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)domain;
-(void)setDelegate:(id)arg1 ;
-(BSServiceConnectionEndpoint *)endpoint;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)instance;
-(NSString *)service;
-(void)setInstance:(NSString *)arg1 ;
-(void)activate;
-(void)setService:(NSString *)arg1 ;
-(void)didReceiveConnection:(id)arg1 ;
-(id)_initWithManager:(id)arg1 config:(/*^block*/id)arg2 ;
@end

