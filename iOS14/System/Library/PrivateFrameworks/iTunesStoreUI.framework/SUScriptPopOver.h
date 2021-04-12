/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class UIViewController, UIPopoverController, SUScriptViewController;

@interface SUScriptPopOver : SUScriptObject {

	UIViewController* _contentViewController;
	BOOL _ignoreDismiss;

}

@property (readonly) UIViewController * activeViewController; 
@property (nonatomic,retain) UIPopoverController * nativePopoverController; 
@property (nonatomic,readonly) UIPopoverController * presentablePopoverController; 
@property (assign) long long backgroundStyle; 
@property (assign) double contentHeight; 
@property (assign) double contentWidth; 
@property (readonly) SUScriptViewController * presentingViewController; 
@property (retain) SUScriptViewController * viewController; 
@property (readonly) long long backgroundStyleBlack; 
@property (readonly) long long backgroundStyleClear; 
@property (readonly) long long backgroundStyleCream; 
@property (readonly) long long backgroundStyleDefault; 
@property (readonly) long long backgroundStyleShare; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setViewController:(SUScriptViewController *)arg1 ;
-(id)init;
-(BOOL)_isViewControllerVisible;
-(long long)backgroundStyle;
-(double)contentWidth;
-(id)attributeKeys;
-(void)setContentWidth:(double)arg1 ;
-(SUScriptViewController *)presentingViewController;
-(void)setContentHeight:(double)arg1 ;
-(SUScriptViewController *)viewController;
-(void)setBackgroundStyle:(long long)arg1 ;
-(BOOL)isVisible;
-(id)_className;
-(void)dismissAnimated:(id)arg1 ;
-(UIViewController *)activeViewController;
-(void)dealloc;
-(double)contentHeight;
-(id)scriptAttributeKeys;
-(void)tearDownUserInterface;
-(void)_overlayWillShowNotification:(id)arg1 ;
-(void)_viewControllerDidDismiss:(id)arg1 ;
-(id)_presentablePopoverController;
-(void)_dismissAnimated:(BOOL)arg1 ;
-(BOOL)_shouldDisplayAsPopover;
-(id)_popOverController;
-(void)_showAsModalViewController;
-(id)_nativeViewController;
-(void)_setNativeViewController:(id)arg1 ;
-(UIPopoverController *)nativePopoverController;
-(void)setNativePopoverController:(UIPopoverController *)arg1 ;
-(void)setContentWidth:(double)arg1 height:(double)arg2 animated:(BOOL)arg3 ;
-(BOOL)showFromElement:(id)arg1 ;
-(BOOL)showFromNavigationItem:(id)arg1 ;
-(UIPopoverController *)presentablePopoverController;
-(long long)backgroundStyleBlack;
-(long long)backgroundStyleClear;
-(long long)backgroundStyleCream;
-(long long)backgroundStyleDefault;
-(long long)backgroundStyleShare;
-(void)_setIgnoresDismiss:(BOOL)arg1 ;
@end

