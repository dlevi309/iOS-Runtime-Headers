/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <libobjc.A.dylib/PSYSyncSessionObserverDelegate.h>

@protocol OS_dispatch_queue, PSYProgressObserverDelegate;
@class PSYSyncSessionObserver, PSYSyncSession, NSObject, NSMutableSet, NSString, NSDictionary;

@interface PSYProgressObserver : NSObject <PSYSyncSessionObserverDelegate> {

	PSYSyncSessionObserver* _syncSessionObserver;
	PSYSyncSession* _currentSyncSession;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableSet* _completedInitialSyncPairingIDs;
	id<PSYProgressObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PSYProgressObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long progressObserverState; 
@property (nonatomic,readonly) NSString * activityLabel; 
@property (nonatomic,readonly) double activityProgress; 
@property (nonatomic,readonly) double totalProgress; 
@property (nonatomic,copy,readonly) NSDictionary * activityErrors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(id)init;
-(id<PSYProgressObserverDelegate>)delegate;
-(double)activityProgress;
-(void)_updateState;
-(NSString *)activityLabel;
-(void)setDelegate:(id<PSYProgressObserverDelegate>)arg1 ;
-(double)totalProgress;
-(void)supportsMigrationSync;
-(void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2 ;
-(void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2 ;
-(BOOL)_shouldHandleSyncSession:(id)arg1 ;
-(NSDictionary *)activityErrors;
-(long long)progressObserverState;
@end

