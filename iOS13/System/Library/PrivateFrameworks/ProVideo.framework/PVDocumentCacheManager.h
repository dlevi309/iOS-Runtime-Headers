/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSCache, NSString;

@interface PVDocumentCacheManager : NSObject <NSCacheDelegate> {

	NSCache* _cache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(void)removeAllEffects;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(id)generateKeyFromFilePathString:(id)arg1 ;
-(void)cacheOZXDocument:(void*)arg1 forKey:(id)arg2 timeElapsed:(double)arg3 memoryInfo:(unsigned long long)arg4 ;
-(void*)newOZXDocumentForKey:(id)arg1 ;
-(void*)getOZXDocumentForKey:(id)arg1 ;
@end

