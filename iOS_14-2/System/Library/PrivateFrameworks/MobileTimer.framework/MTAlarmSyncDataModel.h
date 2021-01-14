/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSource.h>
#import <libobjc.A.dylib/MTAlarmObserver.h>
#import <libobjc.A.dylib/MTSyncDataModel.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol OS_dispatch_queue, NAScheduler;
@class MTSyncServiceManager, MTAlarmStorage, NSObject, MTMetrics, NSString;

@interface MTAlarmSyncDataModel : NSObject <MTSource, MTAlarmObserver, MTSyncDataModel, MTAgentDiagnosticDelegate> {

	MTSyncServiceManager* _syncServiceManager;
	MTAlarmStorage* _alarmStorage;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<NAScheduler> _serializer;
	MTMetrics* _syncMetrics;

}

@property (nonatomic,retain) MTSyncServiceManager * syncServiceManager;              //@synthesize syncServiceManager=_syncServiceManager - In the implementation block
@property (nonatomic,retain) MTAlarmStorage * alarmStorage;                          //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                             //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTMetrics * syncMetrics;                                //@synthesize syncMetrics=_syncMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)defaultBlock;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(id)initWithAlarmStorage:(id)arg1 syncMetrics:(id)arg2 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(id)gatherDiagnostics;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(id)dataFileName;
-(void)printDiagnostics;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(MTAlarmStorage *)alarmStorage;
-(void)_performSnooze:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<NAScheduler>)serializer;
-(void)_setupSyncManagerWithBlock:(/*^block*/id)arg1 ;
-(void)_performAction:(id)arg1 ;
-(MTSyncServiceManager *)syncServiceManager;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithAlarmStorage:(id)arg1 syncMetrics:(id)arg2 syncServiceManagerBlock:(/*^block*/id)arg3 serializer:(id)arg4 serialQueue:(id)arg5 ;
-(void)setSyncServiceManager:(MTSyncServiceManager *)arg1 ;
-(BOOL)isFromOtherDevice;
-(void)setSyncMetrics:(MTMetrics *)arg1 ;
-(void)resetDataStore;
-(void)_performDismiss:(id)arg1 ;
-(void)stopSyncServices;
-(void)setAlarmStorage:(MTAlarmStorage *)arg1 ;
-(void)applyChange:(id)arg1 ;
-(void)startSyncServices;
-(id)sourceIdentifier;
-(MTMetrics *)syncMetrics;
@end

