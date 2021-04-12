/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPhotoPickerProviderItem.h>

@protocol AVTAvatarRecord;
@class AVTStickerConfiguration, CNPhotoPickerColorVariant, NSData, UIImage, CNAvatarStickerGeneratorProvider, AVTRenderingScope, AVTAvatarRecordImageProvider;

@interface CNPhotoPickerAnimojiProviderItem : CNPhotoPickerProviderItem {

	id<AVTAvatarRecord> _avatarRecord;
	AVTStickerConfiguration* _poseConfiguration;
	CNPhotoPickerColorVariant* _backgroundColorVariant;
	NSData* __originalImageData;
	NSData* __generatedImageData;
	UIImage* _loadingPlaceholderImage;
	CNAvatarStickerGeneratorProvider* _stickerGeneratorProvider;
	AVTRenderingScope* _renderingScope;
	AVTAvatarRecordImageProvider* _imageProvider;

}

@property (nonatomic,retain) NSData * _originalImageData;                                              //@synthesize _originalImageData=__originalImageData - In the implementation block
@property (nonatomic,retain) NSData * _generatedImageData;                                             //@synthesize _generatedImageData=__generatedImageData - In the implementation block
@property (nonatomic,retain) NSData * thumbnailImageData; 
@property (nonatomic,retain) UIImage * loadingPlaceholderImage;                                        //@synthesize loadingPlaceholderImage=_loadingPlaceholderImage - In the implementation block
@property (nonatomic,retain) CNPhotoPickerColorVariant * backgroundColorVariant;                       //@synthesize backgroundColorVariant=_backgroundColorVariant - In the implementation block
@property (nonatomic,retain) CNAvatarStickerGeneratorProvider * stickerGeneratorProvider;              //@synthesize stickerGeneratorProvider=_stickerGeneratorProvider - In the implementation block
@property (nonatomic,retain) AVTRenderingScope * renderingScope;                                       //@synthesize renderingScope=_renderingScope - In the implementation block
@property (nonatomic,retain) AVTAvatarRecordImageProvider * imageProvider;                             //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                         //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) AVTStickerConfiguration * poseConfiguration;                              //@synthesize poseConfiguration=_poseConfiguration - In the implementation block
-(void)setBackgroundColorVariant:(CNPhotoPickerColorVariant *)arg1 ;
-(CNPhotoPickerColorVariant *)backgroundColorVariant;
-(AVTRenderingScope *)renderingScope;
-(void)setRenderingScope:(AVTRenderingScope *)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)setImageProvider:(AVTAvatarRecordImageProvider *)arg1 ;
-(id)imageData;
-(id)variantIdentifier;
-(id)copyWithColor:(id)arg1 ;
-(id)initWithOriginalImageData:(id)arg1 cropRect:(CGRect)arg2 ;
-(AVTStickerConfiguration *)poseConfiguration;
-(id)initWithOriginalImageData:(id)arg1 cropRect:(CGRect)arg2 backgroundColorVariant:(id)arg3 ;
-(id)renderDefaultAvatarImage;
-(id)initWithAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingScope:(id)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 ;
-(id)copyWithPoseConfiguration:(id)arg1 generatorProvider:(id)arg2 ;
-(id)renderAvatarWithPoseWithSize:(double)arg1 ;
-(id)renderAvatarWithBackgroundWithImageData:(id)arg1 ;
-(id)renderAvatarWithBackgroundWithImage:(id)arg1 ;
-(id)generateImageDataIfNeeded;
-(void)setPoseConfiguration:(AVTStickerConfiguration *)arg1 ;
-(NSData *)_originalImageData;
-(void)set_originalImageData:(NSData *)arg1 ;
-(NSData *)_generatedImageData;
-(void)set_generatedImageData:(NSData *)arg1 ;
-(unsigned long long)hash;
-(CNAvatarStickerGeneratorProvider *)stickerGeneratorProvider;
-(void)setStickerGeneratorProvider:(CNAvatarStickerGeneratorProvider *)arg1 ;
-(BOOL)allowsVariants;
-(BOOL)allowsMoveAndScale;
-(AVTAvatarRecordImageProvider *)imageProvider;
-(BOOL)shouldShowCaption;
-(id)localizedVariantsTitle;
-(id)originalImageData;
-(id)generateThumbnailImageDataIfNeeded;
-(void)applyVariantEffectToFullsizeImageWithCompletion:(/*^block*/id)arg1 ;
-(void)updateVisualIdentity:(id)arg1 ;
-(id)createVariantsItemsWithVariantsManager:(id)arg1 ;
-(id)contactImageForMetadataStore;
-(UIImage *)loadingPlaceholderImage;
-(void)setLoadingPlaceholderImage:(UIImage *)arg1 ;
-(unsigned long long)imageType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

