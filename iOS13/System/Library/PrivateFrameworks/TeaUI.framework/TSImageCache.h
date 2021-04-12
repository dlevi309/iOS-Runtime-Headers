/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)fetchImageForRequest:(id)arg1 ;
-(void)cancelAllRunningOperations;
-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(id)initWithUnderlyingCache:(id)arg1 processor:(id)arg2 downloader:(id)arg3 ;
@end

