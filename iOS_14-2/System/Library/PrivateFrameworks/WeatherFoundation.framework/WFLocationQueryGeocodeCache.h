/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface WFLocationQueryGeocodeCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _cacheAge;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	double _expirationInterval;

}

@property (assign,nonatomic) double expirationInterval;              //@synthesize expirationInterval=_expirationInterval - In the implementation block
-(void)_setObject:(id)arg1 forKey:(id)arg2 withDate:(id)arg3 ;
-(id)init;
-(double)expirationInterval;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)_shouldEvictObjectWithDate:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)setExpirationInterval:(double)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

