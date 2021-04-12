/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSCache, NSObject;

@interface PLPlaceholderThumbnailManager : NSObject {

	NSCache* _placeholderDataCache;
	NSCache* _placeholderImageCache;
	NSObject*<OS_dispatch_queue> _isolation;

}
+(id)sharedManager;
-(id)init;
-(id)_cacheKeyForFormat:(id)arg1 photoImageSize:(CGSize)arg2 photoImageColor:(id)arg3 ;
-(id)_placeholderImageWithColor:(id)arg1 ;
-(id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(CGSize)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(id)newPlaceholderImageForFormat:(unsigned short)arg1 photoImageSize:(CGSize)arg2 ;
@end

