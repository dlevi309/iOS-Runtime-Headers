/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <ATFoundation/ATSessionObserver.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, ATSession, NSString;

@interface ATSessionProxyListener : NSObject <NSXPCListenerDelegate, ATSessionObserver> {

	NSXPCListener* _listener;
	NSMutableArray* _connections;
	NSObject*<OS_dispatch_queue> _queue;
	ATSession* _session;

}

@property (nonatomic,readonly) ATSession * session;                 //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stop;
-(void)start;
-(ATSession *)session;
-(id)initWithSession:(id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
@end

