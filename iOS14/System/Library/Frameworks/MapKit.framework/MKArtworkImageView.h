/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@protocol MKArtworkImageSource;
@class UIImageView, UIColor;

@interface MKArtworkImageView : UIImageView {

	UIImageView* _cachedBadgeView;
	id<MKArtworkImageSource> _imageSource;
	UIColor* _primaryTintColor;
	UIColor* _secondaryTintColor;

}

@property (nonatomic,readonly) UIImageView * badgeView; 
@property (nonatomic,retain) id<MKArtworkImageSource> imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,retain) UIColor * primaryTintColor;                        //@synthesize primaryTintColor=_primaryTintColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTintColor;                      //@synthesize secondaryTintColor=_secondaryTintColor - In the implementation block
-(UIImageView *)badgeView;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImageSource:(id<MKArtworkImageSource>)arg1 ;
-(id<MKArtworkImageSource>)imageSource;
-(UIColor *)primaryTintColor;
-(void)setPrimaryTintColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTintColor;
-(void)setSecondaryTintColor:(UIColor *)arg1 ;
-(void)_updateImageView;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

