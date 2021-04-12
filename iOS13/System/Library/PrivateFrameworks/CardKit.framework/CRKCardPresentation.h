/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <CardKit/CardKit-Structs.h>
#import <libobjc.A.dylib/CRKCardSectionViewProviderDelegate.h>
#import <libobjc.A.dylib/_CRKSendMessageCardFactoryDelegate.h>
#import <libobjc.A.dylib/_CRKCardSectionViewLoaderDelegate.h>
#import <libobjc.A.dylib/_CRKCardViewControllerTransitionAnimatorDelegate.h>
#import <libobjc.A.dylib/CRKCardViewControllerDelegate.h>
#import <libobjc.A.dylib/CRKCardPresenting.h>

@protocol CRKIdentifiedProviding, CRKCardViewControllerDelegate, CRKCardViewControlling, CRKCardPresentationDelegate;
@class CRKCardPresentationConfiguration, _CRKCardSectionViewLoader, CRProtocolRestrictedInvocationChain, UIViewController, NSString;

@interface CRKCardPresentation : NSObject <CRKCardSectionViewProviderDelegate, _CRKSendMessageCardFactoryDelegate, _CRKCardSectionViewLoaderDelegate, _CRKCardViewControllerTransitionAnimatorDelegate, CRKCardViewControllerDelegate, CRKCardPresenting> {

	_CRKCardSectionViewLoader* _cardSectionViewLoader;
	id<CRKIdentifiedProviding> _loadedCardViewControllerProvider;
	CRProtocolRestrictedInvocationChain* _cardViewControllerDelegateChain;
	id<CRKCardViewControllerDelegate> _externalCardViewControllerDelegate;
	BOOL _debugModeEnabled;
	CRKCardPresentationConfiguration* _configuration;
	UIViewController*<CRKCardViewControlling> _cardViewController;
	id<CRKCardPresentationDelegate> _delegate;

}

@property (assign,nonatomic) BOOL debugModeEnabled;                                                       //@synthesize debugModeEnabled=_debugModeEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCardPresentationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController*<CRKCardViewControlling> cardViewController;              //@synthesize cardViewController=_cardViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) CRKCardPresentationConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) id<CRCard> card; 
+(void)initialize;
+(void)registerProvider:(id)arg1 ;
+(void)unregisterProvider:(id)arg1 ;
-(id)init;
-(id<CRKCardPresentationDelegate>)delegate;
-(void)setDelegate:(id<CRKCardPresentationDelegate>)arg1 ;
-(void)setConfiguration:(CRKCardPresentationConfiguration *)arg1 ;
-(CRKCardPresentationConfiguration *)configuration;
-(void)setDebugModeEnabled:(BOOL)arg1 ;
-(id<CRCard>)card;
-(UIViewController*<CRKCardViewControlling>)cardViewController;
-(void)transitionAnimator:(id)arg1 willTransitionFromCardViewController:(id)arg2 toCardViewController:(id)arg3 withAnimationCoordinator:(id)arg4 ;
-(void)cardViewController:(id)arg1 requestCardSectionViewSourceForCard:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setConfiguration:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fullyConfigureWithRequestedCard:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_establishParsecSessionIfNeeded:(/*^block*/id)arg1 ;
-(void)configureWithContent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureWithCardRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateViewConfigurationsDebugMode:(BOOL)arg1 ;
-(id)_cardSectionViewControllerForCardSection:(id)arg1 ;
-(void)_configureWithRequestedCard:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadAndRegisterBundleProviders:(/*^block*/id)arg1 ;
-(BOOL)debugModeEnabled;
-(id)defaultFeedbackDelegateForProvider:(id)arg1 ;
-(BOOL)cardSectionDisplayRequiresUserConsentForProvider:(id)arg1 ;
-(double)boundingWidthForProvider:(id)arg1 ;
-(long long)semanticContentAttributeForCardFactory:(id)arg1 ;
-(long long)cardSectionViewLoader:(id)arg1 compareCardSectionViewProviderOne:(id)arg2 providerTwo:(id)arg3 ;
-(void)configureWithCard:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

