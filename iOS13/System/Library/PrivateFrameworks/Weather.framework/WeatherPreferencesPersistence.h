/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


@protocol WeatherPreferencesPersistence <NSObject>
@required
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1;
-(void)removeObjectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;
-(BOOL)boolForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(id)dictionaryForKey:(id)arg1;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1;

@end

