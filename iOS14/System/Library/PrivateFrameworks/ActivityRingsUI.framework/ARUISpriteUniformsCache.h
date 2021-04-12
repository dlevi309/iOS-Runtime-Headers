/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@class NSCache;

@interface ARUISpriteUniformsCache : NSObject {

	NSCache* _cache;

}
+(id)defaultCache;
+(id)cacheWithLimit:(unsigned long long)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(void)clearCache;
-(id)uniformsForSprite:(id)arg1 renderedInContext:(id)arg2 ;
@end

