/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol REUpNextCellDelegate;
@class UIImageView, CALayer, UIView, UILongPressGestureRecognizer, REContent, UIImage, NSString, UIColor;

@interface REUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	CGSize _shadowSize;
	UIImageView* _shadowView;
	CALayer* _imageLayer;
	UIView* _overlayView;
	UILongPressGestureRecognizer* _longPressRecognizer;
	double _darkeningAmount;
	double _contentBrightness;
	REContent* _content;
	unsigned long long _behavior;
	UIEdgeInsets _overlayInsets;
	BOOL _shouldOverrideContentHeaderColor;
	UIImage* _contentImage;
	id<REUpNextCellDelegate> _delegate;
	UIImage* _overrideContentImage;
	NSString* _representedElementIdentifier;
	UIColor* _defaultTextColor;

}

@property (nonatomic,readonly) UIImage * contentImage;                              //@synthesize contentImage=_contentImage - In the implementation block
@property (assign,nonatomic,__weak) id<REUpNextCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * overrideContentImage;                        //@synthesize overrideContentImage=_overrideContentImage - In the implementation block
@property (nonatomic,readonly) REContent * content;                                 //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSString * representedElementIdentifier;               //@synthesize representedElementIdentifier=_representedElementIdentifier - In the implementation block
@property (nonatomic,readonly) UIColor * defaultTextColor;                          //@synthesize defaultTextColor=_defaultTextColor - In the implementation block
@property (nonatomic,readonly) BOOL shouldOverrideContentHeaderColor;               //@synthesize shouldOverrideContentHeaderColor=_shouldOverrideContentHeaderColor - In the implementation block
@property (nonatomic,readonly) CALayer * imageLayer;                                //@synthesize imageLayer=_imageLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_shadowImage;
-(UIImage *)contentImage;
-(REContent *)content;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<REUpNextCellDelegate>)delegate;
-(id)transitionContext;
-(void)didLongPress:(id)arg1 ;
-(void)prepareForReuse;
-(void)setDelegate:(id<REUpNextCellDelegate>)arg1 ;
-(CALayer *)imageLayer;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIColor *)defaultTextColor;
-(void)setHighlightInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setContentImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)configureWithContent:(id)arg1 ;
-(void)setRepresentedElementIdentifier:(NSString *)arg1 ;
-(void)setContentBrightness:(double)arg1 animated:(BOOL)arg2 ;
-(void)setOverrideContentImage:(UIImage *)arg1 ;
-(void)_updateColorOverlay;
-(UIImage *)overrideContentImage;
-(NSString *)representedElementIdentifier;
-(BOOL)shouldOverrideContentHeaderColor;
-(void)defaultTextColorDidChange;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
-(void)setHighlightBehavior:(unsigned long long)arg1 ;
-(void)setShadowViewHidden:(BOOL)arg1 ;
-(void)setForegroundTextColorToColor:(id)arg1 shouldOverrideContentHeaderColor:(BOOL)arg2 ;
@end

