/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CNActionViewDelegate;
@class UIImage, NSString, UIView, UIImageView, UILabel, NSArray, UITapGestureRecognizer, UILongPressGestureRecognizer, UIFont;

@interface CNActionView : UIView <UIGestureRecognizerDelegate> {

	BOOL _disabled;
	BOOL _highlighted;
	id<CNActionViewDelegate> _actionDelegate;
	UIImage* _image;
	NSString* _title;
	NSString* _type;
	long long _style;
	UIView* _platterView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	NSArray* _activatedContstrants;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UILongPressGestureRecognizer* _highlightGestureRecognizer;
	UIFont* _titleFont;

}

@property (nonatomic,retain) UIView * platterView;                                                   //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * activatedContstrants;                                         //@synthesize activatedContstrants=_activatedContstrants - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * highlightGestureRecognizer;              //@synthesize highlightGestureRecognizer=_highlightGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                                     //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic,__weak) id<CNActionViewDelegate> actionDelegate;                         //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * type;                                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long style;                                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                          //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                                       //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultTitleFont;
+(void)fadeInView:(id)arg1 ;
+(id)contentColorForDisabledVibrantDarkState;
+(id)contentColorForDisabledBoldState;
+(id)borderColorForDisabledBoldState;
+(id)colorByIncreasingBrightnessComponentByPercentage:(double)arg1 ofColor:(id)arg2 ;
+(id)defaultTitleFontOfSize:(double)arg1 ;
-(id)init;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)disabled;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(void)tintColorDidChange;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPlatterView:(UIView *)arg1 ;
-(UIView *)platterView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id<CNActionViewDelegate>)actionDelegate;
-(void)setActionDelegate:(id<CNActionViewDelegate>)arg1 ;
-(void)handleLongPressGesture:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)colorByAdjustingColorToHighlightState:(id)arg1 ;
-(void)setDisabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)intrinsicContentWidth;
-(CGRect)rectForPlatterView;
-(CGRect)rectForTitleLabelForFont:(id)arg1 fittingSize:(CGSize)arg2 ;
-(void)updatePlatterViewStateAnimated:(BOOL)arg1 ;
-(void)updateImageViewStateAnimated:(BOOL)arg1 ;
-(void)updateLabelStateAnimated:(BOOL)arg1 ;
-(void)handleTapGesture:(id)arg1 ;
-(void)handleHighlightGesture:(id)arg1 ;
-(NSArray *)activatedContstrants;
-(void)setActivatedContstrants:(NSArray *)arg1 ;
-(UILongPressGestureRecognizer *)highlightGestureRecognizer;
-(void)setHighlightGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end

