/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPreheatItem.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSString;

@interface PLFigPreheatItem : PLPreheatItem {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject* _cachedImage;
	BOOL _cachedImageCancelled;
	unsigned long long _requestID;
	FigPhotoDecompressionContainerRef _container;
	NSObject*<OS_dispatch_group> _requestGroup;
	NSObject*<OS_dispatch_group> _waitGroup;
	BOOL _dataIsLoading;
	unsigned _loadingOptions;
	AB _cancelled;
	AB _hasCachedImage;
	NSString* _imagePath;

}

@property (setter=_setHasCachedImage:) BOOL _hasCachedImage; 
@property (nonatomic,readonly) unsigned options;                          //@synthesize loadingOptions=_loadingOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * imagePath;                 //@synthesize imagePath=_imagePath - In the implementation block
-(unsigned)options;
-(void)_cancel;
-(void)_uncancel;
-(NSString *)imagePath;
-(BOOL)_hasCachedImage;
-(id)initWithImagePath:(id)arg1 format:(unsigned short)arg2 imageType:(long long)arg3 optimalSourcePixelSize:(CGSize)arg4 options:(unsigned)arg5 ;
-(void)_setHasCachedImage:(BOOL)arg1 ;
-(id)cachedImage:(BOOL*)arg1 ;
-(id)cachedImageIfAvailable:(BOOL*)arg1 ;
-(BOOL)addImageHandler:(/*^block*/id)arg1 ;
-(void)_cacheImage;
-(id)preheatData;
-(id)initialDecodeSessionOptions;
-(void)_loadPreheatDataWithHandler:(/*^block*/id)arg1 ;
-(void)_leaveWaitGroupIfNeeded;
-(void)startPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)decodeSessionOptions;
-(BOOL)isCancelled;
-(void)dealloc;
@end

