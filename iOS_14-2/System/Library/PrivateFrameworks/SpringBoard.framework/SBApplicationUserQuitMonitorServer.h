/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(id)init;
-(void)_queue_removeConnection:(id)arg1 ;
-(void)_queue_addConnection:(id)arg1 ;
-(void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1 ;
@end

