/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)contentAlpha;
-(int)_preferredStatusBarVisibility;
-(void)setContentAlpha:(double)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(long long)preferredStatusBarStyle;
-(void)viewDidLayoutSubviews;
-(UIColor *)cropsCornerColor;
-(double)cropsCornerLineWidth;
-(double)cropsCornerEdgeLength;
-(CGRect)screenshotContentFrame;
-(double)cropsCornerContentPadding;
-(long long)backgroundBlurEffectStyle;
@end

