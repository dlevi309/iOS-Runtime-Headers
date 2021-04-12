/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <ExposureNotification/ExposureNotification-Structs.h>
@class NSObject;

@interface ENXPCServiceClient : NSObject {

	os_unfair_lock_s _lock;
	NSObject*<OS_xpc_object> _xpcConnection;
	BOOL _invalidated;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_xpc_object> _testListenerEndpoint;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
-(void)setTestListenerEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSObject*<OS_xpc_object>)testListenerEndpoint;
-(void)_xpcReceivedEvent:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)_invalidateForced:(BOOL)arg1 ;
-(id)_ensureXPCStartedAndReturnError:(id*)arg1 ;
-(id)getXPCConnectionAndReturnError:(id*)arg1 ;
@end

