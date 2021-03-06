/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIDebugLogReport;

@interface _UIDeepestPreferredEnvironmentSearch : NSObject {

	BOOL _allowsFocusRestoration;
	_UIDebugLogReport* _debugReport;

}

@property (assign,nonatomic) BOOL allowsFocusRestoration;                  //@synthesize allowsFocusRestoration=_allowsFocusRestoration - In the implementation block
@property (nonatomic,retain) _UIDebugLogReport * debugReport;              //@synthesize debugReport=_debugReport - In the implementation block
-(id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg1 visitedFocusEnvironments:(id)arg2 ;
-(void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg1 ;
-(void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg1 result:(long long)arg2 ;
-(BOOL)allowsFocusRestoration;
-(id)deepestPreferredFocusableItemForEnvironment:(id)arg1 withRequest:(id)arg2 ;
-(void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg1 source:(id)arg2 ;
-(_UIDebugLogReport *)debugReport;
-(void)setAllowsFocusRestoration:(BOOL)arg1 ;
-(id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg1 ;
-(void)setDebugReport:(_UIDebugLogReport *)arg1 ;
-(void)_reportStartingSearch;
-(void)_reportSearchingEnvironment:(id)arg1 ;
-(void)_reportFoundFocusableItem:(id)arg1 ;
@end

