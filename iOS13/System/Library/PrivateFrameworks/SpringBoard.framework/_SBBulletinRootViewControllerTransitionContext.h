/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIView, UIViewController;

@interface _SBBulletinRootViewControllerTransitionContext : NSObject {

	BOOL _animated;
	BOOL _presenting;
	UIView* _containerView;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;
	/*^block*/id _presentationCompletion;
	/*^block*/id _dismissalCompletion;

}

@property (nonatomic,retain) UIView * containerView;                                   //@synthesize containerView=_containerView - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;                          //@synthesize animated=_animated - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                      //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * presentedViewController;               //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,copy) id presentationCompletion;                                  //@synthesize presentationCompletion=_presentationCompletion - In the implementation block
@property (nonatomic,copy) id dismissalCompletion;                                     //@synthesize dismissalCompletion=_dismissalCompletion - In the implementation block
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(UIViewController *)presentingViewController;
-(UIViewController *)presentedViewController;
-(BOOL)isAnimated;
-(BOOL)isPresenting;
-(void)setPresenting:(BOOL)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)setDismissalCompletion:(id)arg1 ;
-(id)dismissalCompletion;
-(id)presentationCompletion;
-(void)setPresentationCompletion:(id)arg1 ;
@end

