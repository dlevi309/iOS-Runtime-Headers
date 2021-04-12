/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <libobjc.A.dylib/CPSBannerItemDelegate.h>
#import <libobjc.A.dylib/CPSBannerViewControllerDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/CPBannerProviding.h>
#import <libobjc.A.dylib/CPSApplicationStateObserving.h>

@protocol CPBannerDelegate;
@class NSString, CPSApplicationStateMonitor, BNBannerSource, CPSBannerViewController, NSTimer, NSUUID;

@interface CPSBannerSource : NSObject <CPSBannerItemDelegate, CPSBannerViewControllerDelegate, BSInvalidatable, CPBannerProviding, CPSApplicationStateObserving> {

	BOOL _rateLimited;
	NSString* _bundleIdentifier;
	id<CPBannerDelegate> _delegate;
	CPSApplicationStateMonitor* _applicationStateMonitor;
	BNBannerSource* _bannerKitSource;
	CPSBannerViewController* _presentedBannerViewController;
	NSTimer* _dimissTimer;
	NSUUID* _lastUserDismissedIdentifier;
	NSTimer* _lastUserDismissedIdentifierResetTimer;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CPBannerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CPSApplicationStateMonitor * applicationStateMonitor;                 //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,retain) BNBannerSource * bannerKitSource;                                     //@synthesize bannerKitSource=_bannerKitSource - In the implementation block
@property (nonatomic,retain) CPSBannerViewController * presentedBannerViewController;              //@synthesize presentedBannerViewController=_presentedBannerViewController - In the implementation block
@property (nonatomic,retain) NSTimer * dimissTimer;                                                //@synthesize dimissTimer=_dimissTimer - In the implementation block
@property (assign,getter=isRateLimited,nonatomic) BOOL rateLimited;                                //@synthesize rateLimited=_rateLimited - In the implementation block
@property (nonatomic,retain) NSUUID * lastUserDismissedIdentifier;                                 //@synthesize lastUserDismissedIdentifier=_lastUserDismissedIdentifier - In the implementation block
@property (nonatomic,retain) NSTimer * lastUserDismissedIdentifierResetTimer;                      //@synthesize lastUserDismissedIdentifierResetTimer=_lastUserDismissedIdentifierResetTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CPBannerDelegate>)delegate;
-(CPSApplicationStateMonitor *)applicationStateMonitor;
-(NSString *)bundleIdentifier;
-(void)setDelegate:(id<CPBannerDelegate>)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setApplicationStateMonitor:(CPSApplicationStateMonitor *)arg1 ;
-(void)invalidate;
-(void)_flushQueue;
-(void)postBannerForManeuver:(id)arg1 travelEstimates:(id)arg2 ;
-(void)postBannerForNavigationAlert:(id)arg1 ;
-(void)sceneActivationStateChangedTo:(id)arg1 ;
-(void)bannerTappedWithIdentifier:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 delegate:(id)arg2 applicationStateMonitor:(id)arg3 ;
-(void)applicationStateMonitor:(id)arg1 didBecomeActive:(BOOL)arg2 ;
-(BNBannerSource *)bannerKitSource;
-(void)_enqueueBannerItem:(id)arg1 ;
-(CPSBannerViewController *)presentedBannerViewController;
-(void)_revokePresentedBannerWithReason:(id)arg1 ;
-(void)_resetDismissTimer;
-(NSUUID *)lastUserDismissedIdentifier;
-(BOOL)isRateLimited;
-(void)setRateLimited:(BOOL)arg1 ;
-(void)_postBannerRequestForBannerItem:(id)arg1 ;
-(void)setPresentedBannerViewController:(CPSBannerViewController *)arg1 ;
-(NSTimer *)dimissTimer;
-(void)_dismissTimerFired:(id)arg1 ;
-(void)setDimissTimer:(NSTimer *)arg1 ;
-(NSTimer *)lastUserDismissedIdentifierResetTimer;
-(void)_resetLastUserDismissedIdentifierTimerFired:(id)arg1 ;
-(void)setLastUserDismissedIdentifierResetTimer:(NSTimer *)arg1 ;
-(void)setLastUserDismissedIdentifier:(NSUUID *)arg1 ;
-(void)bannerViewController:(id)arg1 requestsDismissalWithReason:(id)arg2 ;
-(void)_resetLastUserDismissedIdentifierTimer;
-(void)setBannerKitSource:(BNBannerSource *)arg1 ;
@end

