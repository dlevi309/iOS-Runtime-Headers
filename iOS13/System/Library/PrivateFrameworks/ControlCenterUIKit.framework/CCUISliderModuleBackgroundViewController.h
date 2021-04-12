/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleBackgroundViewController.h>

@class UIImageView, CCUICAPackageView, MTVisualStylingProvider, NSString;

@interface CCUISliderModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController> {

	UIImageView* _headerImageView;
	CCUICAPackageView* _packageView;
	MTVisualStylingProvider* _visualStylingProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)setGlyphImage:(id)arg1 ;
-(void)setGlyphPackageDescription:(id)arg1 ;
-(void)setGlyphState:(id)arg1 ;
-(CGPoint)_headerCenterForBounds:(CGRect)arg1 ;
-(void)_updateHeaderGlyphVisualStyling;
-(CGRect)effectiveContentFrameForContainerFrame:(CGRect)arg1 ;
@end

