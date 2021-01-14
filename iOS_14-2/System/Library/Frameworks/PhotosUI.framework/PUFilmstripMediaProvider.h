/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUMediaProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray, AVAsset, AVVideoComposition, UIImage, AVAssetImageGenerator, NSCache;

@interface PUFilmstripMediaProvider : PUMediaProvider {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _imageGenerationQueue;
	NSMutableDictionary* _ivarQueue_resultsByRequestNumber;
	NSMutableDictionary* _ivarQueue_completionHandlersByRequestNumber;
	NSMutableArray* _ivarQueue_pendingResults;
	BOOL _deliversImagesInOrder;
	AVAsset* _asset;
	AVVideoComposition* _videoComposition;
	double _timeTolerance;
	UIImage* _placeholderImage;
	AVAssetImageGenerator* __imageGenerator;
	long long __requestNumber;
	NSCache* __imageCache;

}

@property (setter=_setImageGenerator:,nonatomic,retain) AVAssetImageGenerator * _imageGenerator;              //@synthesize _imageGenerator=__imageGenerator - In the implementation block
@property (assign,setter=_setRequestNumber:,nonatomic) long long _requestNumber;                              //@synthesize _requestNumber=__requestNumber - In the implementation block
@property (setter=_setImageCache:,nonatomic,retain) NSCache * _imageCache;                                    //@synthesize _imageCache=__imageCache - In the implementation block
@property (nonatomic,readonly) AVAsset * asset;                                                               //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * videoComposition;                                         //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) double timeTolerance;                                                            //@synthesize timeTolerance=_timeTolerance - In the implementation block
@property (assign,nonatomic) BOOL deliversImagesInOrder;                                                      //@synthesize deliversImagesInOrder=_deliversImagesInOrder - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                      //@synthesize placeholderImage=_placeholderImage - In the implementation block
-(id)init;
-(AVAsset *)asset;
-(long long)_requestNumber;
-(id)initWithAVAsset:(id)arg1 videoComposition:(id)arg2 ;
-(void)_performIvarRead:(/*^block*/id)arg1 ;
-(void)_performIvarWrite:(/*^block*/id)arg1 ;
-(void)setTimeTolerance:(double)arg1 ;
-(void)setDeliversImagesInOrder:(BOOL)arg1 ;
-(void)_handleSourceTimeLoadedForAsset:(id)arg1 time:(double)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 requestNumber:(long long)arg5 ;
-(void)_generateImageForResult:(id)arg1 ;
-(void)_didGenerateImage:(id)arg1 error:(id)arg2 requestedTime:(SCD_Struct_PH4)arg3 actualTime:(SCD_Struct_PH4)arg4 generatorResult:(long long)arg5 forResult:(id)arg6 ;
-(void)_deliverPendingResults;
-(void)_deliverResult:(id)arg1 ;
-(void)_deliverPlaceholderImage;
-(double)timeTolerance;
-(BOOL)deliversImagesInOrder;
-(void)_setImageGenerator:(id)arg1 ;
-(void)_setRequestNumber:(long long)arg1 ;
-(void)_setImageCache:(id)arg1 ;
-(void)cancelAllRequests;
-(UIImage *)placeholderImage;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(AVVideoComposition *)videoComposition;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(NSCache *)_imageCache;
-(AVAssetImageGenerator *)_imageGenerator;
-(void)cancelImageRequest:(int)arg1 ;
-(void)dealloc;
@end

