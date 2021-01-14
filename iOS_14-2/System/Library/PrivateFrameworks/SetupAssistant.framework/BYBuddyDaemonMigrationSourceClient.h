/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <libobjc.A.dylib/BYClientMigrationSourceProtocol.h>

@protocol BYDeviceMigrationDelegate;
@class NSXPCConnection, NSString;

@interface BYBuddyDaemonMigrationSourceClient : NSObject <BYClientMigrationSourceProtocol> {

	id<BYDeviceMigrationDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<BYDeviceMigrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
-(void)_connectToDaemon;
-(void)didFinishWithError:(id)arg1 ;
-(id)init;
-(id<BYDeviceMigrationDelegate>)delegate;
-(void)launchSetupForMigration;
-(void)setFileTransferTemplate:(id)arg1 ;
-(void)setDelegate:(id<BYDeviceMigrationDelegate>)arg1 ;
-(void)didChangeConnectionInformation:(id)arg1 ;
-(void)registerAsUserInterfaceHost:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(void)didUpdateProgress:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)cancel;
@end

