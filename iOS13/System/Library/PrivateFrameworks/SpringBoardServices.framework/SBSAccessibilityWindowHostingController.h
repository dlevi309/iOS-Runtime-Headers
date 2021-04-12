/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/SBSAccessibilityWindowHostingServerToClientInterface.h>

@protocol OS_dispatch_queue;
@class BSServiceConnection, NSObject, NSMutableDictionary, NSString;

@interface SBSAccessibilityWindowHostingController : NSObject <SBSAccessibilityWindowHostingServerToClientInterface> {

	BSServiceConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableDictionary* _registeredWindowContextIDsToLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(void)registerWindowWithContextID:(unsigned)arg1 atLevel:(double)arg2 ;
-(void)unregisterWindowWithContextID:(unsigned)arg1 ;
-(id)_connectionQueue_connection;
-(void)_connectionQueue_handleInterruption;
@end

