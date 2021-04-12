/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UIImageView, CCUICAPackageView, MTVisualStylingProvider, UIImage, UIColor, CCUICAPackageDescription, NSString;

@interface CCUIButtonModuleView : UIControl <UIGestureRecognizerDelegate> {

	UIView* _highlightedBackgroundView;
	UIImageView* _glyphImageView;
	CCUICAPackageView* _glyphPackageView;
	MTVisualStylingProvider* _visualStylingProvider;
	UIImage* _glyphImage;
	UIColor* _glyphColor;
	UIImage* _selectedGlyphImage;
	UIColor* _selectedGlyphColor;
	double _glyphAlpha;
	double _glyphScale;
	CCUICAPackageDescription* _glyphPackageDescription;
	NSString* _glyphState;
	NSDirectionalEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) UIImage * glyphImage;                                            //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                                            //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,retain) UIImage * selectedGlyphImage;                                    //@synthesize selectedGlyphImage=_selectedGlyphImage - In the implementation block
@property (nonatomic,retain) UIColor * selectedGlyphColor;                                    //@synthesize selectedGlyphColor=_selectedGlyphColor - In the implementation block
@property (assign,nonatomic) double glyphAlpha;                                               //@synthesize glyphAlpha=_glyphAlpha - In the implementation block
@property (assign,nonatomic) double glyphScale;                                               //@synthesize glyphScale=_glyphScale - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription;              //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,copy) NSString * glyphState;                                             //@synthesize glyphState=_glyphState - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentEdgeInsets;                       //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)setSelected:(BOOL)arg1 ;
-(void)setContentEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)contentEdgeInsets;
-(void)_handlePressGesture:(id)arg1 ;
-(UIColor *)selectedGlyphColor;
-(void)setSelectedGlyphColor:(UIColor *)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(UIImage *)glyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setSelectedGlyphImage:(UIImage *)arg1 ;
-(UIImage *)selectedGlyphImage;
-(void)_updateForStateChange;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(NSString *)glyphState;
-(void)setGlyphScale:(double)arg1 ;
-(double)glyphScale;
-(void)_setGlyphImage:(id)arg1 ;
-(void)_setGlyphPackageDescription:(id)arg1 ;
-(void)_setGlyphState:(id)arg1 ;
-(void)_setGlyphAlpha:(double)arg1 ;
-(void)_setGlyphScale:(double)arg1 ;
-(void)_updateGlyphImageViewVisualStyling;
-(double)glyphAlpha;
-(id)_tintColorForSelectedState:(BOOL)arg1 ;
-(void)setGlyphAlpha:(double)arg1 ;
@end

