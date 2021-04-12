/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/CSStatusBarControlling.h>

@class NSNumber, _UILegibilitySettings, NSCountedSet, SBAppStatusBarSettingsAssertion, SBMainStatusBarContentAssertion, SBMainStatusBarStateProvider, NSString;

@interface SBDashBoardStatusBarController : NSObject <CSStatusBarControlling> {

	NSCountedSet* _statusBarHiddenReasons;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBAppStatusBarSettingsAssertion* _statusBarParametersAssertion;
	SBMainStatusBarContentAssertion* _statusBarContentAssertion;
	SBMainStatusBarStateProvider* _lazy_stateProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * statusBarAlpha; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) _UILegibilitySettings * statusBarLegibilitySettings; 
-(id)init;
-(void)dealloc;
-(long long)statusBarStyle;
-(NSNumber *)statusBarAlpha;
-(void)disableStatusBarItem:(int)arg1 requestor:(id)arg2 ;
-(_UILegibilitySettings *)statusBarLegibilitySettings;
-(void)setStatusBarAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3 ;
-(void)enableStatusBarTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3 ;
-(void)updateStatusBarTimeEnabled;
-(void)clearStatusBarParameters;
-(void)setStatusBarHidden:(BOOL)arg1 forReason:(id)arg2 ;
-(void)destroyFakeStatusBar:(id)arg1 ;
-(id)createFakeStatusBarWithReason:(id)arg1 withFrame:(CGRect)arg2 ;
-(id)effectiveStatusBarStyleRequestForAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3 ;
-(id)_stateProvider;
-(void)enableStatusBarItem:(int)arg1 requestor:(id)arg2 ;
@end

