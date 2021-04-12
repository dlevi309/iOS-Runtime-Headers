/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/AVTSectionItemTransitionModel.h>
#import <libobjc.A.dylib/AVTDiscardableContent.h>

@class UIImage, CALayer, NSUUID, CAShapeLayer, UILabel, NSString;

@interface AVTAttributeValueView : UIView <AVTSectionItemTransitionModel, AVTDiscardableContent> {

	BOOL _showPlaceholder;
	/*^block*/id discardableContentHandler;
	UIImage* _image;
	CALayer* _imageLayer;
	unsigned long long _selectionStyle;
	NSUUID* _displaySessionUUID;
	CAShapeLayer* _clippingLayer;
	CAShapeLayer* _selectionLayer;
	CALayer* _transitionImageLayer;
	UILabel* _titleLabel;
	CGSize _imageSizeRatio;

}

@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CAShapeLayer * clippingLayer;                   //@synthesize clippingLayer=_clippingLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectionLayer;                  //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,retain) CALayer * imageLayer;                           //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) CALayer * transitionImageLayer;                 //@synthesize transitionImageLayer=_transitionImageLayer - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(unsigned long long)selectionStyle;
-(void)setSelectionStyle:(unsigned long long)arg1 ;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(CAShapeLayer *)selectionLayer;
-(void)setSelectionLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
-(id)selectionBezierPath;
-(void)updateWithImage:(id)arg1 ;
-(void)setShowPlaceholder:(BOOL)arg1 ;
-(BOOL)showPlaceholder;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(void)setImageSizeRatio:(CGSize)arg1 ;
-(void)updateSelectedState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDisplayedTitle:(NSString *)arg1 ;
-(void)prepareForTransitionToImage:(id)arg1 ;
-(void)cleanupAfterTransition;
-(void)updateHighlightedState:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)configureImageLayer:(id)arg1 ;
-(CGRect)shapeLayerRect;
-(id)clippingBezierPath;
-(void)updateSelectionLayer;
-(void)relayoutSublayers;
-(void)updateCornerRadii;
-(CALayer *)imageLayer;
-(CGSize)imageSizeRatio;
-(CALayer *)transitionImageLayer;
-(CGRect)selectorRect;
-(void)setImageLayer:(CALayer *)arg1 ;
-(void)bringSelectionLayersToFront;
-(void)setTransitionImageLayer:(CALayer *)arg1 ;
-(id)fromLayer;
-(id)toLayer;
-(NSString *)displayedTitle;
@end

