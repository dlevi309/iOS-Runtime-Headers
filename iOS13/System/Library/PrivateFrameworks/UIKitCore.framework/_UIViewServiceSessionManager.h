/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)startViewServiceSessionManagerAsPlugin:(BOOL)arg1 ;
+(BOOL)hasActiveSessions;
+(id)__serviceSessionManager;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_initAsPlugIn:(BOOL)arg1 ;
-(BOOL)_hasActiveSessions;
-(void)_startListener;
-(void)_startListenerWithName:(id)arg1 ;
-(void)_registerSessionForDefaultDeputies:(id)arg1 ;
-(void)_startOrStopSystemsForBackgroundRunning;
-(void)_configureSessionForConnection:(id)arg1 ;
@end

