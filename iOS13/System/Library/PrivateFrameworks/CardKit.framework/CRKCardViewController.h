/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <CardKit/CardKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRKCardSectionViewControllerDelegate.h>
#import <libobjc.A.dylib/CRKCardSectionViewProviderDelegate.h>
#import <libobjc.A.dylib/CRKCardViewControlling.h>

@protocol CRKCardSectionViewSourcing, CRCard, CRKCardViewControllerDelegate;
@class NSMutableArray, NSMapTable, CRKComposedStackView, NSString;

@interface CRKCardViewController : UIViewController <CRKCardSectionViewControllerDelegate, CRKCardSectionViewProviderDelegate, CRKCardViewControlling> {

	NSMutableArray* _cardSectionViewControllers;
	NSMapTable* _cardSectionsToCardSectionViewControllersMapTable;
	NSMapTable* _handledParametersForInteraction;
	NSMutableArray* _pendingDismissalCommands;
	BOOL _loaded;
	id<CRKCardSectionViewSourcing> _builtInCardSectionViewSource;
	NSMutableArray* _loadingCardSections;
	BOOL _indicatingActivity;
	BOOL _loadBundles;
	id<CRCard> _card;
	id<CRKCardViewControllerDelegate> _cardViewControllerDelegate;
	id<CRKCardSectionViewSourcing> _cardSectionViewSource;
	long long _preferredPunchoutIndex;

}

@property (nonatomic,retain) CRKComposedStackView * view; 
@property (assign) long long preferredPunchoutIndex;                                                           //@synthesize preferredPunchoutIndex=_preferredPunchoutIndex - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCardViewControllerDelegate> delegate; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (getter=isIndicatingActivity,nonatomic,readonly) BOOL indicatingActivity;                            //@synthesize indicatingActivity=_indicatingActivity - In the implementation block
@property (assign,nonatomic) BOOL loadBundles;                                                                 //@synthesize loadBundles=_loadBundles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<CRCard> card;                                                                  //@synthesize card=_card - In the implementation block
@property (nonatomic,retain) id<CRKCardSectionViewSourcing> cardSectionViewSource;                             //@synthesize cardSectionViewSource=_cardSectionViewSource - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCardViewControllerDelegate> cardViewControllerDelegate;              //@synthesize cardViewControllerDelegate=_cardViewControllerDelegate - In the implementation block
+(void)initialize;
+(void)_registerCardSectionViewControllers;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<CRKCardViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CRKCardViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(BOOL)isLoading;
-(id<CRCard>)card;
-(void)didEngageCardSection:(id)arg1 ;
-(void)setCard:(id<CRCard>)arg1 ;
-(void)_finishLoading;
-(void)willDismissViewController:(id)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1 ;
-(void)setPreferredPunchoutIndex:(long long)arg1 ;
-(long long)preferredPunchoutIndex;
-(double)contentHeightForWidth:(double)arg1 ;
-(void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2 ;
-(void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)handleCardCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_cardSectionViewControllerForCardSection:(id)arg1 ;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(id<CRKCardSectionViewSourcing>)cardSectionViewSource;
-(void)setCardSectionViewSource:(id<CRKCardSectionViewSourcing>)arg1 ;
-(void)setCardViewControllerDelegate:(id<CRKCardViewControllerDelegate>)arg1 ;
-(id)defaultFeedbackDelegateForProvider:(id)arg1 ;
-(BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2 ;
-(void)cardSectionViewControllerDidFinishLoading:(id)arg1 ;
-(long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1 ;
-(void)cardSectionViewControllerBoundsDidChange:(id)arg1 ;
-(void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2 ;
-(void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2 ;
-(void)_cancelTouchesIfNecessary;
-(void)_resumeTouchesIfNecessary;
-(id)_initWithCard:(id)arg1 delegate:(id)arg2 loadBundles:(BOOL)arg3 loadProvidersImmediately:(BOOL)arg4 ;
-(void)_setCard:(id)arg1 loadProvidersImmediately:(BOOL)arg2 ;
-(id)initWithCard:(id)arg1 delegate:(id)arg2 ;
-(void)_configureCardSectionViewController:(id)arg1 forCardSection:(id)arg2 ;
-(long long)_defaultKeylineStyleBetweenLeadingCardSection:(id)arg1 andTrailingCardSection:(id)arg2 ;
-(long long)_convertSFSeparatorStyleToCRKKeylineStyle:(int)arg1 ;
-(long long)_keylineStyleBetweenLeadingCardSectionViewController:(id)arg1 andTrailingCardSectionViewController:(id)arg2 ;
-(void)_setCardWithLoadedBundles:(id)arg1 loadProvidersImmediately:(BOOL)arg2 ;
-(void)_loadCardSectionViewControllersFromCard:(id)arg1 currentSourceInvalid:(BOOL)arg2 ;
-(void)_removeCardSectionViewControllersFromParentViewController:(id)arg1 ;
-(id)_loadCardSectionViewControllerFromCardSection:(id)arg1 ;
-(void)_addCardSectionViewControllersAsChildViewControllers:(id)arg1 ;
-(id)_generateCardViewAppearanceFeedback;
-(BOOL)_isActuallyVisible;
-(BOOL)_askDelegateToPerformReferentialCommand:(id)arg1 ;
-(BOOL)_fireAndForgetOutboundCommand:(id)arg1 ;
-(void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2 ;
-(CGSize)boundingSizeForCardSectionViewController:(id)arg1 ;
-(id)_initWithCard:(id)arg1 delegate:(id)arg2 loadProvidersImmediately:(BOOL)arg3 ;
-(id)_initWithCard:(id)arg1 ;
-(void)cardSectionViewControllerShouldBeRemoved:(id)arg1 ;
-(BOOL)isIndicatingActivity;
-(BOOL)loadBundles;
-(void)setLoadBundles:(BOOL)arg1 ;
@end

