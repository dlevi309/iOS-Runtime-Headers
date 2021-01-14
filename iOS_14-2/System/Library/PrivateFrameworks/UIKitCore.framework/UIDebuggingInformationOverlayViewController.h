/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isFullscreen;
-(CGPoint)offset;
-(UIView *)containerView;
-(void)setOffset:(CGPoint)arg1 ;
-(void)toggleFullscreen;
-(UIDebuggingInformationRootTableViewController *)rootTableViewController;
-(void)setRootTableViewController:(UIDebuggingInformationRootTableViewController *)arg1 ;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(void)didReceiveGesture:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

