/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/VUILabelTopMarginCalculationProtocol.h>

@class VUIButtonLayout, _TVImageView, VUILabel, IKViewElement, UIView, UILargeContentViewerInteraction;

@interface VUIButton : UIControl <VUILabelTopMarginCalculationProtocol> {

	BOOL _imageTrailsTextContent;
	VUIButtonLayout* _layout;
	_TVImageView* _backgroundImageView;
	VUILabel* _textContentView;
	_TVImageView* _imageView;
	IKViewElement* _viewElement;
	/*^block*/id _selectActionHandler;
	UIView* _backdropView;
	UILargeContentViewerInteraction* _largeContentViewerInteraction;
	_TVImageView* _imagesViewDefaultState;
	_TVImageView* _imagesViewHighlightedState;
	_TVImageView* _backgroundImagesViewDefaultState;
	_TVImageView* _backgroundImagesViewHighlightedState;

}

@property (nonatomic,retain) VUIButtonLayout * layout;                                                     //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIView * backdropView;                                                        //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UILargeContentViewerInteraction * largeContentViewerInteraction;              //@synthesize largeContentViewerInteraction=_largeContentViewerInteraction - In the implementation block
@property (nonatomic,retain) _TVImageView * imagesViewDefaultState;                                        //@synthesize imagesViewDefaultState=_imagesViewDefaultState - In the implementation block
@property (nonatomic,retain) _TVImageView * imagesViewHighlightedState;                                    //@synthesize imagesViewHighlightedState=_imagesViewHighlightedState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImagesViewDefaultState;                              //@synthesize backgroundImagesViewDefaultState=_backgroundImagesViewDefaultState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImagesViewHighlightedState;                          //@synthesize backgroundImagesViewHighlightedState=_backgroundImagesViewHighlightedState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImageView;                                           //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (assign,nonatomic) BOOL imageTrailsTextContent;                                                  //@synthesize imageTrailsTextContent=_imageTrailsTextContent - In the implementation block
@property (nonatomic,copy) VUILabel * textContentView;                                                     //@synthesize textContentView=_textContentView - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                                  //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,copy) id selectActionHandler;                                                         //@synthesize selectActionHandler=_selectActionHandler - In the implementation block
-(void)prepareForReuse;
-(VUIButtonLayout *)layout;
-(void)setLayout:(VUIButtonLayout *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)largeContentTitle;
-(id)largeContentImage;
-(BOOL)scalesLargeContentImage;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)_hasTitle;
-(void)_updateBackgroundColor;
-(UIView *)backdropView;
-(void)setBackdropView:(UIView *)arg1 ;
-(_TVImageView *)backgroundImageView;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)_updateLayout;
-(BOOL)_hasImage;
-(void)_buttonTapped:(id)arg1 ;
-(void)setBackgroundImageView:(_TVImageView *)arg1 ;
-(BOOL)_hasBackgroundImage;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUILabel *)textContentView;
-(void)setTextContentView:(VUILabel *)arg1 ;
-(void)setImageTrailsTextContent:(BOOL)arg1 ;
-(id)selectActionHandler;
-(void)setSelectActionHandler:(id)arg1 ;
-(BOOL)imageTrailsTextContent;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(void)updateWithElement:(id)arg1 ;
-(id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
-(void)setImageView:(id)arg1 state:(unsigned long long)arg2 ;
-(void)_configureWithLayout:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 state:(unsigned long long)arg2 ;
-(UILargeContentViewerInteraction *)largeContentViewerInteraction;
-(void)setImagesViewHighlightedState:(_TVImageView *)arg1 ;
-(void)setBackgroundImagesViewHighlightedState:(_TVImageView *)arg1 ;
-(CGSize)_imageSizeThatFits:(CGSize)arg1 ;
-(CGPoint)_centerWithViewSize:(CGSize)arg1 withParentSize:(CGSize)arg2 ;
-(void)setLargeContentViewerInteraction:(UILargeContentViewerInteraction *)arg1 ;
-(_TVImageView *)imagesViewDefaultState;
-(void)setImagesViewDefaultState:(_TVImageView *)arg1 ;
-(_TVImageView *)imagesViewHighlightedState;
-(_TVImageView *)backgroundImagesViewDefaultState;
-(void)setBackgroundImagesViewDefaultState:(_TVImageView *)arg1 ;
-(_TVImageView *)backgroundImagesViewHighlightedState;
@end

