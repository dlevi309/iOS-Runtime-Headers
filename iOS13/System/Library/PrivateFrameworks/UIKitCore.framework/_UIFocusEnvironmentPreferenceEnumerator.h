/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusEnvironmentPreferenceEnumerationContextDelegate.h>

@class _UIDebugLogReport, NSString;

@interface _UIFocusEnvironmentPreferenceEnumerator : NSObject <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> {

	BOOL _allowsInferringPreferences;
	/*^block*/id _didVisitAllPreferencesForEnvironmentHandler;
	/*^block*/id _shouldInferPreferenceForEnvironmentHandler;
	_UIDebugLogReport* _debugReport;

}

@property (nonatomic,copy) id didVisitAllPreferencesForEnvironmentHandler;              //@synthesize didVisitAllPreferencesForEnvironmentHandler=_didVisitAllPreferencesForEnvironmentHandler - In the implementation block
@property (assign,nonatomic) BOOL allowsInferringPreferences;                           //@synthesize allowsInferringPreferences=_allowsInferringPreferences - In the implementation block
@property (nonatomic,copy) id shouldInferPreferenceForEnvironmentHandler;               //@synthesize shouldInferPreferenceForEnvironmentHandler=_shouldInferPreferenceForEnvironmentHandler - In the implementation block
@property (nonatomic,retain) _UIDebugLogReport * debugReport;                           //@synthesize debugReport=_debugReport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)arg1 ;
-(_UIDebugLogReport *)debugReport;
-(void)setDebugReport:(_UIDebugLogReport *)arg1 ;
-(void)enumeratePreferencesForEnvironment:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)didVisitAllPreferencesForEnvironmentHandler;
-(void)setDidVisitAllPreferencesForEnvironmentHandler:(id)arg1 ;
-(BOOL)allowsInferringPreferences;
-(void)setAllowsInferringPreferences:(BOOL)arg1 ;
-(id)shouldInferPreferenceForEnvironmentHandler;
-(void)setShouldInferPreferenceForEnvironmentHandler:(id)arg1 ;
@end

