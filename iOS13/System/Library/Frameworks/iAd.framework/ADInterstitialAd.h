/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/ADAdRecipient.h>

@protocol ADInterstitialAdDelegate;
@class NSString, ADLayoutOptions, ADInterstitialAdPresentationViewController, ADAdSpace, ADInterstitialView, UIViewController, UIView;

@interface ADInterstitialAd : NSObject <ADAdRecipient> {

	BOOL _loaded;
	BOOL _displayed;
	BOOL _reUsed;
	BOOL _actionInProgress;
	BOOL _dimmingEnabled;
	BOOL _requestCalledbackError;
	BOOL _canLoadMoreThanOnce;
	BOOL _hasLoadedFirstAd;
	int _screenfuls;
	int _slotPosition;
	int _creativeType;
	long long _options;
	NSString* _adResponseId;
	long long _lastErrorCode;
	ADLayoutOptions* _layoutOptions;
	id<ADInterstitialAdDelegate> _delegate;
	ADInterstitialAdPresentationViewController* _presentationViewController;
	ADAdSpace* _adSpace;
	ADInterstitialView* _interstitialView;
	id<ADInterstitialAdDelegate> _internalDelegate;
	UIViewController* _internalPresentingViewController;

}

@property (assign,nonatomic) BOOL dimmingEnabled;                                                                  //@synthesize dimmingEnabled=_dimmingEnabled - In the implementation block
@property (assign,nonatomic) int creativeType;                                                                     //@synthesize creativeType=_creativeType - In the implementation block
@property (nonatomic,retain) ADInterstitialAdPresentationViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (nonatomic,readonly) BOOL requiresMRAID; 
@property (assign,nonatomic) BOOL requestCalledbackError;                                                          //@synthesize requestCalledbackError=_requestCalledbackError - In the implementation block
@property (nonatomic,retain) ADAdSpace * adSpace;                                                                  //@synthesize adSpace=_adSpace - In the implementation block
@property (nonatomic,retain) ADInterstitialView * interstitialView;                                                //@synthesize interstitialView=_interstitialView - In the implementation block
@property (assign,nonatomic,__weak) id<ADInterstitialAdDelegate> internalDelegate;                                 //@synthesize internalDelegate=_internalDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * internalPresentingViewController;                           //@synthesize internalPresentingViewController=_internalPresentingViewController - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                                                          //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic) BOOL canLoadMoreThanOnce;                                                             //@synthesize canLoadMoreThanOnce=_canLoadMoreThanOnce - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedFirstAd;                                                                //@synthesize hasLoadedFirstAd=_hasLoadedFirstAd - In the implementation block
@property (assign,getter=isActionInProgress,nonatomic) BOOL actionInProgress;                                      //@synthesize actionInProgress=_actionInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<ADInterstitialAdDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int internalAdType; 
@property (nonatomic,retain) ADLayoutOptions * layoutOptions;                                                      //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) long long options;                                                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) UIView * adSpaceView; 
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (nonatomic,copy) NSString * adResponseId;                                                                //@synthesize adResponseId=_adResponseId - In the implementation block
@property (assign,nonatomic) int screenfuls;                                                                       //@synthesize screenfuls=_screenfuls - In the implementation block
@property (assign,nonatomic) int slotPosition;                                                                     //@synthesize slotPosition=_slotPosition - In the implementation block
@property (assign,nonatomic) BOOL displayed;                                                                       //@synthesize displayed=_displayed - In the implementation block
@property (assign,nonatomic) BOOL reUsed;                                                                          //@synthesize reUsed=_reUsed - In the implementation block
@property (assign,nonatomic) long long lastErrorCode;                                                              //@synthesize lastErrorCode=_lastErrorCode - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)options;
-(id<ADInterstitialAdDelegate>)delegate;
-(void)setDelegate:(id<ADInterstitialAdDelegate>)arg1 ;
-(id)identifier;
-(BOOL)isLoaded;
-(id)context;
-(void)setContext:(id)arg1 ;
-(ADLayoutOptions *)layoutOptions;
-(UIViewController *)presentingViewController;
-(void)cancelAction;
-(void)setSection:(id)arg1 ;
-(BOOL)displayed;
-(id<ADInterstitialAdDelegate>)internalDelegate;
-(void)setInternalDelegate:(id<ADInterstitialAdDelegate>)arg1 ;
-(void)setDisplayed:(BOOL)arg1 ;
-(void)presentFromViewController:(id)arg1 ;
-(id)serverURL;
-(ADInterstitialAdPresentationViewController *)presentationViewController;
-(void)setPresentationViewController:(ADInterstitialAdPresentationViewController *)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(ADAdSpace *)adSpace;
-(id)_initWithInternalAdType:(int)arg1 layoutOptions:(id)arg2 options:(long long)arg3 ;
-(int)internalAdType;
-(void)privacyButtonWasTapped;
-(void)setRequestCalledbackError:(BOOL)arg1 ;
-(BOOL)hasImpressed;
-(void)bannerTappedAtPoint:(CGPoint)arg1 ;
-(BOOL)requiresMRAID;
-(void)bannerTappedAtPoint:(CGPoint)arg1 withMRAIDAction:(id)arg2 ;
-(void)setLastErrorCode:(long long)arg1 ;
-(BOOL)requestCalledbackError;
-(void)setServerURL:(id)arg1 ;
-(void)setAuthenticationUserName:(id)arg1 ;
-(int)screenfuls;
-(int)slotPosition;
-(id)currentAdIdentifier;
-(void)serverBannerViewWillLoad;
-(void)serverBannerViewDidLoad;
-(void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1 ;
-(void)serverStoryboardDidTransitionOut;
-(void)storyboardViewControllerDidPresent;
-(void)pauseBannerMedia;
-(void)resumeBannerMedia;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(void)adlibManagedVideoAdDidImpress;
-(void)adlibManagedVideoAdDidResumePlay;
-(void)adlibManagedVideoAdDidPausePlay;
-(void)adlibManagedVideoAdDidCompletePlay:(int)arg1 ;
-(void)adlibManagedVideoAdDidTapForMoreInfo;
-(void)adlibManagedVideoAdDidTapVideo;
-(void)adlibManagedVideoAdDidToggleToMute:(BOOL)arg1 ;
-(void)setLayoutOptions:(ADLayoutOptions *)arg1 ;
-(UIView *)adSpaceView;
-(NSString *)adResponseId;
-(void)setAdResponseId:(NSString *)arg1 ;
-(void)setScreenfuls:(int)arg1 ;
-(void)setSlotPosition:(int)arg1 ;
-(BOOL)reUsed;
-(void)setReUsed:(BOOL)arg1 ;
-(long long)lastErrorCode;
-(void)creativeControllerViewWasTappedAtPoint:(CGPoint)arg1 withMRAIDAction:(id)arg2 ;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(id)initWithCreativeType:(int)arg1 options:(long long)arg2 ;
-(void)setDimmingEnabled:(BOOL)arg1 ;
-(ADInterstitialView *)interstitialView;
-(UIViewController *)internalPresentingViewController;
-(int)creativeType;
-(void)_presentFromViewController:(id)arg1 ;
-(void)setInternalPresentingViewController:(UIViewController *)arg1 ;
-(BOOL)hasLoadedFirstAd;
-(BOOL)canLoadMoreThanOnce;
-(BOOL)_considerClosingAdSpace;
-(void)setHasLoadedFirstAd:(BOOL)arg1 ;
-(void)_notifyDelegateOfBannerLoad;
-(void)setActionInProgress:(BOOL)arg1 ;
-(BOOL)presentInView:(id)arg1 ;
-(int)clickAction;
-(void)_dismissModalInterstitial;
-(void)missedOpportunityToFill;
-(BOOL)isActionInProgress;
-(BOOL)dimmingEnabled;
-(void)setCreativeType:(int)arg1 ;
-(void)setInterstitialView:(ADInterstitialView *)arg1 ;
-(void)setCanLoadMoreThanOnce:(BOOL)arg1 ;
@end

