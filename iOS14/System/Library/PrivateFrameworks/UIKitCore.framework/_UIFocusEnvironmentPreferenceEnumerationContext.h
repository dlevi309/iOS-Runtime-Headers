/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIDebugLogReport *)debugReport;
-(NSArray *)preferredEnvironments;
-(id<UIFocusEnvironment>)preferringEnvironment;
-(BOOL)prefersNothingFocused;
-(BOOL)isPreferredByItself;
-(BOOL)isLeafPreference;
-(BOOL)isPrimaryPreference;
-(id<UIFocusEnvironment>)environment;

@end


@protocol UIFocusEnvironment, _UIFocusEnvironmentPreferenceEnumerationContextDelegate;
@class NSArray, _UIDebugLogReport, UIFocusSystem, NSMutableArray, NSHashTable, NSMapTable, NSString;

@interface _UIFocusEnvironmentPreferenceEnumerationContext : NSObject <_UIFocusEnvironmentPreferenceEnumerationContext> {

	UIFocusSystem* _focusSystem;
	id<UIFocusEnvironment> _preferredSubtree;
	NSMutableArray* _visitedEnvironmentStack;
	id<UIFocusEnvironment> _lastPrimaryPreferredEnvironment;
	NSArray* _cachedPreferredEnvironments;
	NSHashTable* _allVisitedEnvironments;
	BOOL _hasResolvedPreferredFocusEnvironments;
	BOOL _hasNeverPoppedInPreferredSubtree;
	id<UIFocusEnvironment> _preferredSubtreeEntryPoint;
	NSMapTable* _preferredEnvironmentsMap;
	BOOL _cachedPrefersNothingFocused;
	id<UIFocusEnvironment> _environment;
	id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate> _delegate;
	_UIDebugLogReport* _debugReport;

}

@property (assign,nonatomic,__weak) id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UIDebugLogReport * debugReport;                                                          //@synthesize debugReport=_debugReport - In the implementation block
@property (getter=isInPreferredSubtree,nonatomic,readonly) BOOL inPreferredSubtree; 
@property (nonatomic,readonly) id<UIFocusEnvironment> environment;                                                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL isPrimaryPreference; 
@property (nonatomic,readonly) BOOL isLeafPreference; 
@property (getter=isPreferredByItself,nonatomic,readonly) BOOL preferredByItself; 
@property (nonatomic,readonly) BOOL prefersNothingFocused;                                                             //@synthesize cachedPrefersNothingFocused=_cachedPrefersNothingFocused - In the implementation block
@property (nonatomic,readonly) id<UIFocusEnvironment> preferringEnvironment; 
@property (nonatomic,readonly) NSArray * preferredEnvironments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate>)delegate;
-(void)setDelegate:(id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate>)arg1 ;
-(_UIDebugLogReport *)debugReport;
-(void)setDebugReport:(_UIDebugLogReport *)arg1 ;
-(NSArray *)preferredEnvironments;
-(id<UIFocusEnvironment>)preferringEnvironment;
-(BOOL)prefersNothingFocused;
-(void)_resolvePreferredFocusEnvironments;
-(BOOL)isPreferredByItself;
-(id)_inferPreferencesForEnvironment:(id)arg1 ;
-(BOOL)_isAllowedToPreferEnvironment:(id)arg1 ;
-(BOOL)isLeafPreference;
-(BOOL)isInPreferredSubtree;
-(void)_reportInferredPreferredFocusEnvironment:(id)arg1 ;
-(void)_invalidatePreferredEnvironments;
-(BOOL)isPrimaryPreference;
-(id)initWithFocusEnvironment:(id)arg1 enumerationMode:(long long)arg2 ;
-(void)pushEnvironment:(id)arg1 ;
-(id<UIFocusEnvironment>)environment;
-(void)popEnvironment;
@end

