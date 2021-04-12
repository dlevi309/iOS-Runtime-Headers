/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@class NSCache, NSMutableDictionary;

@interface VSShortTermCache : NSObject {

	NSCache* _cache;
	NSMutableDictionary* _cacheTimer;

}

@property (nonatomic,retain) NSCache * cache;                               //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheTimer;              //@synthesize cacheTimer=_cacheTimer - In the implementation block
+(id)sharedInstance;
-(NSCache *)cache;
-(id)init;
-(void)setCache:(NSCache *)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKey:(id)arg2 timeToLive:(double)arg3 ;
-(NSMutableDictionary *)cacheTimer;
-(void)timeToLiveTimerFired:(id)arg1 ;
-(void)setCacheTimer:(NSMutableDictionary *)arg1 ;
@end

