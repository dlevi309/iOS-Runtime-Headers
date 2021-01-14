/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/SBSSwitcherDemoCommandsClientToServerInterface.h>

@protocol OS_dispatch_queue;
@class SBAppSwitcherSettings, FBServiceClientAuthenticator, BSServiceConnectionListener, SBSwitcherDemoFilteringController, NSObject, NSMutableArray, SBRecentAppLayouts, NSString;

@interface SBSwitcherDemoCommandsServer : NSObject <BSServiceConnectionListenerDelegate, SBSSwitcherDemoCommandsClientToServerInterface> {

	SBAppSwitcherSettings* _switcherSettings;
	FBServiceClientAuthenticator* _clientAuthenticator;
	BSServiceConnectionListener* _connectionListener;
	SBSwitcherDemoFilteringController* _demoFilteringController;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _connections;
	SBRecentAppLayouts* _recents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)_queue_removeConnection:(id)arg1 ;
-(void)_queue_addConnection:(id)arg1 ;
-(BOOL)loadStashedSwitcherModelFromPath:(id)arg1 ;
-(BOOL)stashSwitcherModelToPath:(id)arg1 ;
-(BOOL)updateHiddenApplicationBundleIDs:(id)arg1 ;
-(BOOL)setShouldDisableSwitcherModelUpdates:(id)arg1 ;
-(id)initWithRecentAppLayouts:(id)arg1 demoFilteringController:(id)arg2 ;
@end

