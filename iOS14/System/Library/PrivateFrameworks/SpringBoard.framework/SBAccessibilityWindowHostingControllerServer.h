/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(id)init;
-(void)activate;
-(void)unregisterWindowWithContextID:(id)arg1 ;
-(void)invalidate;
-(void)registerWindowWithContextID:(id)arg1 atLevel:(id)arg2 ;
-(void)_handleDisconnectForServiceConnection:(id)arg1 ;
-(void)_beginHostingWindowWithContextID:(unsigned)arg1 atLevel:(double)arg2 ;
-(void)_endHostingWindowWithContextID:(unsigned)arg1 ;
@end

