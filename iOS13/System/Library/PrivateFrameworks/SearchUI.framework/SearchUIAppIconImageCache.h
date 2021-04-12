/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class NSCache;

@interface SearchUIAppIconImageCache : NSObject {

	NSCache* _imageCache;

}

@property (nonatomic,retain) NSCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedCache;
-(id)init;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(id)cachedImageForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2 ;
-(void)updateImage:(id)arg1 forBundleIdentifier:(id)arg2 variant:(unsigned long long)arg3 ;
-(void)dateDidChange;
-(void)appIconImageDidChange:(id)arg1 ;
-(id)cacheKeyForVariant:(unsigned long long)arg1 ;
-(void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)arg1 ;
@end

