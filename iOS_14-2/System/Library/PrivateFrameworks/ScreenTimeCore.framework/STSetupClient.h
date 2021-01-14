/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSXPCConnection;

@interface STSetupClient : NSObject {

	NSXPCConnection* _connection;

}

@property (readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)_newConnection;
-(id)init;
-(NSXPCConnection *)connection;
-(void)dealloc;
-(id)currentConfigurationForUser:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyUpdatedConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)collectPasscodeFromUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)passcodeCollectedFromUserWithError:(id*)arg1 ;
@end

