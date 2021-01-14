/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/_UIAppearanceRestriction.h>

@class NSString;

@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(BOOL)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;
-(CGSize)preferredContentSize;
-(double)_statusBarHeightAdjustmentForCurrentOrientation;
-(BOOL)_viewControllerUnderlapsStatusBar;
@end

