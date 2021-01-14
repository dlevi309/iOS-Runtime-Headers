/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/WeatherCloudPersistenceDelegate.h>

@protocol WeatherPreferencesPersistence, SynchronizedDefaultsDelegate;
@class WeatherPreferences, NSString;

@interface WeatherCloudPreferences : NSObject <WeatherCloudPersistenceDelegate> {

	id<WeatherPreferencesPersistence> _cloudStore;
	id<SynchronizedDefaultsDelegate> _syncDelegate;
	WeatherPreferences* _localPreferences;

}

@property (nonatomic,retain) id<WeatherPreferencesPersistence> cloudStore;                      //@synthesize cloudStore=_cloudStore - In the implementation block
@property (retain) WeatherPreferences * localPreferences;                                       //@synthesize localPreferences=_localPreferences - In the implementation block
@property (assign,nonatomic,__weak) id<SynchronizedDefaultsDelegate> syncDelegate;              //@synthesize syncDelegate=_syncDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cloudPersistenceDidSynchronize:(id)arg1 ;
-(id)prepareLocalCitiesForReconciliation:(id)arg1 isInitialSync:(BOOL)arg2 ;
-(void)setCloudStoreCities:(id)arg1 ;
-(void)setLocalPreferences:(WeatherPreferences *)arg1 ;
-(void)forceSync;
-(id<SynchronizedDefaultsDelegate>)syncDelegate;
-(id)citiesByEnforcingSizeLimitOnResults:(id)arg1 ;
-(id)reconcileCloudCities:(id)arg1 withLocal:(id)arg2 isInitialSync:(BOOL)arg3 ;
-(WeatherPreferences *)localPreferences;
-(void)updateLocalStoreWithRemoteChanges:(id)arg1 ;
-(id)cloudRepresentationFromCities:(id)arg1 ;
-(id)initWithLocalPreferences:(id)arg1 ;
-(id<WeatherPreferencesPersistence>)cloudStore;
-(id)initWithLocalPreferences:(id)arg1 persistence:(id)arg2 ;
-(void)setCloudStore:(id<WeatherPreferencesPersistence>)arg1 ;
-(void)saveCitiesToCloud:(id)arg1 ;
-(void)cloudCitiesChangedExternally:(id)arg1 ;
-(void)purgeLegacyCloudCities;
-(BOOL)shouldWriteCitiesToCloud:(id)arg1 ;
-(void)setSyncDelegate:(id<SynchronizedDefaultsDelegate>)arg1 ;
-(void)_synchronize:(BOOL)arg1 ;
-(BOOL)areCloudCities:(id)arg1 equalToLocalCities:(id)arg2 ;
@end

