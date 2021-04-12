/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@protocol AMSUIWebPagePresenter;
@class AMSUIWebLoadingPageModel, UIViewController, AMSUIWebClientContext, AMSUILoadingView, UIView, NSString;

@interface AMSUIWebPlaceholderViewController : UIViewController <AMSUIWebPagePresenter> {

	BOOL _hasAppeared;
	BOOL _isVisible;
	BOOL _shouldSnapshot;
	AMSUIWebLoadingPageModel* _model;
	UIViewController*<AMSUIWebPagePresenter> _originalViewController;
	AMSUIWebClientContext* _context;
	AMSUILoadingView* _loadingView;
	long long _originalOrientation;
	UIView* _snapshotView;
	UIView* _visibleView;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                             //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                                               //@synthesize isVisible=_isVisible - In the implementation block
@property (nonatomic,retain) AMSUILoadingView * loadingView;                                               //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) long long originalOrientation;                                                //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapshot;                                                          //@synthesize shouldSnapshot=_shouldSnapshot - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                                                        //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) UIView * visibleView;                                                         //@synthesize visibleView=_visibleView - In the implementation block
@property (nonatomic,retain) AMSUIWebLoadingPageModel * model;                                             //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UIViewController*<AMSUIWebPagePresenter> originalViewController;              //@synthesize originalViewController=_originalViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(AMSUIWebClientContext *)context;
-(AMSUIWebLoadingPageModel *)model;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setModel:(AMSUIWebLoadingPageModel *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(BOOL)isVisible;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)_interfaceOrientation;
-(UIView *)visibleView;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(long long)originalOrientation;
-(void)setOriginalOrientation:(long long)arg1 ;
-(BOOL)shouldSnapshot;
-(void)setLoadingView:(AMSUILoadingView *)arg1 ;
-(AMSUILoadingView *)loadingView;
-(UIViewController*<AMSUIWebPagePresenter>)originalViewController;
-(void)setOriginalViewController:(UIViewController*<AMSUIWebPagePresenter>)arg1 ;
-(id)initWithModel:(id)arg1 context:(id)arg2 ;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)_applyAppearance;
-(void)applyPageModel:(id)arg1 ;
-(void)willAppearAfterDismiss;
-(id)initWithSnapshot:(id)arg1 context:(id)arg2 ;
-(void)_handlePotentialRotation;
-(void)_transitionToLoading;
-(void)_transitionToSnapshot;
-(void)_startReappearTransitionTimer;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)setVisibleView:(UIView *)arg1 ;
-(void)_replacePrimaryViewWithView:(id)arg1 ;
-(void)setShouldSnapshot:(BOOL)arg1 ;
@end

