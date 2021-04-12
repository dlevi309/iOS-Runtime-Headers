/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKPopoverBasedViewController.h>

@class UIViewController;

@interface TSKComposedViewController : TSKPopoverBasedViewController {

	UIViewController* mComposedViewController;

}

@property (nonatomic,readonly) UIViewController * composedViewController; 
-(void)dealloc;
-(id)title;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(id)i_contentViewController;
-(void)p_loadChildView;
-(void)p_unloadChildView;
-(UIViewController *)composedViewController;
@end

