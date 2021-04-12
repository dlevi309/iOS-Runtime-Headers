/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)forceSync;
-(void)_synchronize:(BOOL)arg1 ;
-(void)setSyncDelegate:(id<SynchronizedDefaultsDelegate>)arg1 ;
-(void)setCloudStore:(id<WeatherPreferencesPersistence>)arg1 ;
-(void)cloudCitiesChangedExternally:(id)arg1 ;
-(id<WeatherPreferencesPersistence>)cloudStore;
-(void)cloudPersistenceDidSynchronize:(id)arg1 ;
-(id)initWithLocalPreferences:(id)arg1 persistence:(id)arg2 ;
-(void)setLocalPreferences:(WeatherPreferences *)arg1 ;
-(void)purgeLegacyCloudCities;
-(WeatherPreferences *)localPreferences;
-(id)reconcileCloudCities:(id)arg1 withLocal:(id)arg2 isInitialSync:(BOOL)arg3 ;
-(BOOL)areCloudCities:(id)arg1 equalToLocalCities:(id)arg2 ;
-(void)updateLocalStoreWithRemoteChanges:(id)arg1 ;
-(void)saveCitiesToCloud:(id)arg1 ;
-(id<SynchronizedDefaultsDelegate>)syncDelegate;
-(id)citiesByEnforcingSizeLimitOnResults:(id)arg1 ;
-(id)prepareLocalCitiesForReconciliation:(id)arg1 isInitialSync:(BOOL)arg2 ;
-(id)cloudRepresentationFromCities:(id)arg1 ;
-(BOOL)shouldWriteCitiesToCloud:(id)arg1 ;
-(void)setCloudStoreCities:(id)arg1 ;
-(id)initWithLocalPreferences:(id)arg1 ;
@end

