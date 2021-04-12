/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRKCardViewControllerDelegate.h>
#import <libobjc.A.dylib/CRKCardPresentationDelegate.h>

@protocol WFInteractionCardViewControllerDelegate;
@class INInteraction, CRKCardPresentation, UIActivityIndicatorView, WFCompactUnlockService, NSString;

@interface WFInteractionCardViewController : UIViewController <CRKCardViewControllerDelegate, CRKCardPresentationDelegate> {

	INInteraction* _interaction;
	id<WFInteractionCardViewControllerDelegate> _delegate;
	CRKCardPresentation* _cardPresentation;
	UIActivityIndicatorView* _activityIndicatorView;
	WFCompactUnlockService* _unlockService;

}

@property (nonatomic,retain) CRKCardPresentation * cardPresentation;                                      //@synthesize cardPresentation=_cardPresentation - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityIndicatorView;                      //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,readonly) WFCompactUnlockService * unlockService;                                    //@synthesize unlockService=_unlockService - In the implementation block
@property (nonatomic,readonly) INInteraction * interaction;                                               //@synthesize interaction=_interaction - In the implementation block
@property (assign,nonatomic,__weak) id<WFInteractionCardViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<WFInteractionCardViewControllerDelegate>)delegate;
-(id)cardViewController;
-(double)contentHeightForWidth:(double)arg1 ;
-(id)initWithInteraction:(id)arg1 ;
-(void)setDelegate:(id<WFInteractionCardViewControllerDelegate>)arg1 ;
-(INInteraction *)interaction;
-(BOOL)_canShowWhileLocked;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)loadView;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(void)cardViewControllerDidLoad:(id)arg1 ;
-(void)cardViewControllerBoundsDidChange:(id)arg1 ;
-(void)setCardPresentation:(CRKCardPresentation *)arg1 ;
-(CRKCardPresentation *)cardPresentation;
-(id)cardRequestForInteraction:(id)arg1 ;
-(void)updateWithInteraction:(id)arg1 ;
-(void)updateCardViewSize;
-(void)buttonOverlayWasTouchedUpInside:(id)arg1 ;
-(void)buttonOverlayWasTouchedUpOutside:(id)arg1 ;
-(void)buttonOverlayWasTouchedDown:(id)arg1 ;
-(void)buttonOverlayTouchWasCancelled:(id)arg1 ;
-(WFCompactUnlockService *)unlockService;
@end

