/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)_actions;
-(void)setHeaderView:(SKUIReviewInAppRatingHeaderView *)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(UIStackView *)stackView;
-(id)completion;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)viewDidLoad;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(SKUIReviewInAppRatingHeaderView *)headerView;
-(void)setStackView:(UIStackView *)arg1 ;
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

