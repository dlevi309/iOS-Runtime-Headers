/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSNumber * statusBarAlpha; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) _UILegibilitySettings * statusBarLegibilitySettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)effectiveStatusBarStyleRequestForAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3 ;
-(id)init;
-(id)createFakeStatusBarWithReason:(id)arg1 withFrame:(CGRect)arg2 ;
-(void)setStatusBarAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3 ;
-(void)destroyFakeStatusBar:(id)arg1 ;
-(NSNumber *)statusBarAlpha;
-(id)_stateProvider;
-(void)enableStatusBarTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3 ;
-(void)clearStatusBarParameters;
-(void)enableStatusBarItem:(int)arg1 requestor:(id)arg2 ;
-(void)updateStatusBarTimeEnabled;
-(long long)statusBarStyle;
-(_UILegibilitySettings *)statusBarLegibilitySettings;
-(void)dealloc;
-(void)setStatusBarHidden:(BOOL)arg1 forReason:(id)arg2 ;
-(void)disableStatusBarItem:(int)arg1 requestor:(id)arg2 ;
@end

