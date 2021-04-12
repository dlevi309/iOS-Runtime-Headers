/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <libobjc.A.dylib/DDActionDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol DDDetectionControllerInteractionDelegate;
@class UIViewController, UIView, DDAction, UIWindow, NSString, UIAlertController;

@interface DDActionController : NSObject <DDActionDelegate, UIPopoverPresentationControllerDelegate> {

	UIViewController* _presentedViewController;
	UIView* _baseView;
	UIViewController* _currentBaseViewController;
	DDAction* _currentAction;
	id<DDDetectionControllerInteractionDelegate> _interactionDelegate;
	UIWindow* _originalWindow;
	NSString* _idsListenerID;
	UIAlertController* _alertController;

}

@property (retain) DDAction * currentAction;                                                                //@synthesize currentAction=_currentAction - In the implementation block
@property (nonatomic,retain) id<DDDetectionControllerInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,retain) UIView * baseView;                                                             //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                           //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(void)_cleanup;
-(void)setInteractionDelegate:(id<DDDetectionControllerInteractionDelegate>)arg1 ;
-(id)init;
-(id<DDDetectionControllerInteractionDelegate>)interactionDelegate;
-(UIAlertController *)alertController;
-(void)cancelAction;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(BOOL)isPerformingAction;
-(DDAction *)currentAction;
-(UIView *)baseView;
-(void)actionDidFinish:(id)arg1 ;
-(void)actionDidFinish:(id)arg1 shouldDismiss:(BOOL)arg2 ;
-(void)setCurrentAction:(DDAction *)arg1 ;
-(void)performAction:(id)arg1 ;
-(void)dealloc;
-(void)setBaseView:(UIView *)arg1 ;
-(id)actionsForURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(BOOL)actionIsCancellable;
-(BOOL)isPresentingInPopover;
-(void)action:(id)arg1 becameCancellable:(BOOL)arg2 ;
-(BOOL)facetimeAvailable;
-(id)actionsForURL:(id)arg1 result:(DDResultRef)arg2 enclosingResult:(DDResultRef)arg3 context:(id)arg4 ;
-(void)_willPresentViewController;
-(void)_presentCurrentViewControllerOurselves;
-(void)tellDelegateActionDidFinishShouldDismiss:(BOOL)arg1 ;
-(void)_didDismissActionViewController;
-(void)tellDelegateActionDidFinish;
-(void)_dismissCurrentViewControllerOurselves;
-(void)viewControllerRequiresModalInPopover:(BOOL)arg1 ;
-(void)_presentController:(id)arg1 ;
-(void)dismissCurrentController;
-(void)cleanupNoDismiss;
-(id)defaultActionForURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(void)action:(id)arg1 viewControllerReady:(id)arg2 ;
-(void)failedToPrepareViewControllerForAction:(id)arg1 ;
@end

