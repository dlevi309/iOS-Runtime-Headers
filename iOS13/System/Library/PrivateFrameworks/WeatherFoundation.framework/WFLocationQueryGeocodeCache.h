/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setExpirationInterval:(double)arg1 ;
-(double)expirationInterval;
-(BOOL)_shouldEvictObjectWithDate:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 withDate:(id)arg3 ;
@end

