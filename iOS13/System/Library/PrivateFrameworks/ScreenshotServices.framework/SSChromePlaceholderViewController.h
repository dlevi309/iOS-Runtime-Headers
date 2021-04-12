/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIViewController.h>

@class SSChromePlaceholderView, UIColor;

@interface SSChromePlaceholderViewController : UIViewController {

	SSChromePlaceholderView* _placeholderView;

}

@property (assign,nonatomic) double contentAlpha; 
@property (nonatomic,readonly) CGRect screenshotContentFrame; 
@property (nonatomic,readonly) long long backgroundBlurEffectStyle; 
@property (nonatomic,readonly) double cropsCornerContentPadding; 
@property (nonatomic,readonly) double cropsCornerEdgeLength; 
@property (nonatomic,readonly) double cropsCornerLineWidth; 
@property (nonatomic,readonly) UIColor * cropsCornerColor; 
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)setContentAlpha:(double)arg1 ;
-(int)_preferredStatusBarVisibility;
-(long long)preferredStatusBarStyle;
-(double)contentAlpha;
-(long long)backgroundBlurEffectStyle;
-(UIColor *)cropsCornerColor;
-(double)cropsCornerContentPadding;
-(double)cropsCornerEdgeLength;
-(double)cropsCornerLineWidth;
-(CGRect)screenshotContentFrame;
@end

