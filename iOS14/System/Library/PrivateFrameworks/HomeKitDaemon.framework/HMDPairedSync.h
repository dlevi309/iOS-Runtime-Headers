/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>

@protocol HMDPairedSyncDelegate, OS_dispatch_queue;
@class PSYSyncCoordinator, NSObject, NSString;

@interface HMDPairedSync : HMFObject <PSYSyncCoordinatorDelegate> {

	id<HMDPairedSyncDelegate> _delegate;
	PSYSyncCoordinator* _coordinator;
	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _currentOperationCount;

}

@property (__weak,readonly) id<HMDPairedSyncDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PSYSyncCoordinator * coordinator;                    //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) unsigned long long currentOperationCount;              //@synthesize currentOperationCount=_currentOperationCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDPairedSyncDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(PSYSyncCoordinator *)coordinator;
-(unsigned long long)currentOperationCount;
-(void)setCurrentOperationCount:(unsigned long long)arg1 ;
-(id)restrictionAsString:(unsigned long long)arg1 ;
-(void)_callStartSync;
-(void)needToSync;
-(void)syncComplete;
-(void)syncPartiallyComplete;
@end

