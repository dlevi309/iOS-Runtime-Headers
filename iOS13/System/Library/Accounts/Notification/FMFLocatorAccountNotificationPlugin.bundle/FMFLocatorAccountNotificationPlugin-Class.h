/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/FMFLocatorAccountNotificationPlugin.bundle/FMFLocatorAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface FMFLocatorAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionCreationQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcConnectionCreationQueue;              //@synthesize xpcConnectionCreationQueue=_xpcConnectionCreationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)_destroyXPCConnection;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(id)_currentXPCConnection;
-(NSObject*<OS_dispatch_queue>)xpcConnectionCreationQueue;
-(void)setXpcConnectionCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

