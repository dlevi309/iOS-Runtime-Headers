/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <libobjc.A.dylib/VUILabelBaselineProtocol.h>

@class VUIButtonLayout, _TVImageView, NSString, VUILabel, IKViewElement, UIColor, UIView, UILargeContentViewerInteraction;

@interface VUIButton : UIControl <UIPointerInteractionDelegate, VUILabelBaselineProtocol> {

	BOOL _hasDisclaimerText;
	BOOL _imageTrailsTextContent;
	BOOL _isTintColorAndBackgroundColorSaturated;
	VUIButtonLayout* _layout;
	_TVImageView* _backgroundImageView;
	NSString* _groupName;
	VUILabel* _textContentView;
	_TVImageView* _imageView;
	IKViewElement* _viewElement;
	/*^block*/id _selectActionHandler;
	UIColor* _adjustmentModeNormalTintColor;
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
@property (assign,nonatomic) BOOL isTintColorAndBackgroundColorSaturated;                                  //@synthesize isTintColorAndBackgroundColorSaturated=_isTintColorAndBackgroundColorSaturated - In the implementation block
@property (nonatomic,retain) _TVImageView * imagesViewDefaultState;                                        //@synthesize imagesViewDefaultState=_imagesViewDefaultState - In the implementation block
@property (nonatomic,retain) _TVImageView * imagesViewHighlightedState;                                    //@synthesize imagesViewHighlightedState=_imagesViewHighlightedState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImagesViewDefaultState;                              //@synthesize backgroundImagesViewDefaultState=_backgroundImagesViewDefaultState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImagesViewHighlightedState;                          //@synthesize backgroundImagesViewHighlightedState=_backgroundImagesViewHighlightedState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImageView;                                           //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                           //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) BOOL hasDisclaimerText;                                                       //@synthesize hasDisclaimerText=_hasDisclaimerText - In the implementation block
@property (assign,nonatomic) BOOL imageTrailsTextContent;                                                  //@synthesize imageTrailsTextContent=_imageTrailsTextContent - In the implementation block
@property (nonatomic,copy) VUILabel * textContentView;                                                     //@synthesize textContentView=_textContentView - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                                  //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,copy) id selectActionHandler;                                                         //@synthesize selectActionHandler=_selectActionHandler - In the implementation block
@property (nonatomic,retain) UIColor * adjustmentModeNormalTintColor;                                      //@synthesize adjustmentModeNormalTintColor=_adjustmentModeNormalTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)backdropView;
-(_TVImageView *)backgroundImageView;
-(void)_updateBackgroundColor;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setBackdropView:(UIView *)arg1 ;
-(void)_updateLayout;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)setTintColor:(id)arg1 ;
-(_TVImageView *)imageView;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(double)baselineOffsetFromBottom;
-(BOOL)scalesLargeContentImage;
-(BOOL)_hasTitle;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)_buttonTapped:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_hasImage;
-(void)prepareForReuse;
-(BOOL)_hasBackgroundImage;
-(void)setBackgroundImageView:(_TVImageView *)arg1 ;
-(void)layoutSubviews;
-(id)largeContentImage;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)largeContentTitle;
-(void)setCornerRadius:(double)arg1 ;
-(void)setLayout:(VUIButtonLayout *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(VUIButtonLayout *)layout;
-(void)setHighlighted:(BOOL)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(VUILabel *)textContentView;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(void)updateWithElement:(id)arg1 ;
-(id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
-(void)setImageView:(id)arg1 state:(unsigned long long)arg2 ;
-(void)setImageTrailsTextContent:(BOOL)arg1 ;
-(void)setAdjustmentModeNormalTintColor:(UIColor *)arg1 ;
-(void)revertTintColor;
-(UIColor *)adjustmentModeNormalTintColor;
-(void)setSelectActionHandler:(id)arg1 ;
-(void)setTextContentView:(VUILabel *)arg1 ;
-(void)_configureWithLayout:(id)arg1 ;
-(void)saturateTintColorAndBackgroundColor;
-(void)setBackgroundImage:(id)arg1 state:(unsigned long long)arg2 ;
-(UILargeContentViewerInteraction *)largeContentViewerInteraction;
-(void)setImagesViewHighlightedState:(_TVImageView *)arg1 ;
-(void)setBackgroundImagesViewHighlightedState:(_TVImageView *)arg1 ;
-(CGSize)_imageSizeThatFits:(CGSize)arg1 ;
-(id)selectActionHandler;
-(BOOL)imageTrailsTextContent;
-(CGPoint)_centerWithViewSize:(CGSize)arg1 withParentSize:(CGSize)arg2 ;
-(CGRect)_pointerShapeRect;
-(BOOL)hasDisclaimerText;
-(void)setHasDisclaimerText:(BOOL)arg1 ;
-(void)setLargeContentViewerInteraction:(UILargeContentViewerInteraction *)arg1 ;
-(BOOL)isTintColorAndBackgroundColorSaturated;
-(void)setIsTintColorAndBackgroundColorSaturated:(BOOL)arg1 ;
-(_TVImageView *)imagesViewDefaultState;
-(void)setImagesViewDefaultState:(_TVImageView *)arg1 ;
-(_TVImageView *)imagesViewHighlightedState;
-(_TVImageView *)backgroundImagesViewDefaultState;
-(void)setBackgroundImagesViewDefaultState:(_TVImageView *)arg1 ;
-(_TVImageView *)backgroundImagesViewHighlightedState;
@end

