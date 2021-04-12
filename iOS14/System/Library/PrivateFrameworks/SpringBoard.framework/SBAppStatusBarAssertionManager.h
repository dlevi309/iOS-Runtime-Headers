/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(void)setDefaultWindowLevel:(double)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_modifiedStatusBarSettingsAssertion:(id)arg1 ;
-(id)init;
-(BOOL)isStatusBarUserInteractionEnabled;
-(void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(/*^block*/id)arg2 ;
-(void)setStatusBarUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)statusBar:(id)arg1 shouldRequestStyle:(long long)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)orientationWindowForLayoutLayer:(unsigned long long)arg1 ;
-(void)_removeStatusBarSettingsAssertion:(id)arg1 ;
-(void)setWindowLevel:(double)arg1 forOverrideReason:(id)arg2 ;
-(void)addActiveLayoutLayer:(unsigned long long)arg1 ;
-(BOOL)statusBar:(id)arg1 shouldSetAlpha:(double)arg2 ;
-(void)_statusBarUpdatedFromSettings:(id)arg1 toSettings:(id)arg2 withAnimations:(id)arg3 ;
-(unsigned long long)topmostActiveLayoutLayer;
-(void)_removeStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2 ;
-(void)setOrientationWindow:(id)arg1 forStatusBarLayoutLayer:(unsigned long long)arg2 ;
-(id)_styleRequestForSettings:(id)arg1 ;
-(void)_addStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2 ;
-(NSString *)description;
-(void)_updateStatusBarOrientationForTopMostActiveLayer;
-(UIEdgeInsets)statusBarEdgeInsets;
-(id)effectiveStatusBarStyleRequestForLevel:(unsigned long long)arg1 ;
-(id)statusBarSettingsForLevel:(unsigned long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_updateWindowLevel;
-(void)_cleanUpAllStatusBarSettingsAssertions;
-(int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3 ;
-(BOOL)isStatusBarHidden;
-(void)removeWindowLevelOverrideReason:(id)arg1 ;
-(void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1 ;
-(void)_addStatusBarSettingsAssertion:(id)arg1 ;
-(void)_resolveEffectiveStatusBarStyleForSettings:(id)arg1 ;
-(void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1 ;
-(id)currentStatusBarSettings;
-(id)currentEffectiveStatusBarStyleRequest;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)statusBar:(id)arg1 shouldRequestStyleAttributes:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(void)removeActiveLayoutLayer:(unsigned long long)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)statusBarOrientationShouldFollowWindow:(id)arg1 ;
-(void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1 ;
-(void)_evaluateSettingsWithStyleAnimations:(id)arg1 ;
-(void)_modifiedStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2 ;
-(id)effectiveStatusBarStyleRequestWithSettings:(id)arg1 ;
-(void)_applyEdgeInsetsToStatusBar;
-(id)_descriptionForPropertyWithAssertions:(id)arg1 ;
-(void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1 ;
-(void)_enumerateAssertionsToLevel:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setStatusBarEdgeInsets:(UIEdgeInsets)arg1 forLayoutLayer:(unsigned long long)arg2 ;
@end

