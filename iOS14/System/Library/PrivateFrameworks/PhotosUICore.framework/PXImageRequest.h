/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXUIImageProvider, PXDisplayAsset;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PHImageRequestOptions, UIImage, NSError;

@interface PXImageRequest : NSObject {

	BOOL _gotFullQualityImage;
	BOOL _resultIsInCloud;
	BOOL _canceled;
	id<PXUIImageProvider> _mediaProvider;
	id<PXDisplayAsset> _asset;
	PHImageRequestOptions* _options;
	long long _requestID;
	UIImage* _image;
	NSError* _error;
	CGSize _targetSize;

}

@property (nonatomic,readonly) id<PXUIImageProvider> mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) CGSize targetSize;                                //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) PHImageRequestOptions * options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long requestID;                                //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL gotFullQualityImage;                           //@synthesize gotFullQualityImage=_gotFullQualityImage - In the implementation block
@property (assign,nonatomic) BOOL resultIsInCloud;                               //@synthesize resultIsInCloud=_resultIsInCloud - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;                  //@synthesize canceled=_canceled - In the implementation block
-(CGSize)targetSize;
-(id<PXUIImageProvider>)mediaProvider;
-(BOOL)isCanceled;
-(void)setImage:(UIImage *)arg1 ;
-(id<PXDisplayAsset>)asset;
-(PHImageRequestOptions *)options;
-(void)setError:(NSError *)arg1 ;
-(UIImage *)image;
-(NSError *)error;
-(long long)requestID;
-(id)description;
-(BOOL)resultIsInCloud;
-(BOOL)gotFullQualityImage;
-(void)performWithResultHandler:(/*^block*/id)arg1 ;
-(id)initWithMediaProvider:(id)arg1 asset:(id)arg2 targetSize:(CGSize)arg3 options:(id)arg4 ;
-(void)setGotFullQualityImage:(BOOL)arg1 ;
-(void)setResultIsInCloud:(BOOL)arg1 ;
-(void)setRequestID:(long long)arg1 ;
-(void)cancel;
@end

