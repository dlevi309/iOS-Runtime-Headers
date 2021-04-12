/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface ENXPCServiceListener : NSObject {

	NSMutableSet* _connections;
	NSObject*<OS_xpc_object> _xpcListener;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcEndpoint; 
+(id)sharedServiceListener;
-(id)initAnonymousListener;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)main;
-(void)invalidate;
-(void)connectionInvalidated:(id)arg1 ;
-(id)_init;
-(NSObject*<OS_xpc_object>)xpcEndpoint;
-(void)xpcListenerEvent:(id)arg1 ;
-(void)xpcConnectionAccept:(id)arg1 ;
@end

