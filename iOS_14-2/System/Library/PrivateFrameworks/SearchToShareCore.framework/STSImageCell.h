/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIView, STSCellDownloadOverlayView, UILabel, STSAnimatedImageInfo, UIColor, NSString, UIImage;

@interface STSImageCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIImageView* _badgeView;
	UIView* _placeholderColorView;
	STSCellDownloadOverlayView* _downloadProgressView;
	UILabel* _labelView;
	UIView* _labelBackgroundView;
	UIImageView* _debugBadgeView;
	BOOL _showDownloadIndicator;
	STSAnimatedImageInfo* _imageInfo;
	UIColor* _placeholderColor;
	double _downloadProgress;
	NSString* _category;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) STSAnimatedImageInfo * imageInfo;              //@synthesize imageInfo=_imageInfo - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                    //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,retain) UIImage * badge; 
@property (nonatomic,retain) UIImage * debugBadge; 
@property (assign,nonatomic) BOOL showDownloadIndicator;                    //@synthesize showDownloadIndicator=_showDownloadIndicator - In the implementation block
@property (assign,nonatomic) double downloadProgress;                       //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy) NSString * category;                             //@synthesize category=_category - In the implementation block
-(UIColor *)placeholderColor;
-(void)setCategory:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)imageFrame;
-(void)setBadge:(UIImage *)arg1 ;
-(UIImage *)badge;
-(NSString *)category;
-(void)prepareForReuse;
-(UIImage *)image;
-(double)downloadProgress;
-(STSAnimatedImageInfo *)imageInfo;
-(void)setImageInfo:(STSAnimatedImageInfo *)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)layoutSubviews;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDownloadProgress:(double)arg1 ;
-(double)imageAspectRatio;
-(UIImage *)debugBadge;
-(void)_updatePlaceholderViewAnimated:(BOOL)arg1 ;
-(void)setShowDownloadIndicator:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateBadgeAnimated:(BOOL)arg1 ;
-(void)setDebugBadge:(UIImage *)arg1 ;
-(void)setShowDownloadIndicator:(BOOL)arg1 ;
-(BOOL)showDownloadIndicator;
@end

