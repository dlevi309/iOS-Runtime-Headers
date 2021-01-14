/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_cleanup;
-(id)init;
-(void)_configureWithClient:(id)arg1 ;
-(void)_cleanupClient:(id)arg1 ;
-(void)_requestCallGrantForIdentifier:(id)arg1 forProviderIdentifier:(id)arg2 waitForResponse:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)shouldAllowIncomingCallForNumber:(id)arg1 forProviderIdentifier:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)_clientConnected;
-(void)dealloc;
@end

