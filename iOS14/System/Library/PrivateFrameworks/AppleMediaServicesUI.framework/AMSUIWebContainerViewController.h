/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/AMSUIWebPresentationDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol AMSUIWebPagePresenter, AMSUIWebPresentationDelegate;
@class UIViewController, AMSUIWebAppearance, NSDictionary, AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSString;

@interface AMSUIWebContainerViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate, AMSUIWebPresentationDelegate, UIAdaptivePresentationControllerDelegate> {

	BOOL _shouldSkipInitialRefresh;
	BOOL _dismissCalled;
	BOOL _hasAppeared;
	UIViewController*<AMSUIWebPagePresenter> _containedViewController;
	unsigned long long _activePresentationType;
	AMSUIWebAppearance* _appearance;
	long long _containerIndex;
	long long _disableReappearPlaceholder;
	AMSUIWebContainerViewController*<AMSUIWebPresentationDelegate> _modalPresentationDelegate;
	AMSUIWebContainerViewController* _nextContainer;
	NSDictionary* _pageInfo;
	AMSUIWebContainerViewController*<AMSUIWebPresentationDelegate> _pushPresentationDelegate;
	AMSUIWebClientContext* _context;
	UIViewController* _hiddenViewController;
	long long _lastNavigationStyle;
	AMSUIWebNavigationBarModel* _navigationBarModel;
	CGPoint _scrollPosition;

}

@property (assign,nonatomic,__weak) AMSUIWebClientContext * context;                                                                       //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL dismissCalled;                                                                                           //@synthesize dismissCalled=_dismissCalled - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                                                             //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (nonatomic,retain) UIViewController * hiddenViewController;                                                                      //@synthesize hiddenViewController=_hiddenViewController - In the implementation block
@property (assign,nonatomic) long long lastNavigationStyle;                                                                                //@synthesize lastNavigationStyle=_lastNavigationStyle - In the implementation block
@property (nonatomic,retain) AMSUIWebNavigationBarModel * navigationBarModel;                                                              //@synthesize navigationBarModel=_navigationBarModel - In the implementation block
@property (assign,nonatomic) CGPoint scrollPosition;                                                                                       //@synthesize scrollPosition=_scrollPosition - In the implementation block
@property (nonatomic,readonly) unsigned long long activePresentationType;                                                                  //@synthesize activePresentationType=_activePresentationType - In the implementation block
@property (nonatomic,retain) AMSUIWebAppearance * appearance;                                                                              //@synthesize appearance=_appearance - In the implementation block
@property (assign,nonatomic) long long containerIndex;                                                                                     //@synthesize containerIndex=_containerIndex - In the implementation block
@property (nonatomic,retain) UIViewController*<AMSUIWebPagePresenter> containedViewController;                                             //@synthesize containedViewController=_containedViewController - In the implementation block
@property (assign,nonatomic) long long disableReappearPlaceholder;                                                                         //@synthesize disableReappearPlaceholder=_disableReappearPlaceholder - In the implementation block
@property (assign,nonatomic,__weak) AMSUIWebContainerViewController*<AMSUIWebPresentationDelegate> modalPresentationDelegate;              //@synthesize modalPresentationDelegate=_modalPresentationDelegate - In the implementation block
@property (assign,nonatomic,__weak) AMSUIWebContainerViewController * nextContainer;                                                       //@synthesize nextContainer=_nextContainer - In the implementation block
@property (nonatomic,retain) NSDictionary * pageInfo;                                                                                      //@synthesize pageInfo=_pageInfo - In the implementation block
@property (assign,nonatomic,__weak) AMSUIWebContainerViewController*<AMSUIWebPresentationDelegate> pushPresentationDelegate;               //@synthesize pushPresentationDelegate=_pushPresentationDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipInitialRefresh;                                                                                //@synthesize shouldSkipInitialRefresh=_shouldSkipInitialRefresh - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)navigationItem;
-(void)viewWillLayoutSubviews;
-(CGPoint)scrollPosition;
-(void)setScrollPosition:(CGPoint)arg1 ;
-(BOOL)hasAppeared;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setAppearance:(AMSUIWebAppearance *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setPageInfo:(NSDictionary *)arg1 ;
-(void)setHasAppeared:(BOOL)arg1 ;
-(NSDictionary *)pageInfo;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController*<AMSUIWebPagePresenter>)containedViewController;
-(void)loadView;
-(void)setContainedViewController:(UIViewController*<AMSUIWebPagePresenter>)arg1 ;
-(AMSUIWebAppearance *)appearance;
-(void)dealloc;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(long long)disableReappearPlaceholder;
-(void)_applyAppearance;
-(unsigned long long)activePresentationType;
-(BOOL)dismissCalled;
-(AMSUIWebContainerViewController*<AMSUIWebPresentationDelegate>)pushPresentationDelegate;
-(void)handleModalDismissal;
-(void)_postEvent:(id)arg1 ;
-(void)setDismissCalled:(BOOL)arg1 ;
-(void)_handlePushDismissal;
-(unsigned long long)_determineActivePresentationType;
-(void)_refreshForInitialAppear;
-(AMSUIWebNavigationBarModel *)navigationBarModel;
-(void)applyNavigationModel:(id)arg1 ;
-(void)setShouldSkipInitialRefresh:(BOOL)arg1 ;
-(void)_setupNavBarAnimated:(BOOL)arg1 ;
-(AMSUIWebContainerViewController*<AMSUIWebPresentationDelegate>)modalPresentationDelegate;
-(void)didDismissController:(id)arg1 ;
-(void)_adjustWebViewScrollFor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_prepareToMoveWebViewToVC:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNextContainer:(AMSUIWebContainerViewController *)arg1 ;
-(void)replaceContentWithViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_scrollTo:(CGPoint)arg1 webView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleSelectedNavigationButton:(id)arg1 ;
-(BOOL)shouldSkipInitialRefresh;
-(id)_barButtonItemFromModel:(id)arg1 navModel:(id)arg2 ;
-(long long)lastNavigationStyle;
-(void)setLastNavigationStyle:(long long)arg1 ;
-(id)initWithViewController:(id)arg1 appearance:(id)arg2 navigationBar:(id)arg3 context:(id)arg4 ;
-(void)cacheScrollViewPositionFor:(id)arg1 ;
-(long long)containerIndex;
-(void)setContainerIndex:(long long)arg1 ;
-(void)setDisableReappearPlaceholder:(long long)arg1 ;
-(void)setModalPresentationDelegate:(AMSUIWebContainerViewController*<AMSUIWebPresentationDelegate>)arg1 ;
-(AMSUIWebContainerViewController *)nextContainer;
-(void)setPushPresentationDelegate:(AMSUIWebContainerViewController*<AMSUIWebPresentationDelegate>)arg1 ;
-(UIViewController *)hiddenViewController;
-(void)setHiddenViewController:(UIViewController *)arg1 ;
-(void)setNavigationBarModel:(AMSUIWebNavigationBarModel *)arg1 ;
@end

