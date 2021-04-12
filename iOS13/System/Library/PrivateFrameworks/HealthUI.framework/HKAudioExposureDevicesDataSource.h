/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSSet, NSDictionary, HKHealthStore, HKObserverSet, HKQuery;

@interface HKAudioExposureDevicesDataSource : NSObject {

	BOOL _ready;
	unsigned long long _deviceType;
	NSSet* _devices;
	NSDictionary* _devicesByName;
	HKHealthStore* _healthStore;
	HKObserverSet* _observers;
	HKQuery* _query;

}

@property (assign,getter=isReady,nonatomic) BOOL ready;                  //@synthesize ready=_ready - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;              //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSSet * devices;                              //@synthesize devices=_devices - In the implementation block
@property (nonatomic,copy) NSDictionary * devicesByName;                 //@synthesize devicesByName=_devicesByName - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKObserverSet * observers;                  //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) HKQuery * query;                            //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) long long deviceCount; 
-(HKQuery *)query;
-(void)startQuery;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isReady;
-(void)setQuery:(HKQuery *)arg1 ;
-(unsigned long long)deviceType;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(NSSet *)devices;
-(void)setObservers:(HKObserverSet *)arg1 ;
-(HKObserverSet *)observers;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(void)setDevices:(NSSet *)arg1 ;
-(long long)deviceCount;
-(void)setReady:(BOOL)arg1 ;
-(void)_cleanUp;
-(NSDictionary *)devicesByName;
-(id)initWithDeviceType:(unsigned long long)arg1 healthStore:(id)arg2 ;
-(id)_makeDeviceQueryForDeviceType;
-(void)_notify_dataSourceIsReady;
-(id)_localizedNameForDevice:(id)arg1 ;
-(void)setDevicesByName:(NSDictionary *)arg1 ;
-(id)_sampleTypeForDeviceType;
-(void)cancelQuery;
@end

