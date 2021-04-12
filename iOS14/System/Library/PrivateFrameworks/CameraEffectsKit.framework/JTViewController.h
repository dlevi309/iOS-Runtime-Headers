/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)setView:(JTView *)arg1 ;
-(JTView *)view;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
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

