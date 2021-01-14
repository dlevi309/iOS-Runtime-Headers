/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol OS_dispatch_queue, NAScheduler;
@class NSObject, MTObserverStore, NRDevice, NSString;

@interface MTPairedDeviceListener : NSObject {

	BOOL _sleepEnabled;
	NSObject*<OS_dispatch_queue> _serializerQueue;
	id<NAScheduler> _serializer;
	MTObserverStore* _observers;
	NRDevice* _pairedDevice;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serializerQueue;              //@synthesize serializerQueue=_serializerQueue - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL sleepEnabled;                                         //@synthesize sleepEnabled=_sleepEnabled - In the implementation block
@property (nonatomic,retain) NRDevice * pairedDevice;                                   //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (readonly) NSString * pairedDeviceVersion; 
@property (readonly) BOOL hasActivePairedDevice; 
@property (readonly) BOOL hasActivePairedDeviceSupportingSyncing; 
+(id)sharedListener;
+(id)_handledNotifications;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(NRDevice *)pairedDevice;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)registerObserver:(id)arg1 ;
-(void)printDiagnostics;
-(void)notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(MTObserverStore *)observers;
-(id)init;
-(BOOL)sleepEnabled;
-(id<NAScheduler>)serializer;
-(BOOL)hasActivePairedDeviceCheckSyncing:(BOOL)arg1 ;
-(void)_registerForLocalNotifications;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasActivePairedDevice;
-(void)setSleepEnabled:(BOOL)arg1 ;
-(BOOL)hasActivePairedDeviceSupportingSyncing;
-(NSString *)pairedDeviceVersion;
-(void)didReceiveNotification:(id)arg1 ;
-(void)setSerializerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(void)setPairedDevice:(NRDevice *)arg1 ;
-(void)updateActiveDeviceInfo;
-(void)didReceiveNotificationNamed:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serializerQueue;
@end

