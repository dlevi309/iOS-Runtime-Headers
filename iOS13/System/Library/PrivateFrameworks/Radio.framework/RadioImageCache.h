/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/


#import <Radio/Radio-Structs.h>
@class NSOperationQueue;

@interface RadioImageCache : NSObject {

	NSOperationQueue* _imageRequestQueue;

}
+(id)sharedCache;
+(CFURLCacheRef)_sharedCFURLCache;
+(CFURLStorageSessionRef)_newSharedCacheStorageSession;
-(id)init;
-(void)dealloc;
-(id)_init;
-(id)cachedImageDataForRadioArtwork:(id)arg1 MIMEType:(id*)arg2 ;
-(void)loadImageForRadioArtwork:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_requestForRadioArtwork:(id)arg1 ;
-(id)_cachedResponseForRequest:(id)arg1 ;
-(id)cachedImageDataForStation:(id)arg1 withExactSize:(CGSize)arg2 MIMEType:(id*)arg3 ;
-(void)loadImageForStation:(id)arg1 withSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeAllCachedImages;
@end

