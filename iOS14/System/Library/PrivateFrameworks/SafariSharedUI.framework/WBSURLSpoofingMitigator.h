/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSDate, _WKUserInitiatedAction, NSTimer;

@interface WBSURLSpoofingMitigator : NSObject {

	NSDate* _dateOfLastSuspiciousProvisionalNavigationInterruption;
	unsigned long long _recentlyInterruptedNavigationCount;
	_WKUserInitiatedAction* _userInitiatedAction;
	NSTimer* _timerForRevertingToCommittedURL;
	BOOL _hasCommittedChromeInitiatedLoad;
	BOOL _UIShouldReflectCommittedURLInsteadOfCurrentURL;
	long long _navigationSource;

}

@property (nonatomic,readonly) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;              //@synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL - In the implementation block
@property (assign,nonatomic) long long navigationSource;                                         //@synthesize navigationSource=_navigationSource - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
-(void)setNavigationSource:(long long)arg1 ;
-(void)didFailProvisionalNavigationWithError:(id)arg1 ;
-(void)didStartProvisionalNavigationWithUserInitiatedAction:(id)arg1 ;
-(void)willStartNewBrowserChromeInitiatedNavigation;
-(void)didCommitNavigation;
-(BOOL)UIShouldReflectCommittedURLInsteadOfCurrentURL;
-(void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)arg1 ;
-(void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
-(void)_stopTrackingInterruptedProvisionalNavigations;
-(long long)navigationSource;
@end

