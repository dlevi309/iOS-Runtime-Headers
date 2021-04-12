/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMDUserActionPredictionDataReceiver.h>

@protocol HMDUserActionPredictionDataSource, OS_dispatch_queue;
@class HMFTimer, NSMapTable, NSObject, NSUUID, HMFMessageDispatcher, NSString;

@interface HMDHomeKitUserActionPredictionDataReceiver : HMFObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDUserActionPredictionDataReceiver> {

	HMFTimer* _notifyDebounceTimer;
	unsigned long long _debouncedNotifyPredictionLimit;
	NSMapTable* _subscribedClientConnections;
	id<HMDUserActionPredictionDataSource> _dataSource;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _UUID;
	HMFMessageDispatcher* _messageDispatcher;

}

@property (readonly) NSMapTable * subscribedClientConnections;                                //@synthesize subscribedClientConnections=_subscribedClientConnections - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSUUID * UUID;                                                      //@synthesize UUID=_UUID - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (__weak) id<HMDUserActionPredictionDataSource> dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)UUID;
-(id<HMDUserActionPredictionDataSource>)dataSource;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)setDataSource:(id<HMDUserActionPredictionDataSource>)arg1 ;
-(id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 ;
-(void)configureWithDataSource:(id)arg1 ;
-(void)updatedUserActionPrediction:(id)arg1 atSortedIndex:(unsigned long long)arg2 ;
-(void)removedUserActionPrediction:(id)arg1 atSortedIndex:(unsigned long long)arg2 ;
-(id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 timerFactory:(/*^block*/id)arg4 ;
-(void)_notifySubscribersOfUpdateBelowLimit:(unsigned long long)arg1 ;
-(void)_handleSubscribeMessage:(id)arg1 ;
-(void)_handleUnsubscribeMessage:(id)arg1 ;
-(void)_handleUpdatePredictionMessage:(id)arg1 ;
-(void)_handleRemovePredictionMessage:(id)arg1 ;
-(void)_handleRemoveAllPredictionsMessage:(id)arg1 ;
-(void)_debounceNotifySubscribersOfUpdateBelowLimit:(unsigned long long)arg1 ;
-(NSMapTable *)subscribedClientConnections;
-(void)_notifySubscriber:(id)arg1 clientConnection:(id)arg2 messageName:(id)arg3 payload:(id)arg4 ;
-(id)decodeUserActionPredictionsFromMessage:(id)arg1 error:(id*)arg2 ;
-(void)_addOrUpdateSubcriber:(id)arg1 clientConnection:(id)arg2 ;
-(void)_removeSubcriberWithUUID:(id)arg1 clientConnection:(id)arg2 ;
@end

