/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@protocol OS_dispatch_queue, OS_os_transaction;
@class NSObject, NSCountedSet, NSString;

@interface FMXPCTransactionManager : NSObject {

	NSObject*<OS_dispatch_queue> _txn_ops_queue;
	NSCountedSet* _activeTransactions;
	NSString* _keepAliveActivityIdentifier;
	NSObject*<OS_os_transaction> _masterTransaction;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> txn_ops_queue;                  //@synthesize txn_ops_queue=_txn_ops_queue - In the implementation block
@property (nonatomic,retain) NSCountedSet * activeTransactions;                           //@synthesize activeTransactions=_activeTransactions - In the implementation block
@property (nonatomic,retain) NSString * keepAliveActivityIdentifier;                      //@synthesize keepAliveActivityIdentifier=_keepAliveActivityIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> masterTransaction;              //@synthesize masterTransaction=_masterTransaction - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)initSingleton;
-(void)_disableKeepAlive;
-(NSCountedSet *)activeTransactions;
-(void)beginTransaction:(id)arg1 ;
-(void)setTxn_ops_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActiveTransactions:(NSCountedSet *)arg1 ;
-(void)_disableLaunchOnRebootActivity:(id)arg1 ;
-(void)setKeepAliveActivityIdentifier:(NSString *)arg1 ;
-(void)_disableOldKeepAliveActivity;
-(NSObject*<OS_dispatch_queue>)txn_ops_queue;
-(void)_enableKeepAlive;
-(void)setMasterTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSString *)keepAliveActivityIdentifier;
-(void)setLaunchOnRebootActivity:(id)arg1 keepAliveActivity:(id)arg2 ;
-(void)endTransaction:(id)arg1 ;
-(id)dumpActiveTransactions;
-(NSObject*<OS_os_transaction>)masterTransaction;
@end

