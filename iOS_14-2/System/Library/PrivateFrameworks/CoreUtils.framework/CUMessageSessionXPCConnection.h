/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUMessageSessionXPCServerInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, CUMessageSessionServer, NSXPCConnection;

@interface CUMessageSessionXPCConnection : NSObject <CUMessageSessionXPCServerInterface> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidated;
	NSMutableSet* _registeredRequestIDs;
	CUMessageSessionServer* _server;
	NSXPCConnection* _xpcCnx;

}
-(void)connectionInvalidated;
-(void)remoteSendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)remoteRegisterRequestID:(id)arg1 options:(id)arg2 ;
@end

