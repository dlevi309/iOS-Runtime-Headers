/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class UIDebuggingInformationContainerView, UINavigationController, UIDebuggingInformationRootTableViewController, UIView;

@interface UIDebuggingInformationOverlayViewController : UIViewController <UISplitViewControllerDelegate> {

	UIDebuggingInformationContainerView* _shadowContainer;
	UINavigationController* _navController;
	BOOL _isFullscreen;
	UIDebuggingInformationRootTableViewController* _rootTableViewController;
	CGPoint _offset;

}

@property (assign) CGPoint offset;                                                                                 //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,retain) UIDebuggingInformationRootTableViewController * rootTableViewController;              //@synthesize rootTableViewController=_rootTableViewController - In the implementation block
@property (assign,nonatomic) BOOL isFullscreen;                                                                    //@synthesize isFullscreen=_isFullscreen - In the implementation block
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(UIView *)containerView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)isFullscreen;
-(void)toggleFullscreen;
-(UIDebuggingInformationRootTableViewController *)rootTableViewController;
-(void)setRootTableViewController:(UIDebuggingInformationRootTableViewController *)arg1 ;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(void)didReceiveGesture:(id)arg1 ;
@end

