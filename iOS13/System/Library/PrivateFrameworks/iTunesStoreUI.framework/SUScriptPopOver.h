/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)_className;
-(void)setViewController:(SUScriptViewController *)arg1 ;
-(BOOL)isVisible;
-(double)contentWidth;
-(SUScriptViewController *)presentingViewController;
-(void)dismissAnimated:(id)arg1 ;
-(SUScriptViewController *)viewController;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(id)attributeKeys;
-(double)contentHeight;
-(void)setContentHeight:(double)arg1 ;
-(id)scriptAttributeKeys;
-(void)tearDownUserInterface;
-(void)_overlayWillShowNotification:(id)arg1 ;
-(void)_viewControllerDidDismiss:(id)arg1 ;
-(id)_presentablePopoverController;
-(void)_dismissAnimated:(BOOL)arg1 ;
-(BOOL)_shouldDisplayAsPopover;
-(id)_popOverController;
-(BOOL)_isViewControllerVisible;
-(void)_showAsModalViewController;
-(id)_nativeViewController;
-(void)_setNativeViewController:(id)arg1 ;
-(UIViewController *)activeViewController;
-(UIPopoverController *)nativePopoverController;
-(void)setNativePopoverController:(UIPopoverController *)arg1 ;
-(void)setContentWidth:(double)arg1 height:(double)arg2 animated:(BOOL)arg3 ;
-(BOOL)showFromElement:(id)arg1 ;
-(BOOL)showFromNavigationItem:(id)arg1 ;
-(UIPopoverController *)presentablePopoverController;
-(void)setContentWidth:(double)arg1 ;
-(long long)backgroundStyleBlack;
-(long long)backgroundStyleClear;
-(long long)backgroundStyleCream;
-(long long)backgroundStyleDefault;
-(long long)backgroundStyleShare;
-(void)_setIgnoresDismiss:(BOOL)arg1 ;
@end

