/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/WeatherPreferencesPersistence.h>

@class NSUserDefaults, NSString;

@interface WeatherUserDefaults : NSObject <WeatherPreferencesPersistence> {

	NSUserDefaults* _userDefaults;

}

@property (retain) NSUserDefaults * userDefaults;                   //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserDefaults:(id)arg1 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSUserDefaults *)userDefaults;
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

