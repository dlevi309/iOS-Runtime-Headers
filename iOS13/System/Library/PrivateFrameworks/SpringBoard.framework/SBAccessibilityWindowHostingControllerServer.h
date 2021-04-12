/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/SBSAccessibilityWindowHostingClientToServerInterface.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, FBServiceClientAuthenticator, BSServiceConnectionListener, NSMapTable, NSMutableDictionary, NSObject, NSString;

@interface SBAccessibilityWindowHostingControllerServer : NSObject <BSServiceConnectionListenerDelegate, SBSAccessibilityWindowHostingClientToServerInterface, BSInvalidatable> {

	NSMutableArray* _activeConnections;
	FBServiceClientAuthenticator* _clientAuthenticator;
	BSServiceConnectionListener* _connectionListener;
	NSMapTable* _connectionToHostedContextIDs;
	NSMutableDictionary* _contextIDToScene;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(void)activate;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)registerWindowWithContextID:(id)arg1 atLevel:(id)arg2 ;
-(void)unregisterWindowWithContextID:(id)arg1 ;
-(void)_handleDisconnectForServiceConnection:(id)arg1 ;
-(void)_beginHostingWindowWithContextID:(unsigned)arg1 atLevel:(double)arg2 ;
-(void)_endHostingWindowWithContextID:(unsigned)arg1 ;
@end

