/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSDate, _WKUserInitiatedAction, NSTimer;

@interface WBSURLSpoofingMitigator : NSObject {

	NSDate* _dateOfStartOfLastProvisionalNavigation;
	unsigned long long _recentlyInterruptedNavigationCount;
	_WKUserInitiatedAction* _userInitiatedAction;
	NSTimer* _timerForRevertingToCommittedURL;
	BOOL _UIShouldReflectCommittedURLInsteadOfCurrentURL;
	long long _navigationSource;

}

@property (nonatomic,readonly) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;              //@synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL - In the implementation block
@property (assign,nonatomic) long long navigationSource;                                         //@synthesize navigationSource=_navigationSource - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
-(BOOL)UIShouldReflectCommittedURLInsteadOfCurrentURL;
-(void)didStartProvisionalNavigationWithUserInitiatedAction:(id)arg1 ;
-(void)didCommitNavigation;
-(void)setNavigationSource:(long long)arg1 ;
-(void)didFailProvisionalNavigationWithError:(id)arg1 ;
-(void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)arg1 ;
-(void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
-(void)_stopTrackingInterruptedProvisionalNavigations;
-(long long)navigationSource;
@end

