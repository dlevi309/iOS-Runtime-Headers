/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CLKDevice, NSString;

@interface NTKCompanionResourceDirectoryEditor : NSObject {

	BOOL _resourceDirectoryIsHardLink;
	CLKDevice* _device;
	NSString* _resourceDirectory;
	long long _state;
	NSString* _galleryPreviewResourceDirectory;

}

@property (nonatomic,retain) NSString * resourceDirectory;                            //@synthesize resourceDirectory=_resourceDirectory - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * galleryPreviewResourceDirectory;              //@synthesize galleryPreviewResourceDirectory=_galleryPreviewResourceDirectory - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                    //@synthesize device=_device - In the implementation block
+(id)_linkPhoto:(id)arg1 to:(id)arg2 previewOnly:(BOOL)arg3 ;
+(id)_transcodeAsset:(id)arg1 withCrop:(CGRect)arg2 into:(id)arg3 previewOnly:(BOOL)arg4 ;
+(CGSize)_watchPhotoImageSize;
+(id)_videoAssetOf:(id)arg1 ;
+(CGSize)_watchPhotoVideoSize;
+(id)_subsampledImageWithData:(id)arg1 orientation:(long long)arg2 subsampleFactor:(unsigned long long)arg3 ;
+(void)_imageDataForAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_createResourceDirectoryWithAsset:(id)arg1 forDevice:(id)arg2 previewOnly:(BOOL)arg3 ;
+(id)_writeAsset:(id)arg1 image:(id)arg2 withImageCrop:(CGRect)arg3 to:(id)arg4 ;
+(id)_scaleImage:(id)arg1 toLongestEdgeInPixels:(double)arg2 ;
+(id)_cropAndScaleUIImage:(id)arg1 cropRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
+(BOOL)_transcodeStillImageOf:(id)arg1 forPhoto:(id)arg2 withCrop:(CGRect)arg3 into:(id)arg4 ;
+(BOOL)_transcodeIrisVideoOf:(id)arg1 forPhoto:(id)arg2 withCrop:(CGRect)arg3 into:(id)arg4 previewOnly:(BOOL)arg5 ;
+(unsigned long long)_subsampleFactorForScale:(double)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CLKDevice *)device;
-(NSString *)resourceDirectory;
-(void)setResourceDirectory:(NSString *)arg1 ;
-(id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 ;
-(void)setGalleryPreviewResourceDirectory:(NSString *)arg1 ;
-(NSString *)galleryPreviewResourceDirectory;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(/*^block*/id)arg1 ;
-(void)finalizeWithCompletion:(/*^block*/id)arg1 ;
-(void)_deleteResourceDirectoryHardLinkIfNecessary;
@end

