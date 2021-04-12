/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol GEOPictureItem;
@class UIImageView, NSString, UIVisualEffectView, UILabel;

@interface MKPictureItemView : UIView {

	BOOL _didDownloadImage;
	id<GEOPictureItem> _pictureItem;
	UIImageView* _imageView;
	NSString* _providerName;
	UIVisualEffectView* _effectView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CGSize _imageSize;

}

@property (nonatomic,retain) id<GEOPictureItem> pictureItem;                 //@synthesize pictureItem=_pictureItem - In the implementation block
@property (nonatomic,copy) NSString * providerName;                          //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                             //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) BOOL didDownloadImage;                          //@synthesize didDownloadImage=_didDownloadImage - In the implementation block
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(CGSize)imageSize;
-(UIVisualEffectView *)effectView;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(UIImageView *)imageView;
-(UILabel *)subtitleLabel;
-(void)setupSubviews;
-(void)addShadowToLabel:(id)arg1 ;
-(void)updateLabelsSettings;
-(id<GEOPictureItem>)pictureItem;
-(void)setTitleLabelProviderName;
-(BOOL)didDownloadImage;
-(void)setDidDownloadImage:(BOOL)arg1 ;
-(id)initWithPictureItem:(id)arg1 providerName:(id)arg2 ;
-(void)fetchImageIfNecessary;
-(void)updateUIForTheme:(id)arg1 ;
-(void)setPictureItem:(id<GEOPictureItem>)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(NSString *)providerName;
@end

