/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSString;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate> {

	os_unfair_lock_s _lock;
	NSXPCListener* _listener;
	NSMutableArray* _sessions;
	int _connectionNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasActiveSessions;
+(void)startViewServiceSessionManagerAsPlugin:(BOOL)arg1 ;
+(id)__serviceSessionManager;
-(id)init;
-(void)_configureSessionForConnection:(id)arg1 ;
-(void)_registerSessionForDefaultDeputies:(id)arg1 ;
-(void)_startOrStopSystemsForBackgroundRunning;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_initAsPlugIn:(BOOL)arg1 ;
-(BOOL)_hasActiveSessions;
-(void)_startListenerWithName:(id)arg1 ;
-(void)_startListener;
-(void)dealloc;
@end

