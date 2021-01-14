/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_cleanup;
-(id)init;
-(void)_configureWithClient:(id)arg1 ;
-(void)_cleanupClient:(id)arg1 ;
-(void)_clientConnected;
-(void)dealloc;
-(void)parseIncomingMessageFromNumber:(id)arg1 forService:(id)arg2 messageBody:(id)arg3 ;
@end

