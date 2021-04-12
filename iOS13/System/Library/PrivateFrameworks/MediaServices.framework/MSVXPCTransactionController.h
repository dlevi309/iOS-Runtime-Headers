/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMapTable;

@interface MSVXPCTransactionController : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMapTable* _openTransactions;
	BOOL _inTransaction;
	NSObject*<OS_dispatch_source> _signalUSR2DispatchSource;

}

@property (getter=isInTransaction,nonatomic,readonly) BOOL inTransaction; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isTransactionActive:(id)arg1 ;
-(id)activeTransactions;
-(void)addActiveTransaction:(id)arg1 ;
-(void)removeActiveTransaction:(id)arg1 ;
-(void)_setupSignalHandler;
-(void)_tearDownSignalHandler;
-(void)_onQueueUpdateInternalTransactionState;
-(void)_onQueueCleanupEndedTransactions;
-(void)_saveActiveTransactionsToFile;
-(BOOL)isInTransaction;
@end

