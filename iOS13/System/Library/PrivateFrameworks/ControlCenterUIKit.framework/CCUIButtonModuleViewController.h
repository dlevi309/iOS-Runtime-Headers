/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UIViewPropertyAnimator, CCUIButtonModuleView, UIImage, UIColor, CCUICAPackageDescription, NSString;

@interface CCUIButtonModuleViewController : UIViewController <CCUIContentModuleContentViewController> {

	CCUIButtonModuleView* _buttonModuleView;
	BOOL _expanded;

}

@property (nonatomic,retain) UIImage * glyphImage; 
@property (nonatomic,retain) UIColor * glyphColor; 
@property (nonatomic,retain) UIImage * selectedGlyphImage; 
@property (nonatomic,retain) UIColor * selectedGlyphColor; 
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription; 
@property (nonatomic,copy) NSString * glyphState; 
@property (assign,nonatomic) double glyphScale; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                 //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) CCUIButtonModuleView * buttonView; 
@property (nonatomic,readonly) BOOL hasGlyph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
-(BOOL)isSelected;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(UIColor *)selectedGlyphColor;
-(void)setSelectedGlyphColor:(UIColor *)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(UIImage *)glyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setSelectedGlyphImage:(UIImage *)arg1 ;
-(UIImage *)selectedGlyphImage;
-(CCUIButtonModuleView *)buttonView;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(NSString *)glyphState;
-(void)setGlyphScale:(double)arg1 ;
-(double)glyphScale;
-(void)buttonTouchDown:(id)arg1 forEvent:(id)arg2 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)_buttonTouchDown:(id)arg1 forEvent:(id)arg2 ;
-(void)_buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(double)preferredExpandedContentHeight;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(BOOL)hasGlyph;
@end

