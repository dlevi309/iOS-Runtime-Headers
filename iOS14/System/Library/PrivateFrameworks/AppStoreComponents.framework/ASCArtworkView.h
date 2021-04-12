/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIView, UIImageView, ASCBorderView, UIImage;

@interface ASCArtworkView : UIView {

	NSString* _decoration;
	UIColor* _placeholderColor;
	UIView* _overlayView;
	UIImageView* _imageView;
	ASCBorderView* _borderView;
	CGSize _preferredSize;

}

@property (nonatomic,readonly) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) ASCBorderView * borderView;                       //@synthesize borderView=_borderView - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                               //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,retain) NSString * decoration;                              //@synthesize decoration=_decoration - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIColor * placeholderColor;                         //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,retain) UIView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
-(UIColor *)placeholderColor;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)overlayView;
-(UIImageView *)imageView;
-(void)setOverlayView:(UIView *)arg1 ;
-(CGSize)preferredSize;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(UIImage *)image;
-(NSString *)decoration;
-(id)description;
-(void)layoutSubviews;
-(ASCBorderView *)borderView;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setDataChanged;
-(double)cornerRadiusForContentRect:(CGRect)arg1 ;
-(id)cornerCurveForContentRect:(CGRect)arg1 ;
-(unsigned long long)cornerMaskForContentRect:(CGRect)arg1 ;
-(void)setDecoration:(NSString *)arg1 ;
@end

