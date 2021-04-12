/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImageView *)imageView;
-(UIVisualEffectView *)effectView;
-(CGSize)imageSize;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)subtitleLabel;
-(NSString *)providerName;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setupSubviews;
-(void)setProviderName:(NSString *)arg1 ;
-(void)updateLabelsSettings;
-(id<GEOPictureItem>)pictureItem;
-(void)setTitleLabelProviderName;
-(BOOL)didDownloadImage;
-(void)setDidDownloadImage:(BOOL)arg1 ;
-(id)initWithPictureItem:(id)arg1 providerName:(id)arg2 ;
-(void)fetchImageIfNecessary;
-(void)updateUIForTheme:(id)arg1 ;
-(void)setPictureItem:(id<GEOPictureItem>)arg1 ;
@end

