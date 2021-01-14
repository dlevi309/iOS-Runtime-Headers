/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {

	DMXPCConnection* _connection;
	BOOL _didReceivePid;

}

@property (nonatomic,readonly) BOOL didReceivePid; 
+(id)connection;
-(void)handleMessage:(id)arg1 ;
-(int)pid;
-(id)init;
-(void)invalidate;
-(BOOL)didReceivePid;
-(void)runPluginAtPath:(id)arg1 withParameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resume;
@end

