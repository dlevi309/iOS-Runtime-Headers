/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)appendTransactions:(id)arg1 ;
-(id)init;
-(void)createXpcConnection_sync;
-(void)setupConnectionHandlers_sync;
-(void)createXpcConnection;
-(void)appendTransactions_sync:(id)arg1 ;
-(void)dealloc;
@end

