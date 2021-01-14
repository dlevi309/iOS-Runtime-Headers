/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/

#import <libobjc.A.dylib/LAAssertionsXPC.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface LAAssertionsProxy : NSObject <LAAssertionsXPC> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setConnection:(id)arg1 ;
-(void)setQueue:(id)arg1 ;
-(void)dealloc;
-(void)takeTouchIdAssertion:(/*^block*/id)arg1 ;
-(void)dropTouchIdAssertion:(/*^block*/id)arg1 ;
@end

