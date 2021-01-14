/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <TipsCore/TPSDataCacheController.h>

@interface TPSImageCacheController : TPSDataCacheController
+(id)sharedInstance;
+(id)defaultInMemoryImageCache;
-(id)formattedDataWithFileURL:(id)arg1 ;
-(id)formattedDataWithData:(id)arg1 ;
-(void)commonInit;
-(BOOL)isURLValid:(id)arg1 ;
-(id)newDataCache;
-(void)formattedDataWithFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllDataCache;
-(void)removeInMemoryCache;
-(void)addInMemoryCacheForImage:(id)arg1 identifier:(id)arg2 cost:(unsigned long long)arg3 ;
-(id)imageFromMemoryCacheForPath:(id)arg1 ;
-(void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)removeInMemoryCacheForPath:(id)arg1 ;
-(id)getImageForPath:(id)arg1 ;
@end

