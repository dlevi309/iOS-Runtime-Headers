/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SWReachabilityObserver.h>

@protocol SXAnalyticsReporting, SXWebContentConfigurationProvider, SWNavigationManager, SWReachabilityProvider, SXResourceDataSource, SWLoadingPolicyProvider, SXLayoutInvalidator, SXWebContentDataSourceProviding;
@class SWContainerViewController, SXWebContentComponentInteractionManager, NFStateMachine, UIActivityIndicatorView, UITapGestureRecognizer, UILabel, NFPendingPromise, SXComponentExposureMonitor, SXWebContentComponentExposureEvent, NSString;

@interface SXWebContentComponentView : SXComponentView <SXViewportChangeListener, SWReachabilityObserver> {

	id<SXAnalyticsReporting> _analyticsReporting;
	SWContainerViewController* _containerViewController;
	id<SXWebContentConfigurationProvider> _configurationProvider;
	id<SWNavigationManager> _navigationManager;
	SXWebContentComponentInteractionManager* _interactionManager;
	id<SWReachabilityProvider> _reachabilityProvider;
	id<SXResourceDataSource> _resourceDataSource;
	id<SWLoadingPolicyProvider> _loadingPolicyProvider;
	id<SXLayoutInvalidator> _layoutInvalidator;
	NFStateMachine* _stateMachine;
	UIActivityIndicatorView* _loadingIndicator;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILabel* _errorLabel;
	NFPendingPromise* _invalidationPromise;
	SXComponentExposureMonitor* _componentExposureMonitor;
	SXWebContentComponentExposureEvent* _componentExposureEvent;
	id<SXWebContentDataSourceProviding> _dataSourceProvider;

}

@property (nonatomic,readonly) id<SXAnalyticsReporting> analyticsReporting;                               //@synthesize analyticsReporting=_analyticsReporting - In the implementation block
@property (nonatomic,readonly) SWContainerViewController * containerViewController;                       //@synthesize containerViewController=_containerViewController - In the implementation block
@property (nonatomic,readonly) id<SXWebContentConfigurationProvider> configurationProvider;               //@synthesize configurationProvider=_configurationProvider - In the implementation block
@property (nonatomic,readonly) id<SWNavigationManager> navigationManager;                                 //@synthesize navigationManager=_navigationManager - In the implementation block
@property (nonatomic,readonly) SXWebContentComponentInteractionManager * interactionManager;              //@synthesize interactionManager=_interactionManager - In the implementation block
@property (nonatomic,readonly) id<SWReachabilityProvider> reachabilityProvider;                           //@synthesize reachabilityProvider=_reachabilityProvider - In the implementation block
@property (nonatomic,readonly) id<SXResourceDataSource> resourceDataSource;                               //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (nonatomic,readonly) id<SWLoadingPolicyProvider> loadingPolicyProvider;                         //@synthesize loadingPolicyProvider=_loadingPolicyProvider - In the implementation block
@property (nonatomic,readonly) id<SXLayoutInvalidator> layoutInvalidator;                                 //@synthesize layoutInvalidator=_layoutInvalidator - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                                             //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;                                //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                             //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;                                                        //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) NFPendingPromise * invalidationPromise;                                      //@synthesize invalidationPromise=_invalidationPromise - In the implementation block
@property (nonatomic,readonly) SXComponentExposureMonitor * componentExposureMonitor;                     //@synthesize componentExposureMonitor=_componentExposureMonitor - In the implementation block
@property (nonatomic,retain) SXWebContentComponentExposureEvent * componentExposureEvent;                 //@synthesize componentExposureEvent=_componentExposureEvent - In the implementation block
@property (nonatomic,readonly) id<SXWebContentDataSourceProviding> dataSourceProvider;                    //@synthesize dataSourceProvider=_dataSourceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layout;
-(void)layoutSubviews;
-(void)configure;
-(NFStateMachine *)stateMachine;
-(void)handleTap:(id)arg1 ;
-(id)createStateMachine;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(UIActivityIndicatorView *)loadingIndicator;
-(SWContainerViewController *)containerViewController;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(UILabel *)errorLabel;
-(id<SXWebContentConfigurationProvider>)configurationProvider;
-(void)reachabilityChanged:(BOOL)arg1 ;
-(id<SXAnalyticsReporting>)analyticsReporting;
-(id<SXResourceDataSource>)resourceDataSource;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(id<SWReachabilityProvider>)reachabilityProvider;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)loadComponent:(id)arg1 ;
-(id<SXLayoutInvalidator>)layoutInvalidator;
-(void)loadWebContent;
-(void)configureViewController;
-(void)configurePresentationManager;
-(void)configureErrorProvider;
-(void)configureConfigurationProvider;
-(BOOL)useLightForegroundColor;
-(id<SWLoadingPolicyProvider>)loadingPolicyProvider;
-(void)configureComponentExposureMonitor;
-(SXComponentExposureMonitor *)componentExposureMonitor;
-(void)setComponentExposureEvent:(SXWebContentComponentExposureEvent *)arg1 ;
-(SXWebContentComponentExposureEvent *)componentExposureEvent;
-(void)setInvalidationPromise:(NFPendingPromise *)arg1 ;
-(NFPendingPromise *)invalidationPromise;
-(id<SXWebContentDataSourceProviding>)dataSourceProvider;
-(void)reloadWebContent;
-(id)createLoadingState;
-(id)createPresentationState;
-(id)createErrorState;
-(id)createDisabledState;
-(void)layoutErrorView;
-(void)layoutLoadingIndicator;
-(void)layoutWebView;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 containerViewController:(id)arg5 configurationProvider:(id)arg6 navigationManager:(id)arg7 analyticsReporting:(id)arg8 componentExposureMonitor:(id)arg9 interactionManagerFactory:(id)arg10 reachabilityProvider:(id)arg11 resourceDataSource:(id)arg12 loadingPolicyProvider:(id)arg13 dataSourceProvider:(id)arg14 layoutInvalidator:(id)arg15 ;
-(id<SWNavigationManager>)navigationManager;
-(SXWebContentComponentInteractionManager *)interactionManager;
@end

