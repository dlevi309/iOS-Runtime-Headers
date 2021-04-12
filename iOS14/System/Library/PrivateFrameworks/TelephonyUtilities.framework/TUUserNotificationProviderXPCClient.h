/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUUserNotificationsProviderXPCServer.h>
#import <libobjc.A.dylib/TUUserNotificationProviderDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface TUUserNotificationProviderXPCClient : NSObject <TUUserNotificationsProviderXPCServer, TUUserNotificationProviderDataSource> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                   //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setAsynchronousServer:(id)arg1 ;
+(void)setSynchronousServer:(id)arg1 ;
+(id)userNotificationProviderServerXPCInterface;
+(id)synchronousServer;
+(id)asynchronousServer;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)momentCapturedForStreamToken:(long long)arg1 requesterID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
@end

