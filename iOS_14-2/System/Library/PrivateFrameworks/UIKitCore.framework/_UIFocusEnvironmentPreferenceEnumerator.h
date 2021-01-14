/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusEnvironmentPreferenceEnumerationContextDelegate.h>

@class _UIDebugLogReport, NSString;

@interface _UIFocusEnvironmentPreferenceEnumerator : NSObject <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> {

	BOOL _allowsInferringPreferences;
	long long _enumerationMode;
	/*^block*/id _didVisitAllPreferencesForEnvironmentHandler;
	/*^block*/id _shouldInferPreferenceForEnvironmentHandler;
	_UIDebugLogReport* _debugReport;

}

@property (nonatomic,readonly) long long enumerationMode;                               //@synthesize enumerationMode=_enumerationMode - In the implementation block
@property (nonatomic,copy) id didVisitAllPreferencesForEnvironmentHandler;              //@synthesize didVisitAllPreferencesForEnvironmentHandler=_didVisitAllPreferencesForEnvironmentHandler - In the implementation block
@property (assign,nonatomic) BOOL allowsInferringPreferences;                           //@synthesize allowsInferringPreferences=_allowsInferringPreferences - In the implementation block
@property (nonatomic,copy) id shouldInferPreferenceForEnvironmentHandler;               //@synthesize shouldInferPreferenceForEnvironmentHandler=_shouldInferPreferenceForEnvironmentHandler - In the implementation block
@property (nonatomic,retain) _UIDebugLogReport * debugReport;                           //@synthesize debugReport=_debugReport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(_UIDebugLogReport *)debugReport;
-(void)setDebugReport:(_UIDebugLogReport *)arg1 ;
-(BOOL)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)arg1 ;
-(long long)enumerationMode;
-(id)initWithEnumerationMode:(long long)arg1 ;
-(BOOL)allowsInferringPreferences;
-(void)enumeratePreferencesForEnvironment:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)didVisitAllPreferencesForEnvironmentHandler;
-(void)setDidVisitAllPreferencesForEnvironmentHandler:(id)arg1 ;
-(void)setAllowsInferringPreferences:(BOOL)arg1 ;
-(id)shouldInferPreferenceForEnvironmentHandler;
-(void)setShouldInferPreferenceForEnvironmentHandler:(id)arg1 ;
@end

