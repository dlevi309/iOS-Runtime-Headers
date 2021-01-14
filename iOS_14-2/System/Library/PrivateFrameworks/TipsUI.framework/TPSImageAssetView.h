/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsUI.framework/TipsUI
*/

#import <TipsUI/TipsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TPSImageAssetViewDelegate;
@class UIView, UIImageView, UIColor, NSString, TPSURLSessionItem, UIImage;

@interface TPSImageAssetView : UIView {

	UIView* _highlightView;
	BOOL _respectLoadingStatus;
	BOOL _hideImageWhenNil;
	BOOL _roundedCorner;
	BOOL _aspectFillAsset;
	double _roundedCornerRadius;
	id<TPSImageAssetViewDelegate> _delegate;
	UIImageView* _imageView;
	UIImageView* _backgroundImageView;
	UIColor* _defaultBackgroundColor;
	UIColor* _noImageBackgroundColor;
	UIColor* _overlayColor;
	NSString* _currentImagePath;
	NSString* _currentDisplayIdentifier;
	unsigned long long _status;
	TPSURLSessionItem* _imageURLSessionItem;

}

@property (assign,nonatomic) unsigned long long status;                                  //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) TPSURLSessionItem * imageURLSessionItem;                    //@synthesize imageURLSessionItem=_imageURLSessionItem - In the implementation block
@property (assign,nonatomic) BOOL respectLoadingStatus;                                  //@synthesize respectLoadingStatus=_respectLoadingStatus - In the implementation block
@property (assign,nonatomic) BOOL hideImageWhenNil;                                      //@synthesize hideImageWhenNil=_hideImageWhenNil - In the implementation block
@property (assign,nonatomic) BOOL roundedCorner;                                         //@synthesize roundedCorner=_roundedCorner - In the implementation block
@property (assign,nonatomic) BOOL aspectFillAsset;                                       //@synthesize aspectFillAsset=_aspectFillAsset - In the implementation block
@property (assign,nonatomic) double roundedCornerRadius;                                 //@synthesize roundedCornerRadius=_roundedCornerRadius - In the implementation block
@property (assign,nonatomic,__weak) id<TPSImageAssetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                          //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;                           //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * noImageBackgroundColor;                           //@synthesize noImageBackgroundColor=_noImageBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * overlayColor;                                     //@synthesize overlayColor=_overlayColor - In the implementation block
@property (nonatomic,retain) NSString * currentImagePath;                                //@synthesize currentImagePath=_currentImagePath - In the implementation block
@property (nonatomic,retain) NSString * currentDisplayIdentifier;                        //@synthesize currentDisplayIdentifier=_currentDisplayIdentifier - In the implementation block
+(id)defaultBackgroundColor;
+(BOOL)cacheImageAvailableForIdentifier:(id)arg1 ;
-(UIImageView *)backgroundImageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIImageView *)imageView;
-(id<TPSImageAssetViewDelegate>)delegate;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(UIImage *)image;
-(void)commonInit;
-(void)setDelegate:(id<TPSImageAssetViewDelegate>)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)updateBackgroundColor;
-(UIColor *)defaultBackgroundColor;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(double)roundedCornerRadius;
-(UIColor *)overlayColor;
-(void)cancel;
-(unsigned long long)status;
-(void)setRoundedCornerRadius:(double)arg1 ;
-(NSString *)currentDisplayIdentifier;
-(TPSURLSessionItem *)imageURLSessionItem;
-(void)animateImageView:(BOOL)arg1 ;
-(void)setCurrentDisplayIdentifier:(NSString *)arg1 ;
-(void)setCurrentImagePath:(NSString *)arg1 ;
-(void)setImageURLSessionItem:(TPSURLSessionItem *)arg1 ;
-(id)initWithDefaultBackgroundColor:(id)arg1 noImageBackgroundColor:(id)arg2 ;
-(void)setAspectFillAsset:(BOOL)arg1 ;
-(void)setRoundedCorner:(BOOL)arg1 ;
-(void)setNoImageBackgroundColor:(UIColor *)arg1 ;
-(void)fetchImageWithIdentifier:(id)arg1 path:(id)arg2 ;
-(void)showHighlight:(BOOL)arg1 ;
-(BOOL)respectLoadingStatus;
-(void)setRespectLoadingStatus:(BOOL)arg1 ;
-(BOOL)hideImageWhenNil;
-(void)setHideImageWhenNil:(BOOL)arg1 ;
-(BOOL)roundedCorner;
-(BOOL)aspectFillAsset;
-(UIColor *)noImageBackgroundColor;
-(NSString *)currentImagePath;
@end

