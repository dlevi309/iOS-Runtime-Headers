/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleServiceClientInterface.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleClient.h>

@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection, NSMutableDictionary, NSString;

@interface SBSRemoteAlertHandleXPCClient : NSObject <SBSRemoteAlertHandleServiceClientInterface, SBSRemoteAlertHandleClient> {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _connectionAccessQueue;
	BSServiceConnection* _connection;
	BOOL _connectionActivated;
	BOOL _connectionInvalidated;
	NSMutableDictionary* _handleIDToHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_connection;
-(oneway void)remoteAlertHandleWithIDDidActivate:(id)arg1 ;
-(oneway void)remoteAlertHandleWithIDDidDeactivate:(id)arg1 ;
-(oneway void)remoteAlertHandleWithID:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(BOOL)arg2 configurationContext:(id)arg3 ;
-(id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2 ;
-(void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2 ;
-(void)invalidateRemoteAlertHandle:(id)arg1 ;
-(void)_invalidateHandleForHandleID:(id)arg1 withError:(id)arg2 ;
-(void)_handleError:(id)arg1 ;
@end

