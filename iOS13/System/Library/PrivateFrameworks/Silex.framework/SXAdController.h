/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/ADBannerViewInternalDelegate.h>

@protocol SXAdvertisingSettings, SXAdControllerDelegate, SXAdControllerPresentationDelegate, SXAdProvider, OS_dispatch_semaphore;
@class SXDocument, SXViewport, NSMutableArray, NSObject, NSMutableDictionary, NSString;

@interface SXAdController : NSObject <ADBannerViewInternalDelegate> {

	BOOL _debuggingEnabled;
	BOOL _interactivityDebuggingEnabled;
	BOOL _didLoadFirstBannerView;
	id<SXAdvertisingSettings> _debugAdvertisementSettings;
	id<SXAdControllerDelegate> _delegate;
	id<SXAdControllerPresentationDelegate> _presentationDelegate;
	id<SXAdProvider> _adProvider;
	SXDocument* _document;
	SXViewport* _viewport;
	NSMutableArray* _componentViewsDisplayingAds;
	NSObject*<OS_dispatch_semaphore> _bannerViewsSemaphore;
	NSMutableDictionary* _bannerViews;

}

@property (nonatomic,readonly) id<SXAdProvider> adProvider;                                                          //@synthesize adProvider=_adProvider - In the implementation block
@property (nonatomic,readonly) SXDocument * document;                                                                //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                                                //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) NSMutableArray * componentViewsDisplayingAds;                                         //@synthesize componentViewsDisplayingAds=_componentViewsDisplayingAds - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> bannerViewsSemaphore;                                //@synthesize bannerViewsSemaphore=_bannerViewsSemaphore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bannerViews;                                                      //@synthesize bannerViews=_bannerViews - In the implementation block
@property (assign,nonatomic) BOOL didLoadFirstBannerView;                                                            //@synthesize didLoadFirstBannerView=_didLoadFirstBannerView - In the implementation block
@property (assign,getter=isDebuggingEnabled,nonatomic) BOOL debuggingEnabled;                                        //@synthesize debuggingEnabled=_debuggingEnabled - In the implementation block
@property (assign,getter=isInteractivityDebuggingEnabled,nonatomic) BOOL interactivityDebuggingEnabled;              //@synthesize interactivityDebuggingEnabled=_interactivityDebuggingEnabled - In the implementation block
@property (nonatomic,retain) id<SXAdvertisingSettings> debugAdvertisementSettings;                                   //@synthesize debugAdvertisementSettings=_debugAdvertisementSettings - In the implementation block
@property (assign,nonatomic,__weak) id<SXAdControllerDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SXAdControllerPresentationDelegate> presentationDelegate;                     //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXAdControllerDelegate>)delegate;
-(void)setDelegate:(id<SXAdControllerDelegate>)arg1 ;
-(void)reset;
-(SXViewport *)viewport;
-(void)setPresentationDelegate:(id<SXAdControllerPresentationDelegate>)arg1 ;
-(SXDocument *)document;
-(id<SXAdControllerPresentationDelegate>)presentationDelegate;
-(BOOL)isDebuggingEnabled;
-(void)setDebuggingEnabled:(BOOL)arg1 ;
-(id<SXAdProvider>)adProvider;
-(id<SXAdvertisingSettings>)debugAdvertisementSettings;
-(id)initWithAdProvider:(id)arg1 document:(id)arg2 viewport:(id)arg3 ;
-(void)setInteractivityDebuggingEnabled:(BOOL)arg1 ;
-(void)setDebugAdvertisementSettings:(id<SXAdvertisingSettings>)arg1 ;
-(void)transitionToSizeWithVisibleBounds:(CGRect)arg1 ;
-(void)disableAdInteraction;
-(void)resumeAdInteraction;
-(NSMutableArray *)componentViewsDisplayingAds;
-(NSMutableDictionary *)bannerViews;
-(BOOL)allowComponentViewInFirstViewport:(id)arg1 ;
-(BOOL)isRect:(CGRect)arg1 withinMinimumDistanceOfRect:(CGRect)arg2 viewport:(CGSize)arg3 ;
-(BOOL)componentViewWithinScreenHeightOfViewport:(id)arg1 ;
-(BOOL)didLoadFirstBannerView;
-(BOOL)isDisplayingAdsWithinScreenfullOfComponentView:(id)arg1 ;
-(BOOL)isComponentViewWithinFirstViewport:(id)arg1 ;
-(void)setDidLoadFirstBannerView:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)bannerViewsSemaphore;
-(void)setBannerViews:(NSMutableDictionary *)arg1 ;
-(BOOL)isInteractivityDebuggingEnabled;
-(BOOL)component:(id)arg1 isLastComponentInComponents:(id)arg2 ;
-(BOOL)shouldRequestBannerViewForComponentView:(id)arg1 ;
-(/*^block*/id)bannerViewForComponentView:(id)arg1 component:(id)arg2 metadataProvider:(id)arg3 adType:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(/*^block*/id)prerollForComponent:(id)arg1 metadataProvider:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)componentView:(id)arg1 didLoadBannerView:(id)arg2 ;
-(void)componentView:(id)arg1 didUnloadBannerView:(id)arg2 withError:(id)arg3 ;
-(void)componentView:(id)arg1 failedToLoadBannerView:(id)arg2 error:(id)arg3 ;
-(CGRect)frameForBannerViewForComponentIdentifier:(id)arg1 ;
@end

