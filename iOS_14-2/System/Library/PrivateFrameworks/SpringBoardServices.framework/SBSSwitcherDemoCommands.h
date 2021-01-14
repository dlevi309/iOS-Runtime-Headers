/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_connectionQueue_invalidate;
-(BOOL)loadStashedSwitcherModelFromPath:(id)arg1 ;
-(void)_connectionQueue_setupAndActivate;
-(void)invalidate;
-(BOOL)stashSwitcherModelToPath:(id)arg1 ;
-(BOOL)updateHiddenApplicationBundleIDs:(id)arg1 ;
-(BOOL)setShouldDisableSwitcherModelUpdates:(BOOL)arg1 ;
-(id)_standardizedAbsolutePathForPath:(id)arg1 ;
@end

