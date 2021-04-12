/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class NSCache;

@interface INCache : NSObject {

	NSCache* _underlyingCache;

}

@property (nonatomic,readonly) NSCache * _cacheDictionary; 
+(id)sharedCache;
-(id)init;
-(id)_init;
-(NSCache *)_cacheDictionary;
-(void)addCacheableObject:(id)arg1 ;
-(void)removeCacheableObject:(id)arg1 ;
-(id)cacheableObjectForIdentifier:(id)arg1 ;
-(id)consumeCacheableObjectForIdentifier:(id)arg1 ;
-(void)removeAllCacheableObjects;
@end

