/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_connectionQueue_invalidate;
-(oneway void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_connectionQueue_setupAndActivate;
-(void)invalidate;
@end

