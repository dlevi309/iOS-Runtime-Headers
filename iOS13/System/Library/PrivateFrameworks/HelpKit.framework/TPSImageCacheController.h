/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <Tips/TPSDataCacheController.h>

@interface TPSImageCacheController : TPSDataCacheController
+(id)sharedInstance;
+(id)defaultInMemoryImageCache;
-(void)commonInit;
-(id)formattedDataWithFileURL:(id)arg1 ;
-(void)addInMemoryCacheForImage:(id)arg1 identifier:(id)arg2 cost:(unsigned long long)arg3 ;
-(id)formattedDataWithData:(id)arg1 ;
-(BOOL)isURLValid:(id)arg1 ;
-(id)newDataCache;
-(void)formattedDataWithFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllDataCache;
-(void)removeInMemoryCache;
-(id)imageFromMemoryCacheForPath:(id)arg1 ;
-(void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)removeInMemoryCacheForPath:(id)arg1 ;
-(id)getImageForPath:(id)arg1 ;
@end

