/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/WeatherPreferencesPersistence.h>

@class NSMutableDictionary, NSString;

@interface WeatherInMemoryDefaults : NSObject <WeatherPreferencesPersistence> {

	BOOL _synchronizeWasCalled;
	NSMutableDictionary* _inMemoryStore;

}

@property (retain) NSMutableDictionary * inMemoryStore;              //@synthesize inMemoryStore=_inMemoryStore - In the implementation block
@property (readonly) BOOL synchronizeWasCalled;                      //@synthesize synchronizeWasCalled=_synchronizeWasCalled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryForKey:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)inMemoryStore;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setInMemoryStore:(NSMutableDictionary *)arg1 ;
-(BOOL)synchronizeWasCalled;
@end

