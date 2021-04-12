/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@class MTMaterialView, UILabel, BSUIFontProvider, NSString;

@interface WGShortLookStyleButton : UIControl <MTMaterialGrouping> {

	MTMaterialView* _backgroundView;
	UILabel* _titleLabel;
	BSUIFontProvider* _fontProvider;
	CGSize _size;
	BOOL _backgroundBlurred;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred;              //@synthesize backgroundBlurred=_backgroundBlurred - In the implementation block
@property (nonatomic,copy) NSString * materialGroupNameBase; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)_size;
-(void)_updateTitleLabelFont;
-(id)_fontProvider;
-(void)setBackgroundBlurred:(BOOL)arg1 ;
-(void)invalidateCachedGeometry;
-(CGSize)intrinsicContentSize;
-(void)_updateHighlight;
-(void)_configureMaskIfNecessary;
-(BOOL)isBackgroundBlurred;
-(void)_layoutTitleLabel;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_configureTitleLabelIfNecessary;
-(NSString *)materialGroupNameBase;
-(void)_updateTouchInsetsIfNecessary;
-(void)_configureBackgroundViewIfNecessary;
-(void)layoutSubviews;
-(id)fontForTitle:(id)arg1 ;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setBackgroundViewCornerRadius:(double)arg1 ;
-(double)_backgroundViewCornerRadius;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
@end

