/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <libobjc.A.dylib/BYDaemonProximitySourceProtocol.h>
#import <libobjc.A.dylib/BYBuddyDaemonProximitySourceProtocol.h>

@protocol BYBuddyDaemonProximitySourceProtocol;
@class NSXPCConnection, NSString;

@interface BYBuddyDaemonProximitySourceClient : NSObject <BYDaemonProximitySourceProtocol, BYBuddyDaemonProximitySourceProtocol> {

	id<BYBuddyDaemonProximitySourceProtocol> _delegate;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (__weak) id<BYBuddyDaemonProximitySourceProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proximitySourceClientInterface;
-(id)init;
-(void)invalidate;
-(id<BYBuddyDaemonProximitySourceProtocol>)delegate;
-(void)setDelegate:(id<BYBuddyDaemonProximitySourceProtocol>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)receivedData:(id)arg1 ;
-(void)connectToDaemon;
-(void)syncProgress:(double)arg1 ;
-(void)syncCompletedWithErrors:(id)arg1 ;
-(void)activateWithSharingChannel:(id)arg1 ;
-(void)finishedWithError:(id)arg1 ;
-(void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2 ;
-(void)backupCompletedWithError:(id)arg1 ;
@end

