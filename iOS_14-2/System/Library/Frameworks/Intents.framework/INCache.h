/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class NSCache;

@interface INCache : NSObject {

	NSCache* _underlyingCache;

}

@property (nonatomic,readonly) NSCache * _cacheDictionary; 
+(id)sharedCache;
-(id)init;
-(NSCache *)_cacheDictionary;
-(void)addCacheableObject:(id)arg1 ;
-(void)removeCacheableObject:(id)arg1 ;
-(void)removeAllCacheableObjects;
-(id)cacheableObjectForIdentifier:(id)arg1 ;
-(id)consumeCacheableObjectForIdentifier:(id)arg1 ;
-(id)_init;
@end

