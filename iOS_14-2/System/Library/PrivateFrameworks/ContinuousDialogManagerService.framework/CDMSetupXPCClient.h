/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)disconnect;
-(id)init;
-(void)connect;
-(id)_remoteObjectProxy;
-(id)_connection;
-(void)_clearConnectionWithError:(id)arg1 ;
-(void)getNLAssetStatusForType:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)getClientFlowStatusWithReply:(/*^block*/id)arg1 ;
-(void)invalidateClientFlowCacheWithCompletion:(/*^block*/id)arg1 ;
@end

