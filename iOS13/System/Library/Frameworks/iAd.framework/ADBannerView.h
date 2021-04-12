/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ADAdRecipient.h>
#import <libobjc.A.dylib/ADDimmerViewDelegate.h>

@protocol ADBannerViewInternalDelegate, ADBannerViewDelegate;
@class ADLayoutOptions, UIView, UIViewController, NSString, UILabel, NSTimer, ADPrivacyMarker, NSURL, ADAdSpace, ADDimmerView, NSDate;

@interface ADBannerView : UIView <ADAdRecipient, ADDimmerViewDelegate> {

	id<ADBannerViewInternalDelegate> _weakInternalDelegate;
	BOOL _displayed;
	BOOL _reUsed;
	BOOL _bannerLoaded;
	BOOL _bannerViewActionInProgress;
	BOOL _createdForIBInternal;
	BOOL _dimmed;
	BOOL _determiningConstraintBasedWidth;
	BOOL _inSecondConstraintsPass;
	BOOL _scrolling;
	BOOL _imageUpdateEnabled;
	BOOL _debugHighlightEnabled;
	BOOL _internalAdTypeCanChange;
	BOOL _requestCalledbackError;
	int _screenfuls;
	int _slotPosition;
	int _internalAdType;
	NSString* _adResponseId;
	long long _lastErrorCode;
	long long _options;
	ADLayoutOptions* _layoutOptions;
	long long _adType;
	NSString* _advertisingSection;
	UIView* _highlightClippedView;
	UIView* _highlightHittableView;
	UILabel* _idLbl;
	NSTimer* _highlightUpdateTimer;
	ADPrivacyMarker* _privacyMarker;
	NSString* _authenticationUserName;
	NSURL* _serverURL;
	ADAdSpace* _adSpace;
	ADDimmerView* _dimmerView;
	double _constraintBasedWidth;
	NSString* _originID;
	NSDate* _adDisplayDate;
	NSDate* _loadStartTime;
	NSDate* _webLoadStartTime;
	NSDate* _loadEndTime;
	double _adDataLoadTime;
	double _bannerLoadTime;
	id<ADBannerViewDelegate> _weakDelegate;
	CGSize _portraitSize;
	CGSize _landscapeSize;

}

