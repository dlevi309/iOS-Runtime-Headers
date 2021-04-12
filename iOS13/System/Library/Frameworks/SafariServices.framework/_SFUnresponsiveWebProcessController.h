/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSTimer, NSMutableArray, _SFBrowserContentViewController, UIViewController;

@interface _SFUnresponsiveWebProcessController : NSObject {

	NSTimer* _webProcessWatchdogTimer;
	NSMutableArray* _tapToRadarRecords;
	_SFBrowserContentViewController* _contentViewController;
	BOOL _shouldIgnoreDidBecomeResponsive;
	UIViewController* _activeBrowserContentViewController;

}

@property (assign,nonatomic) BOOL shouldIgnoreDidBecomeResponsive;                                      //@synthesize shouldIgnoreDidBecomeResponsive=_shouldIgnoreDidBecomeResponsive - In the implementation block
@property (nonatomic,readonly) BOOL supportsTapToRadar; 
@property (assign,nonatomic,__weak) UIViewController * activeBrowserContentViewController;              //@synthesize activeBrowserContentViewController=_activeBrowserContentViewController - In the implementation block
+(id)sharedController;
-(void)setShouldIgnoreDidBecomeResponsive:(BOOL)arg1 ;
-(BOOL)supportsTapToRadar;
-(void)recordURLForTapToRadar:(id)arg1 hostAppIdentifier:(id)arg2 ;
-(void)_webProcessWatchdogTimerFired:(id)arg1 ;
-(void)_promptTapToRadar:(/*^block*/id)arg1 ;
-(void)_tapToRadar;
-(void)unscheduleWatchdogTimer;
-(void)scheduleWatchdogTimerForContentViewController:(id)arg1 ;
-(BOOL)shouldIgnoreDidBecomeResponsive;
-(UIViewController *)activeBrowserContentViewController;
-(void)setActiveBrowserContentViewController:(UIViewController *)arg1 ;
@end

