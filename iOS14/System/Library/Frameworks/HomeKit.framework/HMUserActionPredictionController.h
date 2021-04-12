/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMUserActionPredictionControllerDelegate, HMUserActionPredictionControllerDataSource;
@class NSArray, NSUUID, _HMContext, HMFUnfairLock, NSString;

@interface HMUserActionPredictionController : NSObject <HMFMessageReceiver> {

	NSArray* _predictions;
	NSArray* _lastUpdatedClientMappedPredictions;
	id<HMUserActionPredictionControllerDelegate> _delegate;
	NSUUID* _homeUUID;
	id<HMUserActionPredictionControllerDataSource> _dataSource;
	_HMContext* _context;
	HMFUnfairLock* _lock;
	NSUUID* _UUID;

}

@property (copy,readonly) NSUUID * homeUUID;                                                  //@synthesize homeUUID=_homeUUID - In the implementation block
@property (__weak) id<HMUserActionPredictionControllerDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (copy) NSArray * lastUpdatedClientMappedPredictions;                                //@synthesize lastUpdatedClientMappedPredictions=_lastUpdatedClientMappedPredictions - In the implementation block
@property (readonly) _HMContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (readonly) HMFUnfairLock * lock;                                                    //@synthesize lock=_lock - In the implementation block
@property (copy,readonly) NSUUID * UUID;                                                      //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSArray * predictions;                                              //@synthesize predictions=_predictions - In the implementation block
@property (__weak) id<HMUserActionPredictionControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)homeUUID;
-(NSUUID *)UUID;
-(id<HMUserActionPredictionControllerDelegate>)delegate;
-(NSArray *)predictions;
-(id<HMUserActionPredictionControllerDataSource>)dataSource;
-(HMFUnfairLock *)lock;
-(_HMContext *)context;
-(void)setDelegate:(id<HMUserActionPredictionControllerDelegate>)arg1 ;
-(void)setDataSource:(id<HMUserActionPredictionControllerDataSource>)arg1 ;
-(void)handleDaemonReconnectedNotification:(id)arg1 ;
-(NSArray *)lastUpdatedClientMappedPredictions;
-(void)handleUpdatePredictionsMessage:(id)arg1 ;
-(void)setLastUpdatedClientMappedPredictions:(NSArray *)arg1 ;
-(id)initWithPredictions:(id)arg1 homeUUID:(id)arg2 ;
-(void)fetchPredictionsWithCompletion:(/*^block*/id)arg1 ;
-(void)configureWithDataSource:(id)arg1 context:(id)arg2 ;
-(BOOL)mergeWithOtherPredictionController:(id)arg1 operations:(id)arg2 ;
-(void)setPredictions:(NSArray *)arg1 ;
@end

