/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusEnvironmentPreferenceEnumerationContext.h>
@class NSArray, _UIDebugLogReport;


@protocol _UIFocusEnvironmentPreferenceEnumerationContext <NSObject>
@property (nonatomic,readonly) id<UIFocusEnvironment> environment; 
@property (nonatomic,readonly) BOOL isPrimaryPreference; 
@property (nonatomic,readonly) BOOL isLeafPreference; 
@property (getter=isPreferredByItself,nonatomic,readonly) BOOL preferredByItself; 
@property (nonatomic,readonly) BOOL prefersNothingFocused; 
@property (nonatomic,readonly) id<UIFocusEnvironment> preferringEnvironment; 
@property (nonatomic,readonly) NSArray * preferredEnvironments; 
@property (nonatomic,readonly) _UIDebugLogReport * debugReport; 
@required
-(id<UIFocusEnvironment>)environment;
-(NSArray *)preferredEnvironments;
-(id<UIFocusEnvironment>)preferringEnvironment;
-(BOOL)isPreferredByItself;
-(BOOL)isPrimaryPreference;
-(BOOL)isLeafPreference;
-(BOOL)prefersNothingFocused;
-(_UIDebugLogReport *)debugReport;

@end


@protocol UIFocusEnvironment, _UIFocusEnvironmentPreferenceEnumerationContextDelegate;
@class NSArray, _UIDebugLogReport, UIFocusSystem, NSMutableArray, NSHashTable, NSString;

@interface _UIFocusEnvironmentPreferenceEnumerationContext : NSObject <_UIFocusEnvironmentPreferenceEnumerationContext> {

	UIFocusSystem* _focusSystem;
	NSMutableArray* _visitedEnvironmentStack;
	id<UIFocusEnvironment> _lastPrimaryPreferredEnvironment;
	NSArray* _cachedPreferredEnvironments;
	NSHashTable* _allVisitedEnvironments;
	BOOL _hasResolvedPreferredFocusEnvironments;
	BOOL _hasNeverPopped;
	BOOL _cachedPrefersNothingFocused;
	id<UIFocusEnvironment> _environment;
	id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate> _delegate;
	_UIDebugLogReport* _debugReport;

}

@property (assign,nonatomic,__weak) id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UIDebugLogReport * debugReport;                                                          //@synthesize debugReport=_debugReport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIFocusEnvironment> environment;                                                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL isPrimaryPreference; 
@property (nonatomic,readonly) BOOL isLeafPreference; 
@property (getter=isPreferredByItself,nonatomic,readonly) BOOL preferredByItself; 
@property (nonatomic,readonly) BOOL prefersNothingFocused;                                                             //@synthesize cachedPrefersNothingFocused=_cachedPrefersNothingFocused - In the implementation block
@property (nonatomic,readonly) id<UIFocusEnvironment> preferringEnvironment; 
@property (nonatomic,readonly) NSArray * preferredEnvironments; 
-(id)init;
-(id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate>)delegate;
-(void)setDelegate:(id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate>)arg1 ;
-(id<UIFocusEnvironment>)environment;
-(NSArray *)preferredEnvironments;
-(id<UIFocusEnvironment>)preferringEnvironment;
-(void)_resolvePreferredFocusEnvironments;
-(BOOL)isPreferredByItself;
-(id)_inferPreferencesForEnvironment:(id)arg1 ;
-(BOOL)_isAllowedToPreferEnvironment:(id)arg1 ;
-(void)_reportInferredPreferredFocusEnvironment:(id)arg1 ;
-(void)_invalidatePreferredEnvironments;
-(BOOL)isPrimaryPreference;
-(BOOL)isLeafPreference;
-(BOOL)prefersNothingFocused;
-(_UIDebugLogReport *)debugReport;
-(id)initWithInitialFocusEnvironment:(id)arg1 ;
-(void)pushEnvironment:(id)arg1 ;
-(void)popEnvironment;
-(void)setDebugReport:(_UIDebugLogReport *)arg1 ;
@end

