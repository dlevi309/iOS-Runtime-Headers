/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKit/UIStatusBarManager.h>

@protocol BSInvalidatable;
@class NSHashTable, NSMutableOrderedSet, NSMutableDictionary, NSPointerArray, SBAppStatusBarSettings, NSMutableSet, NSString;

@interface SBAppStatusBarAssertionManager : NSObject <BSDescriptionProviding, UIStatusBarManager> {

	NSHashTable* _disableAlphaChangeAssertions;
	NSHashTable* _disableUserInteractionChangeAssertions;
	NSMutableOrderedSet* _windowLevelOverrideReasons;
	NSMutableDictionary* _windowLevelOverrideMap;
	NSPointerArray* _statusBarSettingsAssertionsByLevel[11];
	SBAppStatusBarSettings* _currentStatusBarSettings;
	NSMutableDictionary* _edgeInsetsDictionary;
	NSMutableSet* _activeLayoutLayers;
	NSMutableDictionary* _orientationWindowDictionary;
	double _defaultWindowLevel;
	id<BSInvalidatable> _stateCaptureAssertion;
	NSHashTable* _observers;
	BOOL _changingStatusBarStyle;
	BOOL _changingStatusBarAlpha;
	unsigned long long _statusBarAlphaAnimationCount;

}

@property (nonatomic,readonly) UIEdgeInsets statusBarEdgeInsets; 
@property (nonatomic,readonly) unsigned long long topmostActiveLayoutLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isStatusBarHidden;
-(int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3 ;
-(BOOL)statusBar:(id)arg1 shouldRequestStyleAttributes:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(BOOL)statusBar:(id)arg1 shouldSetAlpha:(double)arg2 ;
-(BOOL)statusBar:(id)arg1 shouldRequestStyle:(long long)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(void)setDefaultWindowLevel:(double)arg1 ;
-(id)orientationWindowForLayoutLayer:(unsigned long long)arg1 ;
-(void)setOrientationWindow:(id)arg1 forStatusBarLayoutLayer:(unsigned long long)arg2 ;
-(BOOL)statusBarOrientationShouldFollowWindow:(id)arg1 ;
-(id)effectiveStatusBarStyleRequestForLevel:(unsigned long long)arg1 ;
-(void)setStatusBarEdgeInsets:(UIEdgeInsets)arg1 forLayoutLayer:(unsigned long long)arg2 ;
-(UIEdgeInsets)statusBarEdgeInsets;
-(id)currentEffectiveStatusBarStyleRequest;
-(void)addActiveLayoutLayer:(unsigned long long)arg1 ;
-(void)removeActiveLayoutLayer:(unsigned long long)arg1 ;
-(void)_updateWindowLevel;
-(id)statusBarSettingsForLevel:(unsigned long long)arg1 ;
-(id)effectiveStatusBarStyleRequestWithSettings:(id)arg1 ;
-(unsigned long long)topmostActiveLayoutLayer;
-(void)_addStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2 ;
-(void)_modifiedStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2 ;
-(void)_removeStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2 ;
-(id)currentStatusBarSettings;
-(void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1 ;
-(void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1 ;
-(void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1 ;
-(void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1 ;
-(void)_cleanUpAllStatusBarSettingsAssertions;
-(void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(/*^block*/id)arg2 ;
-(void)_updateStatusBarOrientationForTopMostActiveLayer;
-(void)_applyEdgeInsetsToStatusBar;
-(id)_styleRequestForSettings:(id)arg1 ;
-(void)_resolveEffectiveStatusBarStyleForSettings:(id)arg1 ;
-(void)_enumerateAssertionsToLevel:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_statusBarUpdatedFromSettings:(id)arg1 toSettings:(id)arg2 withAnimations:(id)arg3 ;
-(void)_evaluateSettingsWithStyleAnimations:(id)arg1 ;
-(id)_descriptionForPropertyWithAssertions:(id)arg1 ;
-(void)setStatusBarUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isStatusBarUserInteractionEnabled;
-(void)setWindowLevel:(double)arg1 forOverrideReason:(id)arg2 ;
-(void)removeWindowLevelOverrideReason:(id)arg1 ;
-(void)_addStatusBarSettingsAssertion:(id)arg1 ;
-(void)_removeStatusBarSettingsAssertion:(id)arg1 ;
-(void)_modifiedStatusBarSettingsAssertion:(id)arg1 ;
@end

