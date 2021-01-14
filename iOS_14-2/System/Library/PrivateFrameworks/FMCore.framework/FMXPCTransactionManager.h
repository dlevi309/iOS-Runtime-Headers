/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_disableLaunchOnRebootActivity:(id)arg1 ;
-(void)setMasterTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setTxn_ops_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)beginTransaction:(id)arg1 ;
-(NSObject*<OS_os_transaction>)masterTransaction;
-(void)endTransaction:(id)arg1 ;
-(id)dumpActiveTransactions;
-(void)_enableKeepAlive;
-(NSObject*<OS_dispatch_queue>)txn_ops_queue;
-(void)setActiveTransactions:(NSCountedSet *)arg1 ;
-(NSCountedSet *)activeTransactions;
-(NSString *)keepAliveActivityIdentifier;
-(void)setKeepAliveActivityIdentifier:(NSString *)arg1 ;
-(void)setLaunchOnRebootActivity:(id)arg1 keepAliveActivity:(id)arg2 ;
-(void)_disableOldKeepAliveActivity;
-(id)initSingleton;
-(void)_disableKeepAlive;
-(void)dealloc;
@end

