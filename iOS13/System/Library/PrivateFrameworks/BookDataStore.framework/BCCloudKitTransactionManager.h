/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/BCCloudKitTransactionDelegate.h>
#import <libobjc.A.dylib/BCCloudKitTransactionManagerService.h>

@protocol OS_dispatch_queue;
@class BCCloudKitController, NSObject, NSMutableDictionary, BDSServiceProxy, NSString;

@interface BCCloudKitTransactionManager : NSObject <BCCloudKitTransactionDelegate, BCCloudKitTransactionManagerService> {

	BCCloudKitController* _cloudKitController;
	NSObject*<OS_dispatch_queue> _transactionAccessQueue;
	NSMutableDictionary* _transactions;
	BDSServiceProxy* _serviceProxy;

}

@property (assign,nonatomic,__weak) BCCloudKitController * cloudKitController;                 //@synthesize cloudKitController=_cloudKitController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionAccessQueue;              //@synthesize transactionAccessQueue=_transactionAccessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactions;                               //@synthesize transactions=_transactions - In the implementation block
@property (nonatomic,retain) BDSServiceProxy * serviceProxy;                                   //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BDSServiceProxy *)serviceProxy;
-(void)setServiceProxy:(BDSServiceProxy *)arg1 ;
-(NSMutableDictionary *)transactions;
-(void)setTransactions:(NSMutableDictionary *)arg1 ;
-(void)signalFetchChangesTransaction:(id)arg1 ;
-(BCCloudKitController *)cloudKitController;
-(void)setCloudKitController:(BCCloudKitController *)arg1 ;
-(id)initWithCloudKitController:(id)arg1 ;
-(void)signalSyncToCKTransactionForEntityName:(id)arg1 syncManager:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)transactionAccessQueue;
-(void)transactionCompleted:(id)arg1 ;
-(void)signalDataChangeTransactionForEntityName:(id)arg1 notificationName:(id)arg2 ;
-(void)signalFetchChangesTransactionInService:(id)arg1 ;
-(void)setTransactionAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

