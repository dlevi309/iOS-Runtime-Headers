/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class UILabel, SKUILockupMetadataView, SKUIEmbeddedMediaView, NSString, UIImage;

@interface SKUILockupItemCellLayout : SKUIItemCellLayout {

	UIEdgeInsets _contentInsets;
	CGSize _imageBoundingSize;
	long long _itemOfferStyle;
	UILabel* _itemOfferTextLabel;
	long long _layoutStyle;
	long long _lockupSize;
	SKUILockupMetadataView* _metadataView;
	BOOL _playsInlineVideo;
	long long _verticalAlignment;
	SKUIEmbeddedMediaView* _videoThumbnailView;
	CGSize _videoThumbnailSize;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                    //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) CGSize imageBoundingSize;                      //@synthesize imageBoundingSize=_imageBoundingSize - In the implementation block
@property (assign,nonatomic) long long itemOfferStyle;                      //@synthesize itemOfferStyle=_itemOfferStyle - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                         //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long lockupSize;                          //@synthesize lockupSize=_lockupSize - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                   //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long visibleFields; 
@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSString * categoryString; 
@property (nonatomic,copy) NSString * editorialBadgeString; 
@property (nonatomic,copy) NSString * itemCountString; 
@property (nonatomic,copy) NSString * releaseDateString; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long numberOfUserRatings; 
@property (assign,nonatomic) float userRating; 
@property (nonatomic,retain) UIImage * videoThumbnailImage; 
@property (assign,nonatomic) CGSize videoThumbnailSize;                     //@synthesize videoThumbnailSize=_videoThumbnailSize - In the implementation block
@property (assign,nonatomic) BOOL playsInlineVideo;                         //@synthesize playsInlineVideo=_playsInlineVideo - In the implementation block
+(double)heightForLockupStyle:(SKUILockupStyle)arg1 item:(id)arg2 editorial:(id)arg3 clientContext:(id)arg4 ;
+(CGSize)videoThumbnailSizeForVideo:(id)arg1 clientContext:(id)arg2 ;
+(double)heightForLockupComponent:(id)arg1 clientContext:(id)arg2 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)setUserRating:(float)arg1 ;
-(BOOL)playsInlineVideo;
-(UIEdgeInsets)contentInsets;
-(void)setArtistName:(NSString *)arg1 ;
-(long long)layoutStyle;
-(long long)numberOfUserRatings;
-(void)setClientContext:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)categoryString;
-(NSString *)artistName;
-(void)setBackgroundColor:(id)arg1 ;
-(void)prepareForReuse;
-(NSString *)releaseDateString;
-(void)setReleaseDateString:(NSString *)arg1 ;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithParentView:(id)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(long long)verticalAlignment;
-(float)userRating;
-(void)setVerticalAlignment:(long long)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(NSString *)editorialBadgeString;
-(NSString *)itemCountString;
-(void)setEditorialBadgeString:(NSString *)arg1 ;
-(void)setCategoryString:(NSString *)arg1 ;
-(void)setItemCountString:(NSString *)arg1 ;
-(void)setVisibleFields:(unsigned long long)arg1 ;
-(unsigned long long)visibleFields;
-(void)setImageBoundingSize:(CGSize)arg1 ;
-(void)setLockupSize:(long long)arg1 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(void)layoutForItemOfferChange;
-(void)_initSKUILockupItemCellLayout;
-(UIImage *)videoThumbnailImage;
-(void)_beginVideoPlaybackAction:(id)arg1 ;
-(void)_layoutHorizontal;
-(void)_layoutVertical;
-(CGRect)_layoutIconImageView;
-(BOOL)_isItemOfferHidden;
-(id)_itemOfferTextLabel;
-(void)endVideoPlaybackAnimated:(BOOL)arg1 ;
-(void)playInlineVideoWithURL:(id)arg1 ;
-(void)setItemOfferStyle:(long long)arg1 ;
-(void)setPlaysInlineVideo:(BOOL)arg1 ;
-(void)setVideoThumbnailImage:(UIImage *)arg1 ;
-(void)setVideoThumbnailSize:(CGSize)arg1 ;
-(CGSize)imageBoundingSize;
-(long long)itemOfferStyle;
-(long long)lockupSize;
-(CGSize)videoThumbnailSize;
@end

