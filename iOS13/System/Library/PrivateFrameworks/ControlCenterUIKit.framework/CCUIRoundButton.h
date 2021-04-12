/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class MTVisualStylingProvider, UILongPressGestureRecognizer, CCUICAPackageDescription, UIImage, NSString, UIColor, UIView, UIImageView, CCUICAPackageView;

@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate, _UICursorInteractionDelegate> {

	MTVisualStylingProvider* _visualStylingProvider;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _useAlternateBackground;
	CCUICAPackageDescription* _glyphPackageDescription;
	UIImage* _glyphImage;
	NSString* _glyphState;
	UIColor* _highlightColor;
	UIView* _normalStateBackgroundView;
	UIView* _selectedStateBackgroundView;
	UIView* _alternateSelectedStateBackgroundView;
	UIImageView* _glyphImageView;
	UIImageView* _selectedGlyphView;
	CCUICAPackageView* _glyphPackageView;

}

@property (nonatomic,retain) UIColor * highlightColor;                                        //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIView * normalStateBackgroundView;                              //@synthesize normalStateBackgroundView=_normalStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * selectedStateBackgroundView;                            //@synthesize selectedStateBackgroundView=_selectedStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * alternateSelectedStateBackgroundView;                   //@synthesize alternateSelectedStateBackgroundView=_alternateSelectedStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * glyphImageView;                                    //@synthesize glyphImageView=_glyphImageView - In the implementation block
@property (nonatomic,retain) UIImageView * selectedGlyphView;                                 //@synthesize selectedGlyphView=_selectedGlyphView - In the implementation block
@property (nonatomic,retain) CCUICAPackageView * glyphPackageView;                            //@synthesize glyphPackageView=_glyphPackageView - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription;              //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,retain) UIImage * glyphImage;                                            //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,copy) NSString * glyphState;                                             //@synthesize glyphState=_glyphState - In the implementation block
@property (assign,nonatomic) BOOL useAlternateBackground;                                     //@synthesize useAlternateBackground=_useAlternateBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)intrinsicContentSize;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)_cornerRadius;
-(void)didMoveToWindow;
-(void)_setCornerRadius:(double)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIImage *)glyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(UIImageView *)glyphImageView;
-(void)_updateForStateChange;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(void)setUseAlternateBackground:(BOOL)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 ;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(NSString *)glyphState;
-(BOOL)useAlternateBackground;
-(void)_primaryActionPerformed:(id)arg1 ;
-(void)_deactivateReachability:(id)arg1 ;
-(id)initWithHighlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(void)_updateVisualStylingOfGlyphView:(id)arg1 ;
-(UIView *)normalStateBackgroundView;
-(void)setNormalStateBackgroundView:(UIView *)arg1 ;
-(UIView *)selectedStateBackgroundView;
-(void)setSelectedStateBackgroundView:(UIView *)arg1 ;
-(UIView *)alternateSelectedStateBackgroundView;
-(void)setAlternateSelectedStateBackgroundView:(UIView *)arg1 ;
-(UIImageView *)selectedGlyphView;
-(void)setSelectedGlyphView:(UIImageView *)arg1 ;
-(CCUICAPackageView *)glyphPackageView;
-(void)setGlyphPackageView:(CCUICAPackageView *)arg1 ;
@end

