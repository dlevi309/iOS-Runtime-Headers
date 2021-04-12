/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@class NSCache;

@interface VSShortTermCache : NSObject {

	NSCache* _cache;
	NSCache* _cacheTimer;

}

@property (nonatomic,retain) NSCache * cache;                   //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSCache * cacheTimer;              //@synthesize cacheTimer=_cacheTimer - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
-(void)setObject:(id)arg1 forKey:(id)arg2 timeToLive:(double)arg3 ;
-(NSCache *)cacheTimer;
-(void)timeToLiveTimerFired:(id)arg1 ;
-(void)setCacheTimer:(NSCache *)arg1 ;
@end

