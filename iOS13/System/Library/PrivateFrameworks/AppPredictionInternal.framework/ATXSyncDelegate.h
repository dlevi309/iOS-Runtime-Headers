/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/SYServiceDelegate.h>
#import <libobjc.A.dylib/SYSessionDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSObject, NSURL, NSData, NSString;

@interface ATXSyncDelegate : NSObject <SYServiceDelegate, SYSessionDelegate> {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSURL* _lastSyncedFileURL;
	NSURL* _resultsFileURL;
	NSData* _syncData;
	NSObject*<OS_os_transaction> _syncTransaction;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;                    //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,readonly) NSURL * lastSyncedFileURL;                                 //@synthesize lastSyncedFileURL=_lastSyncedFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * resultsFileURL;                                    //@synthesize resultsFileURL=_resultsFileURL - In the implementation block
@property (nonatomic,readonly) NSData * syncData;                                         //@synthesize syncData=_syncData - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_transaction> syncTransaction;              //@synthesize syncTransaction=_syncTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(NSData *)syncData;
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3 ;
-(void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3 ;
-(void)service:(id)arg1 incomingData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(NSObject*<OS_os_transaction>)syncTransaction;
-(id)pendingSyncFileURL;
-(BOOL)shouldResumeSync;
-(void)handleDataToSync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)lastSyncedFileURL;
-(NSURL *)resultsFileURL;
@end

