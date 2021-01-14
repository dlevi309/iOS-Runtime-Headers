/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
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
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExpanded:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)isExpanded;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)setGlyphScale:(double)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(NSString *)glyphState;
-(void)setGlyphState:(NSString *)arg1 ;
-(BOOL)isSelected;
-(UIColor *)glyphColor;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)buttonTouchDown:(id)arg1 forEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)glyphImage;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(double)preferredExpandedContentHeight;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(UIColor *)selectedGlyphColor;
-(void)viewDidLoad;
-(double)glyphScale;
-(UIImage *)selectedGlyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setSelectedGlyphColor:(UIColor *)arg1 ;
-(CCUIButtonModuleView *)buttonView;
-(void)setSelectedGlyphImage:(UIImage *)arg1 ;
-(void)_buttonTouchDown:(id)arg1 forEvent:(id)arg2 ;
-(void)_buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)hasGlyph;
@end

