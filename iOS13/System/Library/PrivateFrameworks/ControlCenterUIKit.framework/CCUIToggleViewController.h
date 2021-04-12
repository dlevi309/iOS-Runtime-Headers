/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UIImageView, UIImage, UIColor, CCUICAPackageDescription, NSString, CCUIToggleModule, UIViewPropertyAnimator;

@interface CCUIToggleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController> {

	UIImageView* _glyphImageView;
	UIImage* _glyphImage;
	UIImage* _selectedGlyphImage;
	UIColor* _selectedColor;
	CCUICAPackageDescription* _glyphPackageDescription;
	NSString* _glyphState;
	CCUIToggleModule* _module;

}

@property (assign,nonatomic,__weak) CCUIToggleModule * module;                              //@synthesize module=_module - In the implementation block
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)refreshState;
-(CCUIToggleModule *)module;
-(void)setModule:(CCUIToggleModule *)arg1 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(double)preferredExpandedContentHeight;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
-(void)reconfigureView;
@end

