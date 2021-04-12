/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKHealthStore *)healthStore;
-(unsigned long long)deviceType;
-(void)addObserver:(id)arg1 ;
-(NSSet *)devices;
-(void)setDevices:(NSSet *)arg1 ;
-(HKObserverSet *)observers;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(void)startQuery;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setReady:(BOOL)arg1 ;
-(void)setObservers:(HKObserverSet *)arg1 ;
-(BOOL)isReady;
-(long long)deviceCount;
-(void)removeObserver:(id)arg1 ;
-(void)setQuery:(HKQuery *)arg1 ;
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