@property (nonatomic,retain) UIView * highlightClippedView;                                                    //@synthesize highlightClippedView=_highlightClippedView - In the implementation block
@property (nonatomic,retain) UIView * highlightHittableView;                                                   //@synthesize highlightHittableView=_highlightHittableView - In the implementation block
@property (nonatomic,retain) UILabel * idLbl;                                                                  //@synthesize idLbl=_idLbl - In the implementation block
@property (nonatomic,retain) NSTimer * highlightUpdateTimer;                                                   //@synthesize highlightUpdateTimer=_highlightUpdateTimer - In the implementation block
@property (nonatomic,retain) ADPrivacyMarker * privacyMarker;                                                  //@synthesize privacyMarker=_privacyMarker - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                                                  //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                                  //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,readonly) BOOL createdForIBInternal;                                                      //@synthesize createdForIBInternal=_createdForIBInternal - In the implementation block
@property (assign,getter=isBannerViewActionInProgress,nonatomic) BOOL bannerViewActionInProgress;              //@synthesize bannerViewActionInProgress=_bannerViewActionInProgress - In the implementation block
@property (nonatomic,retain) ADAdSpace * adSpace;                                                              //@synthesize adSpace=_adSpace - In the implementation block
@property (nonatomic,retain) ADDimmerView * dimmerView;                                                        //@synthesize dimmerView=_dimmerView - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                                                      //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL determiningConstraintBasedWidth;                                             //@synthesize determiningConstraintBasedWidth=_determiningConstraintBasedWidth - In the implementation block
@property (assign,nonatomic) double constraintBasedWidth;                                                      //@synthesize constraintBasedWidth=_constraintBasedWidth - In the implementation block
@property (assign,nonatomic) BOOL inSecondConstraintsPass;                                                     //@synthesize inSecondConstraintsPass=_inSecondConstraintsPass - In the implementation block
@property (assign,nonatomic) BOOL scrolling;                                                                   //@synthesize scrolling=_scrolling - In the implementation block
@property (assign,nonatomic) CGSize portraitSize;                                                              //@synthesize portraitSize=_portraitSize - In the implementation block
@property (assign,nonatomic) CGSize landscapeSize;                                                             //@synthesize landscapeSize=_landscapeSize - In the implementation block
@property (assign,nonatomic) BOOL imageUpdateEnabled;                                                          //@synthesize imageUpdateEnabled=_imageUpdateEnabled - In the implementation block
@property (assign,nonatomic) BOOL debugHighlightEnabled;                                                       //@synthesize debugHighlightEnabled=_debugHighlightEnabled - In the implementation block
@property (assign,nonatomic) BOOL internalAdTypeCanChange;                                                     //@synthesize internalAdTypeCanChange=_internalAdTypeCanChange - In the implementation block
@property (nonatomic,copy) NSString * originID;                                                                //@synthesize originID=_originID - In the implementation block
@property (nonatomic,copy) NSDate * adDisplayDate;                                                             //@synthesize adDisplayDate=_adDisplayDate - In the implementation block
@property (assign,nonatomic) BOOL requestCalledbackError;                                                      //@synthesize requestCalledbackError=_requestCalledbackError - In the implementation block
@property (nonatomic,copy) NSDate * loadStartTime;                                                             //@synthesize loadStartTime=_loadStartTime - In the implementation block
@property (nonatomic,copy) NSDate * webLoadStartTime;                                                          //@synthesize webLoadStartTime=_webLoadStartTime - In the implementation block
@property (nonatomic,copy) NSDate * loadEndTime;                                                               //@synthesize loadEndTime=_loadEndTime - In the implementation block
@property (assign,nonatomic) double adDataLoadTime;                                                            //@synthesize adDataLoadTime=_adDataLoadTime - In the implementation block
@property (assign,nonatomic) double bannerLoadTime;                                                            //@synthesize bannerLoadTime=_bannerLoadTime - In the implementation block
@property (assign,nonatomic,__weak) id<ADBannerViewDelegate> weakDelegate;                                     //@synthesize weakDelegate=_weakDelegate - In the implementation block
@property (nonatomic,readonly) long long adType;                                                               //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic,__weak) id<ADBannerViewDelegate> delegate; 
@property (getter=isBannerLoaded,nonatomic,readonly) BOOL bannerLoaded;                                        //@synthesize bannerLoaded=_bannerLoaded - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                                                      //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int internalAdType;                                                             //@synthesize internalAdType=_internalAdType - In the implementation block
@property (nonatomic,retain) ADLayoutOptions * layoutOptions;                                                  //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) long long options;                                                              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) UIView * adSpaceView; 
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (nonatomic,copy) NSString * adResponseId;                                                            //@synthesize adResponseId=_adResponseId - In the implementation block
@property (assign,nonatomic) int screenfuls;                                                                   //@synthesize screenfuls=_screenfuls - In the implementation block
@property (assign,nonatomic) int slotPosition;                                                                 //@synthesize slotPosition=_slotPosition - In the implementation block
@property (assign,nonatomic) BOOL displayed;                                                                   //@synthesize displayed=_displayed - In the implementation block
@property (assign,nonatomic) BOOL reUsed;                                                                      //@synthesize reUsed=_reUsed - In the implementation block
@property (assign,nonatomic) long long lastErrorCode;                                                          //@synthesize lastErrorCode=_lastErrorCode - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(CGSize)_sizeThatFitsSize:(CGSize)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3 ;
+(CGSize)sizeFromBannerContentSizeIdentifier:(id)arg1 ;
+(CGSize)_landscapeBannerSize;
+(CGSize)_portraitBannerSize;
+(void)setServerURL:(id)arg1 ;
+(CGRect)_frameThatFits:(CGRect)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3 ;
+(CGRect)_adWindowBounds;
-(void)dealloc;
-(long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ADBannerViewDelegate>)delegate;
-(void)setDelegate:(id<ADBannerViewDelegate>)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)context;
-(id)uniqueIdentifier;
-(int)action;
-(void)setContext:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(ADLayoutOptions *)layoutOptions;
-(void)_commonInit;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(UIViewController *)presentingViewController;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(BOOL)displayed;
-(BOOL)hasAction;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)_resetToBeginningOfDoublePass;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(id)internalDelegate;
-(void)setInternalDelegate:(id)arg1 ;
-(void)setDisplayed:(BOOL)arg1 ;
-(id)_accessibilityUserTestingElementAttributes;
-(id)audioURL;
-(BOOL)scrolling;
-(void)setScrolling:(BOOL)arg1 ;
-(id)initFromIBWithFrame:(CGRect)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
-(NSURL *)serverURL;
-(CGSize)landscapeSize;
-(void)setLandscapeSize:(CGSize)arg1 ;
-(CGSize)portraitSize;
-(void)setPortraitSize:(CGSize)arg1 ;
-(ADAdSpace *)adSpace;
-(id)_initWithInternalAdType:(int)arg1 options:(long long)arg2 ;
-(id)_initWithInternalAdType:(int)arg1 layoutOptions:(id)arg2 options:(long long)arg3 ;
-(id)initFromIBWithFrame:(CGRect)arg1 adType:(long long)arg2 ;
-(int)internalAdType;
-(void)setDimmerView:(ADDimmerView *)arg1 ;
-(ADDimmerView *)dimmerView;
-(void)setPrivacyMarker:(ADPrivacyMarker *)arg1 ;
-(ADPrivacyMarker *)privacyMarker;
-(void)privacyButtonWasTapped;
-(void)setAdDisplayDate:(NSDate *)arg1 ;
-(void)setLoadStartTime:(NSDate *)arg1 ;
-(void)setWebLoadStartTime:(NSDate *)arg1 ;
-(void)setLoadEndTime:(NSDate *)arg1 ;
-(void)setRequestCalledbackError:(BOOL)arg1 ;
-(BOOL)canReuseForContext:(id)arg1 ;
-(BOOL)hasImpressed;
-(void)_resetHighlightTimer;
-(void)bannerTappedAtPoint:(CGPoint)arg1 ;
-(BOOL)requiresMRAID;
-(void)bannerTappedAtPoint:(CGPoint)arg1 withMRAIDAction:(id)arg2 ;
-(void)setBannerViewActionInProgress:(BOOL)arg1 ;
-(void)reportNativeClickEvent;
-(void)displayCreativeView;
-(NSDate *)loadEndTime;
-(double)adDataLoadTime;
-(double)bannerLoadTime;
-(id)publicImpressionAttributes;
-(void)_updateHighlight:(id)arg1 ;
-(NSDate *)webLoadStartTime;
-(NSDate *)loadStartTime;
-(void)setAdDataLoadTime:(double)arg1 ;
-(void)setBannerLoadTime:(double)arg1 ;
-(id)nativeMetadata;
-(void)setOriginID:(NSString *)arg1 ;
-(BOOL)hasTransparencyDetails;
-(void)_setAdPrivacyMarkPosition;
-(void)_forwardErrorToDelegate:(id)arg1 ;
-(void)beginAction;
-(void)setLastErrorCode:(long long)arg1 ;
-(BOOL)requestCalledbackError;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)cancelBannerViewAction;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(double)skipThreshold;
-(void)setDeterminingConstraintBasedWidth:(BOOL)arg1 ;
-(void)setConstraintBasedWidth:(double)arg1 ;
-(BOOL)determiningConstraintBasedWidth;
-(double)constraintBasedWidth;
-(void)setInSecondConstraintsPass:(BOOL)arg1 ;
-(int)screenfuls;
-(int)slotPosition;
-(id)currentAdIdentifier;
-(void)registerVideoPlayerForAdAnalytics:(id)arg1 ;
-(void)unregisterVideoPlayerForAdAnalytics:(id)arg1 ;
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
-(void)setViewSizeInPortrait:(CGSize)arg1 inLandscape:(CGSize)arg2 ;
-(void)creativeControllerViewWasTappedAtPoint:(CGPoint)arg1 withMRAIDAction:(id)arg2 ;
-(void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(CGPoint)arg2 ;
-(BOOL)enableDimmerView:(id)arg1 ;
-(id)initWithAdType:(long long)arg1 ;
-(void)cycleImpressionImmediately;
-(void)setInternalAdType:(int)arg1 ;
-(void)prerollDidStart;
-(void)prerollDidStop;
-(void)displayBannerView;
-(void)removeCreativeView;
-(void)setRequiredContentSizeIdentifiers:(id)arg1 ;
-(id)requiredContentSizeIdentifiers;
-(void)setCurrentContentSizeIdentifier:(id)arg1 ;
-(id)currentContentSizeIdentifier;
-(void)suspendImpressionCycling;
-(void)resumeImpressionCycling;
-(id)videoAssets;
-(void)playbackStarted;
-(void)playbackStartedForImpressionSource:(int)arg1 ;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished:(id)arg1 ;
-(void)playbackFailed:(id)arg1 ;
-(void)userDidSkipPreroll;
-(void)nextContentVideoStartedPlaying;
-(void)bannerDidAppear;
-(void)bannerDidDisappear;
-(void)cancelScheduledAd;
-(void)scheduleAd;
-(long long)adType;
-(BOOL)isBannerLoaded;
-(BOOL)isBannerViewActionInProgress;
-(NSString *)advertisingSection;
-(UIView *)highlightClippedView;
-(void)setHighlightClippedView:(UIView *)arg1 ;
-(UIView *)highlightHittableView;
-(void)setHighlightHittableView:(UIView *)arg1 ;
-(UILabel *)idLbl;
-(void)setIdLbl:(UILabel *)arg1 ;
-(NSTimer *)highlightUpdateTimer;
-(void)setHighlightUpdateTimer:(NSTimer *)arg1 ;
-(NSString *)authenticationUserName;
-(BOOL)createdForIBInternal;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(BOOL)inSecondConstraintsPass;
-(BOOL)imageUpdateEnabled;
-(void)setImageUpdateEnabled:(BOOL)arg1 ;
-(BOOL)debugHighlightEnabled;
-(void)setDebugHighlightEnabled:(BOOL)arg1 ;
-(BOOL)internalAdTypeCanChange;
-(void)setInternalAdTypeCanChange:(BOOL)arg1 ;
-(NSString *)originID;
-(NSDate *)adDisplayDate;
-(id<ADBannerViewDelegate>)weakDelegate;
-(void)setWeakDelegate:(id<ADBannerViewDelegate>)arg1 ;
-(void)videoBannerDidLoad:(id)arg1 ;
-(void)videoBannerDidUnload:(id)arg1 ;
-(void)playbackDidStart:(id)arg1 ;
-(void)playbackDidPause:(id)arg1 ;
-(void)playbackDidResume:(id)arg1 ;
-(void)playbackDidFinish:(id)arg1 ;
-(void)playbackDidReachProgressEvent:(id)arg1 ;
-(void)playbackAudioWasMuted:(id)arg1 ;
-(void)playbackAudioWasUnmuted:(id)arg1 ;
-(void)playbackDidEnterFullscreen:(id)arg1 ;
-(void)playbackDidExitFullscreen:(id)arg1 ;
-(void)playbackMediaWasSkipped:(id)arg1 ;
-(void)playbackFailed:(id)arg1 forURL:(id)arg2 ;
-(void)videoBannerVisibilityDidChange:(id)arg1 ;
-(void)videoBannerTouched:(id)arg1 ;
@end

