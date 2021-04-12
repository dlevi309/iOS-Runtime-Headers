/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class NSCache;

@interface SearchUIImageCache : NSObject {

	NSCache* _imageCache;

}

@property (retain) NSCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(void)cacheTLKImage:(id)arg1 forSFImage:(id)arg2 ;
+(id)sharedCache;
+(id)cachedTlkImageForSFImage:(id)arg1 ;
-(id)init;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(void)dateDidChange;
-(void)appIconImageDidChange:(id)arg1 ;
-(void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)arg1 ;
@end

