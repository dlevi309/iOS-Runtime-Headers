/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>

@protocol OS_dispatch_queue;
@class FBServiceClientAuthenticator, BSServiceConnectionListener, NSObject, NSMutableArray, NSString;

@interface SBApplicationUserQuitMonitorServer : NSObject <BSServiceConnectionListenerDelegate> {

	FBServiceClientAuthenticator* _clientAuthenticator;
	BSServiceConnectionListener* _connectionListener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _connections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1 ;
-(void)_queue_addConnection:(id)arg1 ;
-(void)_queue_removeConnection:(id)arg1 ;
@end

