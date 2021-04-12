/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSXPCConnection;

@interface CDDCloudKitClient : NSObject {

	BOOL _interrupted;
	BOOL _invalidated;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL interrupted;                          //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) BOOL invalidated;                          //@synthesize invalidated=_invalidated - In the implementation block
-(void)dealloc;
-(BOOL)_valid;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSXPCConnection *)connection;
-(BOOL)invalidated;
-(void)handleMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_setInvalidated;
-(void)_setInterrupted;
-(BOOL)registerClientStore:(id)arg1 withMirroringOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)scheduleBackupTaskForClientStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)interrupted;
@end

