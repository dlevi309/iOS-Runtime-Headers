/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContinuousDialogManagerService.framework/ContinuousDialogManagerService
*/

#import <libobjc.A.dylib/CDMSetupXPCListenerService.h>

@class NSXPCConnection, NSString;

@interface CDMSetupXPCClient : NSObject <CDMSetupXPCListenerService> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_connection;
-(void)disconnect;
-(void)connect;
-(id)_remoteObjectProxy;
-(void)_clearConnectionWithError:(id)arg1 ;
-(void)getNLAssetStatusForType:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)getClientFlowStatusWithReply:(/*^block*/id)arg1 ;
-(void)invalidateClientFlowCacheWithCompletion:(/*^block*/id)arg1 ;
@end

