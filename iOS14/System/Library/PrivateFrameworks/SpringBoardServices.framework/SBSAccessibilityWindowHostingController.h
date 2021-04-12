/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_connectionQueue_connection;
-(void)unregisterWindowWithContextID:(unsigned)arg1 ;
-(void)invalidate;
-(void)registerWindowWithContextID:(unsigned)arg1 atLevel:(double)arg2 ;
-(void)_connectionQueue_handleInterruption;
@end

