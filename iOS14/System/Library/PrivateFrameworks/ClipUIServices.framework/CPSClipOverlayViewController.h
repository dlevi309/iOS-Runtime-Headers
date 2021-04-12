/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSSessionProxyDelegate.h>

@class NSTimer, CPSAppAttributionBanner, CPSBannerContainerView, CPSAppClipRecord, CPSClipLoadingView, CPSClipMetadata, CPSSessionProxy, CPSWebClip, NSString;

@interface CPSClipOverlayViewController : UIViewController <CPSSessionProxyDelegate> {

	NSTimer* _automaticBannerDismissTimer;
	BOOL _attemptToShowBannerOnceSessionProxyIsResolved;
	CPSAppAttributionBanner* _banner;
	CPSBannerContainerView* _bannerContainer;
	CPSAppClipRecord* _clipRecord;
	BOOL _displayedOverPlaceholder;
	CPSClipLoadingView* _loadingView;
	CPSClipMetadata* _placeholderClipMetadata;
	long long _sceneActivationState;
	CPSSessionProxy* _sessionProxy;
	BOOL _usesMockData;
	BOOL _showingDemoProgress;
	double _initialAppearanceTime;
	CPSWebClip* _webClip;
	NSString* _webClipID;
	long long _appAttributionBannerPolicy;

}

@property (assign,nonatomic) BOOL usesMockData;                                 //@synthesize usesMockData=_usesMockData - In the implementation block
@property (assign,nonatomic) long long appAttributionBannerPolicy;              //@synthesize appAttributionBannerPolicy=_appAttributionBannerPolicy - In the implementation block
@property (nonatomic,copy) NSString * webClipID;                                //@synthesize webClipID=_webClipID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewDidLoad;
-(long long)preferredStatusBarStyle;
-(void)dealloc;
-(NSString *)webClipID;
-(void)setDisplayedOverPlaceholder:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSceneActivationState:(long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithAppClipBundleID:(id)arg1 webClipID:(id)arg2 ;
-(void)setWebClipID:(NSString *)arg1 ;
-(void)proxyDidUpdateMetadata:(id)arg1 ;
-(void)proxyDidChangeProgress:(id)arg1 ;
-(void)proxy:(id)arg1 didRetrieveHeroImage:(id)arg2 ;
-(void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)proxyRemoteServiceDidCrash:(id)arg1 ;
-(id)_initWithAppClipBundleID:(id)arg1 ;
-(void)_loadClipRecordUsingBundleID;
-(void)_setClipSessionProxy:(id)arg1 ;
-(void)_scheduleBannerDismissTimerIfNeeded;
-(void)_didTapBanner;
-(void)_updateBanner;
-(void)_loadClipMetadataUsingPlaceholderWebClipID;
-(void)_presentLoadingViewAnimated:(BOOL)arg1 ;
-(void)_dismissLoadingViewAnimated:(BOOL)arg1 ;
-(void)_setPlaceholderClipMetadata:(id)arg1 ;
-(void)setDisplayedOverPlaceholder:(BOOL)arg1 forWebClipID:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setBannerHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setClipRecord:(id)arg1 ;
-(void)_updateBannerLabels;
-(void)_setUpNewSessionProxy;
-(void)_updateLoadingView;
-(void)_showFailedLoadingStateAndReloadMetadata:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithAppClipBundleID:(id)arg1 ;
-(id)initWithAppClipRecord:(id)arg1 ;
-(void)setDisplayedOverPlaceholder:(BOOL)arg1 usingClipMetadata:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)usesMockData;
-(void)setUsesMockData:(BOOL)arg1 ;
-(long long)appAttributionBannerPolicy;
-(void)setAppAttributionBannerPolicy:(long long)arg1 ;
@end

