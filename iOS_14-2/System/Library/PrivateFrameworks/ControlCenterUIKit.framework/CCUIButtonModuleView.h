/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)glyphAlpha;
-(void)_setGlyphAlpha:(double)arg1 ;
-(void)_setGlyphPackageDescription:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateGlyphImageViewVisualStyling;
-(void)setGlyphScale:(double)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(NSString *)glyphState;
-(id)_tintColorForSelectedState:(BOOL)arg1 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(void)_setGlyphState:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_handlePressGesture:(id)arg1 ;
-(UIColor *)glyphColor;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setContentEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)glyphImage;
-(void)_setGlyphScale:(double)arg1 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(void)layoutSubviews;
-(UIColor *)selectedGlyphColor;
-(void)didMoveToWindow;
-(double)glyphScale;
-(UIImage *)selectedGlyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(NSDirectionalEdgeInsets)contentEdgeInsets;
-(void)setSelectedGlyphColor:(UIColor *)arg1 ;
-(void)_updateForStateChange;
-(void)setGlyphAlpha:(double)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setSelectedGlyphImage:(UIImage *)arg1 ;
-(void)_setGlyphImage:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

