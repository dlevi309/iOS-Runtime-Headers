/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <SiriUI/_SiriUICardLoaderDelegate.h>
#import <SiriUI/SiriUICardLoadingObserver.h>
#import <SiriUI/SiriUIModalContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/CRKCardPresentationDelegate.h>
#import <SiriUI/SiriUICardSnippetViewDataSource.h>
#import <SiriUI/SiriUICardSnippetViewDelegate.h>
#import <libobjc.A.dylib/CRKCardViewControllerDelegate.h>

@protocol OS_dispatch_group, CRKCardViewControlling;
@class SACardSnippet, NSMutableDictionary, NSObject, _SiriUICardLoader, NSTimer, SiriUIModalContainerViewController, UIViewController, CRKCardPresentation, SiriUICardSnippetView, NSString;

@interface SiriUICardSnippetViewController : SiriUISnippetViewController <_SiriUICardLoaderDelegate, SiriUICardLoadingObserver, SiriUIModalContainerViewControllerDelegate, CRKCardPresentationDelegate, SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate, CRKCardViewControllerDelegate> {

	SACardSnippet* _snippet;
	CGSize _contentSize;
	NSMutableDictionary* _referenceableCommandsByIdentifierMap;
	NSMutableDictionary* _referenceableSnippetsByIdentifierMap;
	NSObject*<OS_dispatch_group> _cardLoadingGroup;
	SACardSnippet* _newlyLoadedCardSnippet;
	_SiriUICardLoader* _cardLoader;
	/*^block*/id _cardLoadingCompletionhandler;
	NSTimer* _cardLoadingTimer;
	BOOL _isCardLoading;
	SiriUIModalContainerViewController* _presentedModalContainerViewController;
	UIViewController*<CRKCardViewControlling> _cardViewController;
	CRKCardPresentation* _cardPresentation;

}

@property (setter=_setCardViewController:,getter=_cardViewController,nonatomic,retain) UIViewController*<CRKCardViewControlling> cardViewController;              //@synthesize cardViewController=_cardViewController - In the implementation block
@property (setter=_setCardPresentation:,getter=_cardPresentation,nonatomic,retain) CRKCardPresentation * cardPresentation;                                        //@synthesize cardPresentation=_cardPresentation - In the implementation block
@property (nonatomic,retain) SiriUICardSnippetView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
+(void)initialize;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)snippet;
-(void)setSnippet:(id)arg1 ;
-(id)requestContext;
-(double)desiredHeight;
-(id)_cardViewController;
-(double)contentHeightForWidth:(double)arg1 ;
-(void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2 ;
-(void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2 ;
-(void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3 ;
-(void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3 ;
-(void)cardViewControllerDidLoad:(id)arg1 ;
-(void)cardViewControllerBoundsDidChange:(id)arg1 ;
-(void)cardViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2 ;
-(CGSize)cardViewController:(id)arg1 boundingSizeForCardSectionViewController:(id)arg2 ;
-(unsigned long long)navigationIndexOfCardViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 forCardViewController:(id)arg2 ;
-(void)cardViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(BOOL)performReferentialCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(BOOL)performNextCardCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(BOOL)performPunchoutCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(BOOL)performBeganEditingCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(double)boundingWidthForPresentation:(id)arg1 ;
-(BOOL)isIndicatingActivity;
-(id)_cardPresentation;
-(void)siriDidDeactivate;
-(void)cardLoadingMonitor:(id)arg1 didReceiveCardSnippet:(id)arg2 ;
-(BOOL)usePlatterStyle;
-(void)wasAddedToTranscript;
-(void)siriWillBeginScrolling;
-(void)siriDidScrollVisible:(BOOL)arg1 ;
-(void)siriDidStartSpeakingWithIdentifier:(id)arg1 ;
-(void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(BOOL)arg2 ;
-(void)siriDidReceiveViewsWithDialogPhase:(id)arg1 ;
-(void)_addCardViewControllerAsChildViewController:(id)arg1 ;
-(void)_updateContentSizeAndNotifyDelegateIfNecessary:(BOOL)arg1 ;
-(BOOL)logContentsIfApplicable;
-(void)_forwardProgressEvent:(unsigned long long)arg1 toCardViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setCardViewController:(id)arg1 ;
-(void)willCancel;
-(void)_forwardProgressEventToCardViewController:(unsigned long long)arg1 ;
-(void)_removeCardViewControllerFromParentViewController:(id)arg1 ;
-(void)willConfirm;
-(void)_insertCardViewController:(id)arg1 ;
-(void)_validateCardSectionForParsecFeedbackDelivery:(id)arg1 validHandler:(/*^block*/id)arg2 ;
-(id)_metricsContextOfEventsForCardSection:(id)arg1 inCard:(id)arg2 ;
-(id)_metricsContextOfEventsForCard:(id)arg1 ;
-(void)_validateCardForParsecFeedbackDelivery:(id)arg1 validHandler:(/*^block*/id)arg2 ;
-(void)_beginMonitoringForNextCardWithBlock:(/*^block*/id)arg1 ;
-(Class)transparentHeaderViewClass;
-(BOOL)cardLoader:(id)arg1 shouldLoadCard:(id)arg2 ;
-(BOOL)cardLoader:(id)arg1 loadCard:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)modalContainerViewControllerViewWillDisappear:(id)arg1 ;
-(void)modalContainerViewControllerViewDidDisappear:(id)arg1 ;
-(id)sashItemForCardSnippetView:(id)arg1 ;
-(id)localeForCardSnippetView:(id)arg1 ;
-(void)cardSnippetViewSashWasTapped:(id)arg1 ;
-(UIEdgeInsets)defaultViewInsets;
-(void)configureReusableTransparentHeaderView:(id)arg1 ;
-(double)desiredHeightForTransparentHeaderView;
-(void)_setCardPresentation:(id)arg1 ;
@end

