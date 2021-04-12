/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <libobjc.A.dylib/_UIClickPresentationInteractionDelegate.h>

@protocol CCUIContentModuleDetailClickPresentationInteractionManagerDelegate;
@class _UIClickPresentationInteraction, CCUIContentModuleDetailTransitioningDelegate, UIPresentationController, UIViewController, UIView, NSString;

@interface CCUIContentModuleDetailClickPresentationInteractionManager : NSObject <_UIClickPresentationInteractionDelegate> {

	_UIClickPresentationInteraction* _clickPresentationInteraction;
	CCUIContentModuleDetailTransitioningDelegate* _detailTransitioningDelegate;
	UIPresentationController* _presentationController;
	BOOL _authenticated;
	struct {
		unsigned delegateProvidesPresentedViewController : 1;
		unsigned delegateImplementsInteractionShouldBegin : 1;
		unsigned delegateRequiresAuthentication : 1;
		unsigned delegateImplementsInteractionEnded : 1;
	}  _delegateFlags;
	UIViewController* _presentingViewController;
	id<CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> _delegate;
	UIView* _viewForInteraction;

}

@property (nonatomic,readonly) UIViewController * presentingViewController;                                                         //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,__weak,readonly) id<CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * viewForInteraction;                                                                           //@synthesize viewForInteraction=_viewForInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1 ;
-(id<CCUIContentModuleDetailClickPresentationInteractionManagerDelegate>)delegate;
-(id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)setDelegate:(id<CCUIContentModuleDetailClickPresentationInteractionManagerDelegate>)arg1 ;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg1 ;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2 ;
-(void)setViewForInteraction:(UIView *)arg1 ;
-(UIView *)viewForInteraction;
@end

