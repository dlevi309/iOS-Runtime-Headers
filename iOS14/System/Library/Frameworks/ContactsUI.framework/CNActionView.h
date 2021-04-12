/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol CNActionViewDelegate;
@class UIImage, NSString, NUIContainerStackView, NUIContainerBoxView, UIView, UIImageView, UILabel, CNActionMenuHelper, TLKProminenceView, UIFont;

@interface CNActionView : UIControl <UIGestureRecognizerDelegate, NUIContainerViewDelegate> {

	BOOL _disabled;
	id<CNActionViewDelegate> _actionDelegate;
	UIImage* _image;
	NSString* _title;
	NSString* _type;
	long long _style;
	NUIContainerStackView* _containerView;
	NUIContainerBoxView* _platterBoxView;
	UIView* _platterView;
	UIImageView* _imageView;
	UIView* _imageContainerView;
	UILabel* _titleLabel;
	CNActionMenuHelper* _actionMenuHelper;
	TLKProminenceView* _vibrantPlatterView;
	TLKProminenceView* _vibrantBackgroundView;
	UIFont* _titleFont;

}

@property (nonatomic,retain) NUIContainerStackView * containerView;                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NUIContainerBoxView * platterBoxView;                        //@synthesize platterBoxView=_platterBoxView - In the implementation block
@property (nonatomic,retain) UIView * platterView;                                        //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * imageContainerView;                                 //@synthesize imageContainerView=_imageContainerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CNActionMenuHelper * actionMenuHelper;                       //@synthesize actionMenuHelper=_actionMenuHelper - In the implementation block
@property (nonatomic,retain) TLKProminenceView * vibrantPlatterView;                      //@synthesize vibrantPlatterView=_vibrantPlatterView - In the implementation block
@property (nonatomic,retain) TLKProminenceView * vibrantBackgroundView;                   //@synthesize vibrantBackgroundView=_vibrantBackgroundView - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                          //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic,__weak) id<CNActionViewDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long style;                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                               //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)fadeInView:(id)arg1 ;
+(id)contentColorForDisabledVibrantDarkState;
+(id)contentColorForDisabledBoldState;
+(id)borderColorForDisabledBoldState;
+(id)colorByIncreasingBrightnessComponentByPercentage:(double)arg1 ofColor:(id)arg2 ;
+(id)defaultTitleFontOfSize:(double)arg1 ;
+(id)defaultTitleFont;
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContainerView:(NUIContainerStackView *)arg1 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(UIView *)platterView;
-(void)setImage:(UIImage *)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlatterView:(UIView *)arg1 ;
-(id)init;
-(UIImageView *)imageView;
-(id<CNActionViewDelegate>)actionDelegate;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIFont *)titleFont;
-(void)setType:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setDisabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)colorByAdjustingColorToHighlightState:(id)arg1 ;
-(BOOL)shouldShowDisambiguation;
-(void)handleTapGesture;
-(void)applyRoundedRectMargins;
-(CGSize)platterViewMinimumLayoutSizeForStyle:(long long)arg1 ;
-(void)updateWithMenuItems:(id)arg1 ;
-(void)updatePlatterViewStateAnimated:(BOOL)arg1 ;
-(void)updateImageViewStateAnimated:(BOOL)arg1 ;
-(NUIContainerBoxView *)platterBoxView;
-(void)updateLabelStateAnimated:(BOOL)arg1 ;
-(id)sourceViewForContextMenuPreview;
-(void)setPlatterBoxView:(NUIContainerBoxView *)arg1 ;
-(UIView *)imageContainerView;
-(void)setImageContainerView:(UIView *)arg1 ;
-(CNActionMenuHelper *)actionMenuHelper;
-(void)setActionMenuHelper:(CNActionMenuHelper *)arg1 ;
-(TLKProminenceView *)vibrantPlatterView;
-(void)setVibrantPlatterView:(TLKProminenceView *)arg1 ;
-(TLKProminenceView *)vibrantBackgroundView;
-(void)setVibrantBackgroundView:(TLKProminenceView *)arg1 ;
-(void)layoutSubviews;
-(NUIContainerStackView *)containerView;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setActionDelegate:(id<CNActionViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)type;
-(void)updateBackground;
-(void)setStyle:(long long)arg1 ;
-(BOOL)disabled;
-(long long)style;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
@end

