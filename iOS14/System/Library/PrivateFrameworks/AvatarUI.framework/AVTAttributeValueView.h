/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/AVTSectionItemTransitionModel.h>
#import <libobjc.A.dylib/AVTDiscardableContent.h>

@class UIImage, CALayer, NSUUID, CAShapeLayer, UIView, UILabel, NSString;

@interface AVTAttributeValueView : UIView <AVTSectionItemTransitionModel, AVTDiscardableContent> {

	BOOL _showPlaceholder;
	BOOL _selected;
	/*^block*/id discardableContentHandler;
	UIImage* _image;
	CALayer* _imageLayer;
	unsigned long long _selectionStyle;
	NSUUID* _displaySessionUUID;
	CAShapeLayer* _clippingLayer;
	CAShapeLayer* _selectionLayer;
	UIView* _contentView;
	CALayer* _transitionImageLayer;
	UILabel* _titleLabel;
	CGSize _imageSizeRatio;

}

@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CAShapeLayer * clippingLayer;                   //@synthesize clippingLayer=_clippingLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectionLayer;                  //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,retain) UIView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) CALayer * imageLayer;                           //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) CALayer * transitionImageLayer;                 //@synthesize transitionImageLayer=_transitionImageLayer - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) CGSize imageSizeRatio;                          //@synthesize imageSizeRatio=_imageSizeRatio - In the implementation block
@property (assign,nonatomic) unsigned long long selectionStyle;              //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;                    //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
@property (nonatomic,retain) NSString * displayedTitle; 
@property (assign,nonatomic) BOOL showPlaceholder;                           //@synthesize showPlaceholder=_showPlaceholder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id discardableContentHandler; 
+(CGRect)imageViewRectForBounds:(CGRect)arg1 imageSizeRatio:(CGSize)arg2 scale:(double)arg3 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)toLayer;
-(id)fromLayer;
-(void)updateWithImage:(id)arg1 ;
-(id)selectionBezierPath;
-(BOOL)isSelected;
-(void)configureImageLayer:(id)arg1 ;
-(CGRect)shapeLayerRect;
-(id)clippingBezierPath;
-(void)updateSelectionAndMaskLayer;
-(void)relayoutSublayers;
-(void)updateCornerRadii;
-(CGSize)imageSizeRatio;
-(CALayer *)transitionImageLayer;
-(CGRect)selectorRect;
-(void)bringSelectionLayersToFront;
-(void)setTransitionImageLayer:(CALayer *)arg1 ;
-(BOOL)showPlaceholder;
-(NSString *)displayedTitle;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(CAShapeLayer *)selectionLayer;
-(void)setSelectionLayer:(CAShapeLayer *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)image;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(CALayer *)imageLayer;
-(void)layoutSubviews;
-(void)setImageLayer:(CALayer *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setSelectionStyle:(unsigned long long)arg1 ;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
-(UIView *)contentView;
-(void)setImageSizeRatio:(CGSize)arg1 ;
-(void)updateSelectedState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDisplayedTitle:(NSString *)arg1 ;
-(void)prepareForTransitionToImage:(id)arg1 ;
-(void)cleanupAfterTransition;
-(void)setShowPlaceholder:(BOOL)arg1 ;
-(void)updateHighlightedState:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)selectionStyle;
@end

