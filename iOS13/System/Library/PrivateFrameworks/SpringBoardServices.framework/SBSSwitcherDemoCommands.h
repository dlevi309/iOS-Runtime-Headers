/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/SBSSwitcherDemoCommandsServerToClientInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection, NSString;

@interface SBSSwitcherDemoCommands : NSObject <SBSSwitcherDemoCommandsServerToClientInterface> {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	BSServiceConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(BOOL)stashSwitcherModelToFilename:(id)arg1 ;
-(BOOL)loadStashedSwitcherModelFromFilename:(id)arg1 ;
-(BOOL)updateHiddenApplicationBundleIDs:(id)arg1 ;
-(BOOL)setShouldDisableSwitcherModelUpdates:(BOOL)arg1 ;
-(void)_connectionQueue_setupAndActivate;
-(void)_connectionQueue_invalidate;
@end

