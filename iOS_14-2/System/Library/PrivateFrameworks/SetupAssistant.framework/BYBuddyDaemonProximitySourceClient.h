/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<BYBuddyDaemonProximitySourceProtocol>)delegate;
-(void)connectToDaemon;
-(void)syncProgress:(double)arg1 ;
-(void)syncCompletedWithErrors:(id)arg1 ;
-(void)activateWithSharingChannel:(id)arg1 ;
-(void)finishedWithError:(id)arg1 ;
-(void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2 ;
-(void)backupCompletedWithError:(id)arg1 ;
-(void)setDelegate:(id<BYBuddyDaemonProximitySourceProtocol>)arg1 ;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)receivedData:(id)arg1 ;
@end

