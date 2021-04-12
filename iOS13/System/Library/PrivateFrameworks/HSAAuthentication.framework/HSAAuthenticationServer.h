/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HSAAuthentication.framework/HSAAuthentication
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface HSAAuthenticationServer : NSObject {

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
-(void)_clientConnected;
-(void)parseIncomingMessageFromNumber:(id)arg1 forService:(id)arg2 messageBody:(id)arg3 ;
@end

