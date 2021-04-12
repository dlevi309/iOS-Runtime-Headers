/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSXPCConnection, NSXPCInterface, NSMutableArray;

@interface TransactionManager : CHSynchronizedLoggable {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;
	id _syncHelperReadyNotificationRef;
	NSMutableArray* _queuedTransactions;

}
+(id)instance;
-(id)init;
-(void)dealloc;
-(void)appendTransactions:(id)arg1 ;
-(void)createXpcConnection;
-(void)createXpcConnection_sync;
-(void)setupConnectionHandlers_sync;
-(void)appendTransactions_sync:(id)arg1 ;
@end

