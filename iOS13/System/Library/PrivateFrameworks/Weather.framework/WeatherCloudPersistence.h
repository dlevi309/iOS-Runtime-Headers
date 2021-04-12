/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/WeatherPreferencesPersistence.h>

@protocol WeatherCloudPersistenceDelegate;
@class NSUbiquitousKeyValueStore, NSString;

@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence> {

	id<WeatherCloudPersistenceDelegate> _delegate;
	NSUbiquitousKeyValueStore* _cloudStore;

}

@property (retain) NSUbiquitousKeyValueStore * cloudStore;                    //@synthesize cloudStore=_cloudStore - In the implementation block
@property (__weak) id<WeatherCloudPersistenceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)processIsWhitelistedForSync;
+(id)cloudPersistenceWithDelegate:(id)arg1 ;
-(id)init;
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id<WeatherCloudPersistenceDelegate>)delegate;
-(void)setDelegate:(id<WeatherCloudPersistenceDelegate>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setCloudStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)cloudCitiesChangedExternally:(id)arg1 ;
-(NSUbiquitousKeyValueStore *)cloudStore;
-(BOOL)isInitialSyncNotification:(id)arg1 ;
@end

