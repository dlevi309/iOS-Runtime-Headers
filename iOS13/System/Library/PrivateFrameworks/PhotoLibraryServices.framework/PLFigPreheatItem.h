/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned)options;
-(BOOL)isCancelled;
-(NSString *)imagePath;
-(void)_cancel;
-(id)decodeSessionOptions;
-(BOOL)_hasCachedImage;
-(id)initWithImagePath:(id)arg1 format:(unsigned short)arg2 imageType:(long long)arg3 optimalSourcePixelSize:(CGSize)arg4 options:(unsigned)arg5 ;
-(void)_uncancel;
-(void)_setHasCachedImage:(BOOL)arg1 ;
-(id)cachedImage:(BOOL*)arg1 ;
-(id)cachedImageIfAvailable:(BOOL*)arg1 ;
-(BOOL)addImageHandler:(/*^block*/id)arg1 ;
-(id)initialDecodeSessionOptions;
-(void)_cacheImage;
-(void)_loadPreheatDataWithHandler:(/*^block*/id)arg1 ;
-(id)preheatData;
-(void)_leaveWaitGroupIfNeeded;
-(void)startPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

