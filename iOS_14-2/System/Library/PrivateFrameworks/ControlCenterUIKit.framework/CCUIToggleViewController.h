/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)refreshState;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setModule:(CCUIToggleModule *)arg1 ;
-(double)preferredExpandedContentHeight;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(CCUIToggleModule *)module;
-(void)reconfigureView;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
@end

