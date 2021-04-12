/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <libobjc.A.dylib/TSImageCacheType.h>

@interface TSImageCache : NSObject <TSImageCacheType> {

	 downloader;
	 processor;
	 underlyingCache;
	 fetchDeduper;
	 mainLRU;

}
-(void)fetchImageForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchImageForRequest:(id)arg1 expires:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchImageForRequest:(id)arg1 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(void)cancelAllRunningOperations;
-(id)init;
-(id)initWithUnderlyingCache:(id)arg1 processor:(id)arg2 downloader:(id)arg3 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)dealloc;
@end

