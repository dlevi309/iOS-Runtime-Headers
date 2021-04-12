/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/SBSApplicationUserQuitMonitorServerToClientInterface.h>

@protocol OS_dispatch_queue, SBSApplicationUserQuitMonitorDelegate;
@class NSObject, BSServiceConnection, NSString;

@interface SBSApplicationUserQuitMonitor : NSObject <SBSApplicationUserQuitMonitorServerToClientInterface> {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	BSServiceConnection* _connection;
	id<SBSApplicationUserQuitMonitorDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(oneway void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1 ;
-(void)_connectionQueue_setupAndActivate;
-(void)_connectionQueue_invalidate;
@end

