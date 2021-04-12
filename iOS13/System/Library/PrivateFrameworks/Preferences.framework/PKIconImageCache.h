/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface PKIconImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheAccessQueue;
	NSDictionary* _iconCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheAccessQueue;              //@synthesize cacheAccessQueue=_cacheAccessQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * iconCache;                                   //@synthesize iconCache=_iconCache - In the implementation block
+(id)settingsIconCache;
+(id)settingsIconCacheWithScale:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheAccessQueue;
-(id)imageForKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 scale:(double)arg2 ;
-(void)setIconCache:(NSDictionary *)arg1 ;
-(NSDictionary *)iconCache;
-(id)allImageIconKeys;
-(void)setCacheAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

