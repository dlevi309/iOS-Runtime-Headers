/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {

	DMXPCConnection* _connection;

}
+(id)connection;
-(id)init;
-(void)invalidate;
-(void)resume;
-(int)pid;
-(void)handleMessage:(id)arg1 ;
-(void)runPluginAtPath:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

