/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IncomingCallFilter.framework/IncomingCallFilter
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface ICFCallServer : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSMutableArray* _clients;
	BOOL _hasRegistered;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_cleanup;
-(void)_cleanupClient:(id)arg1 ;
-(void)_configureWithClient:(id)arg1 ;
-(void)shouldAllowIncomingCallForNumber:(id)arg1 forProviderIdentifier:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)_requestCallGrantForIdentifier:(id)arg1 forProviderIdentifier:(id)arg2 waitForResponse:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_clientConnected;
@end

