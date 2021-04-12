/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>

@class UIVisualEffectView, UIStackView, NSMutableArray, SKUIReviewInAppRatingHeaderView, UIInterfaceAction, SKUIStarRatingControl, NSString;

@interface SKUIReviewInAppRatingViewController : UIViewController <UIViewControllerTransitioningDelegate, UIInterfaceActionHandlerInvocationDelegate> {

	BOOL _disableSubmit;
	/*^block*/id _completion;
	/*^block*/id _ratingHandler;
	UIVisualEffectView* _backgroundView;
	UIStackView* _stackView;
	NSMutableArray* _constraints;
	SKUIReviewInAppRatingHeaderView* _headerView;
	unsigned long long _state;
	UIInterfaceAction* _ratingControlAction;
	SKUIStarRatingControl* _ratingControl;

}

@property (nonatomic,retain) UIVisualEffectView * backgroundView;                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                   //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                              //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) SKUIReviewInAppRatingHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIInterfaceAction * ratingControlAction;                   //@synthesize ratingControlAction=_ratingControlAction - In the implementation block
@property (nonatomic,retain) SKUIStarRatingControl * ratingControl;                     //@synthesize ratingControl=_ratingControl - In the implementation block
@property (nonatomic,copy) id completion;                                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id ratingHandler;                                            //@synthesize ratingHandler=_ratingHandler - In the implementation block
@property (assign,nonatomic) BOOL disableSubmit;                                        //@synthesize disableSubmit=_disableSubmit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)constraints;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(UIVisualEffectView *)backgroundView;
-(id)_actions;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIStackView *)stackView;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(SKUIReviewInAppRatingHeaderView *)headerView;
-(void)setHeaderView:(SKUIReviewInAppRatingHeaderView *)arg1 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)_ratingControlChanged:(id)arg1 ;
-(SKUIStarRatingControl *)ratingControl;
-(void)setRatingControl:(SKUIStarRatingControl *)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 ;
-(void)setDisableSubmit:(BOOL)arg1 ;
-(void)setRatingHandler:(id)arg1 ;
-(void)setRatingControlAction:(UIInterfaceAction *)arg1 ;
-(UIInterfaceAction *)ratingControlAction;
-(void)reloadViewsConfiguration;
-(id)_actionsLayoutAxesForCurrentState;
-(id)_buttonActionWithTitle:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)disableSubmit;
-(id)ratingHandler;
@end

