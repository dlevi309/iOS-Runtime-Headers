/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIView, UIImageView, NSLayoutConstraint;

@interface CPUIBannerViewButton : UIControl {

	BOOL _wantsChevronImage;
	UILabel* _textLabel;
	UIView* _highlightView;
	UIImageView* _imageView;
	NSLayoutConstraint* _imageCenterConstraint;

}

@property (nonatomic,retain) UILabel * textLabel;                                     //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                  //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL wantsChevronImage;                                  //@synthesize wantsChevronImage=_wantsChevronImage - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageCenterConstraint;              //@synthesize imageCenterConstraint=_imageCenterConstraint - In the implementation block
+(id)buttonWithOK;
+(id)buttonWithChevronImage;
+(id)buttonWithText:(id)arg1 ;
+(id)_chevronImageForTraitCollection:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(UIView *)highlightView;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)_updateFontIfNecessary;
-(UILabel *)textLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setWantsChevronImage:(BOOL)arg1 ;
-(void)setImageCenterConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageCenterConstraint;
-(void)_setupImagesIfNecessary;
-(void)_updateImageConstraint;
-(BOOL)wantsChevronImage;
@end

