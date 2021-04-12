/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/FBSServiceFacilityClientConfiguring.h>
#import <libobjc.A.dylib/FBSServiceFacilityClientMessaging.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class BSServiceConnectionEndpoint, NSString, BSServiceQuality, BSServiceInterface, NSObject, BSServiceConnection;

@interface FBSServiceFacilityClient : NSObject <FBSServiceFacilityClientConfiguring, FBSServiceFacilityClientMessaging, BSInvalidatable> {

	BSServiceConnectionEndpoint* _endpoint;
	NSString* _facilityID;
	BSServiceQuality* _serviceQuality;
	BSServiceInterface* _interface;
	id _configOnly_interfaceTarget;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _configured;
	os_unfair_lock_s _lock;
	BSServiceConnection* _lock_connection;
	BOOL _lock_connectionDenied;
	BOOL _lock_activated;
	BOOL _lock_invalidated;
	BOOL _uisHack;

}

@property (getter=isConfigured,nonatomic,readonly) BOOL configured;                    //@synthesize configured=_configured - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BSServiceQuality * serviceQuality;                      //@synthesize serviceQuality=_serviceQuality - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;              //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultShellEndpoint;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)handleError:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setInterface:(id)arg1 ;
-(void)setEndpoint:(id)arg1 ;
-(void)_lock_invalidate;
-(void)activate;
-(BOOL)_isValid;
-(void)setServiceQuality:(BSServiceQuality *)arg1 ;
-(void)setInterfaceTarget:(id)arg1 ;
-(BSServiceQuality *)serviceQuality;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithConfigurator:(/*^block*/id)arg1 ;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5 ;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(void)configureConnectMessage:(id)arg1 ;
-(void)_queue_handleMessage:(id)arg1 ;
-(void)_queue_handleError:(id)arg1 ;
-(void)_lock_activate;
-(BOOL)isConfigured;
@end

