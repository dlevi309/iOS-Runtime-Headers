/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/WeatherPreferencesPersistence.h>

@protocol WeatherCloudPersistenceDelegate;
@class WeatherCloudMigrator, NSUbiquitousKeyValueStore, NSString;

@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence> {

	id<WeatherCloudPersistenceDelegate> _delegate;
	WeatherCloudMigrator* _migrator;
	NSUbiquitousKeyValueStore* _activeCloudStore;
	NSUbiquitousKeyValueStore* _nonEncryptedStore;
	NSUbiquitousKeyValueStore* _encryptedStore;

}

@property (nonatomic,readonly) WeatherCloudMigrator * migrator;                          //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,retain) NSUbiquitousKeyValueStore * activeCloudStore;               //@synthesize activeCloudStore=_activeCloudStore - In the implementation block
@property (nonatomic,retain) NSUbiquitousKeyValueStore * nonEncryptedStore;              //@synthesize nonEncryptedStore=_nonEncryptedStore - In the implementation block
@property (nonatomic,retain) NSUbiquitousKeyValueStore * encryptedStore;                 //@synthesize encryptedStore=_encryptedStore - In the implementation block
@property (__weak) id<WeatherCloudPersistenceDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudPersistenceWithDelegate:(id)arg1 ;
+(BOOL)processIsWhitelistedForSync;
-(id)dictionaryForKey:(id)arg1 ;
-(id)init;
-(id<WeatherCloudPersistenceDelegate>)delegate;
-(NSUbiquitousKeyValueStore *)encryptedStore;
-(void)removeObjectForKey:(id)arg1 ;
-(NSUbiquitousKeyValueStore *)nonEncryptedStore;
-(void)setEncryptedStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)setDelegate:(id<WeatherCloudPersistenceDelegate>)arg1 ;
-(WeatherCloudMigrator *)migrator;
-(BOOL)synchronize;
-(id)initWithDelegate:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setNonEncryptedStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(NSUbiquitousKeyValueStore *)activeCloudStore;
-(BOOL)isInitialSyncNotification:(id)arg1 ;
-(void)setActiveCloudStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)cloudCitiesChangedExternally:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)encryptedStoreChanged:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

