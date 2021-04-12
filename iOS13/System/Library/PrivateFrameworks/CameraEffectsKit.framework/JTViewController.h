/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController, NSMutableDictionary, NSMutableArray, JTView;

@interface JTViewController : UIViewController {

	BOOL _debuggingUIEnabled;
	UIViewController* _viewControllerDrivingStatusAppearance;
	NSMutableDictionary* _suspendedChildViewControllerRequests;
	NSMutableArray* _suspendInteractionTags;

}

@property (nonatomic,retain) JTView * view; 
@property (nonatomic,retain) NSMutableDictionary * suspendedChildViewControllerRequests;              //@synthesize suspendedChildViewControllerRequests=_suspendedChildViewControllerRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * suspendInteractionTags;                                 //@synthesize suspendInteractionTags=_suspendInteractionTags - In the implementation block
@property (assign) BOOL debuggingUIEnabled;                                                           //@synthesize debuggingUIEnabled=_debuggingUIEnabled - In the implementation block
@property (nonatomic,retain) UIViewController * viewControllerDrivingStatusAppearance;                //@synthesize viewControllerDrivingStatusAppearance=_viewControllerDrivingStatusAppearance - In the implementation block
-(JTView *)view;
-(void)setView:(JTView *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(void)logSuspendedChildViewControllersToString:(id)arg1 indentLevel:(int)arg2 ;
-(NSMutableArray *)suspendInteractionTags;
-(BOOL)debuggingUIEnabled;
-(void)setDebuggingUIEnabled:(BOOL)arg1 ;
-(NSMutableDictionary *)suspendedChildViewControllerRequests;
-(void)setChildViewControllerInteractionEnabledWithRequest:(id)arg1 enabled:(BOOL)arg2 ;
-(void)timeoutInteractionSuspended:(id)arg1 ;
-(void)resumeInteractionForChildViewControllersWithTag:(id)arg1 ;
-(void)resumeInteractionWithTag:(id)arg1 ;
-(void)suspendInteractionWithTag:(id)arg1 ;
-(UIViewController *)viewControllerDrivingStatusAppearance;
-(void)logSuspendedViewControllers;
-(void)suspendChildViewControllersInteractionWithTag:(id)arg1 timeout:(double)arg2 excluding:(id)arg3 ;
-(void)setViewControllerDrivingStatusAppearance:(UIViewController *)arg1 ;
-(void)setSuspendedChildViewControllerRequests:(NSMutableDictionary *)arg1 ;
-(void)setSuspendInteractionTags:(NSMutableArray *)arg1 ;
@end

