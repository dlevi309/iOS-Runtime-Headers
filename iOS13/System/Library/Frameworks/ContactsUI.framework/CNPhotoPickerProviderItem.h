/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CNScheduler, CNPhotoPickerProviderItemDelegate;
@class NSData, NSString, NSDate, UIImage;

@interface CNPhotoPickerProviderItem : NSObject <NSCopying> {

	NSData* _thumbnailImageData;
	NSString* _recentsIdentifier;
	NSString* _localizedVariantDisplayName;
	id<CNScheduler> _renderingQueue;
	id<CNScheduler> _callbackQueue;
	NSDate* _sortDate;
	id<CNPhotoPickerProviderItemDelegate> _delegate;
	UIImage* _fullSizeImage;
	UIImage* _thumbnailImage;
	UIImage* _loadingPlaceholderImage;
	NSData* _imageData;
	NSData* _fullscreenImageData;
	NSData* _filteredImageData;
	NSString* _imageFilterName;
	CGRect _cropRect;

}

@property (nonatomic,retain) UIImage * fullSizeImage;                                            //@synthesize fullSizeImage=_fullSizeImage - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                                           //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) UIImage * loadingPlaceholderImage;                                  //@synthesize loadingPlaceholderImage=_loadingPlaceholderImage - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                                 //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSData * thumbnailImageData;                                        //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (nonatomic,retain) NSData * fullscreenImageData;                                       //@synthesize fullscreenImageData=_fullscreenImageData - In the implementation block
@property (nonatomic,retain) NSData * filteredImageData;                                         //@synthesize filteredImageData=_filteredImageData - In the implementation block
@property (nonatomic,retain) NSString * imageFilterName;                                         //@synthesize imageFilterName=_imageFilterName - In the implementation block
@property (nonatomic,retain) NSString * localizedVariantDisplayName;                             //@synthesize localizedVariantDisplayName=_localizedVariantDisplayName - In the implementation block
@property (nonatomic,readonly) NSData * originalImageData; 
@property (nonatomic,retain) NSString * recentsIdentifier;                                       //@synthesize recentsIdentifier=_recentsIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                                  //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) unsigned long long imageType; 
@property (nonatomic,readonly) BOOL allowsVariants; 
@property (nonatomic,readonly) BOOL allowsEditing; 
@property (nonatomic,readonly) BOOL allowsMoveAndScale; 
@property (nonatomic,readonly) BOOL shouldShowCaption; 
@property (nonatomic,readonly) NSString * localizedVariantsTitle; 
@property (nonatomic,readonly) NSString * variantIdentifier; 
@property (nonatomic,readonly) id<CNScheduler> renderingQueue;                                   //@synthesize renderingQueue=_renderingQueue - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> callbackQueue;                                    //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSDate * sortDate;                                                  //@synthesize sortDate=_sortDate - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerProviderItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)thumbnailViewForImage:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<CNPhotoPickerProviderItemDelegate>)delegate;
-(void)setDelegate:(id<CNPhotoPickerProviderItemDelegate>)arg1 ;
-(id<CNScheduler>)callbackQueue;
-(BOOL)allowsEditing;
-(NSData *)imageData;
-(unsigned long long)imageType;
-(NSDate *)sortDate;
-(CGRect)cropRect;
-(void)updateContact:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)thumbnailImageData;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(NSData *)fullscreenImageData;
-(void)setFullscreenImageData:(NSData *)arg1 ;
-(NSString *)variantIdentifier;
-(BOOL)allowsVariants;
-(BOOL)allowsMoveAndScale;
-(id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(CGRect)arg4 ;
-(id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 imageFilterName:(id)arg4 cropRect:(CGRect)arg5 renderingQueue:(id)arg6 callbackQueue:(id)arg7 ;
-(BOOL)shouldShowCaption;
-(NSString *)localizedVariantsTitle;
-(NSData *)originalImageData;
-(void)generateAllImageDatasIfNeeded;
-(id)generateThumbnailImageDataIfNeeded;
-(id)generateThumbnailImageDataWithData:(id)arg1 ;
-(void)clearThumbnailImage;
-(void)thumbnailViewWithPlaceholderProvider:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)thumbnailViewWithCompletion:(/*^block*/id)arg1 ;
-(UIImage *)fullSizeImage;
-(void)applyVariantEffectToFullsizeImageWithCompletion:(/*^block*/id)arg1 ;
-(id)createVariantsItemsWithVariantsManager:(id)arg1 ;
-(id)generatePhotoFilterVariants;
-(id)rotateImageDataIfNeeded:(id)arg1 ;
-(id)contactImageForMetadataStore;
-(void)updateTintColorIfNeeded:(id)arg1 ;
-(NSString *)recentsIdentifier;
-(void)setRecentsIdentifier:(NSString *)arg1 ;
-(NSString *)localizedVariantDisplayName;
-(void)setLocalizedVariantDisplayName:(NSString *)arg1 ;
-(id<CNScheduler>)renderingQueue;
-(void)setSortDate:(NSDate *)arg1 ;
-(void)setFullSizeImage:(UIImage *)arg1 ;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(UIImage *)loadingPlaceholderImage;
-(void)setLoadingPlaceholderImage:(UIImage *)arg1 ;
-(NSData *)filteredImageData;
-(void)setFilteredImageData:(NSData *)arg1 ;
-(NSString *)imageFilterName;
-(void)setImageFilterName:(NSString *)arg1 ;
@end

