/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@protocol _UIActivityHelperDelegate;
@class NSString, _UIActivityApplicationExtensionDiscovery, NSArray;

@interface _UIActivityHelper : NSObject {

	BOOL _primed;
	id<_UIActivityHelperDelegate> _delegate;
	NSString* _sessionID;
	_UIActivityApplicationExtensionDiscovery* _applicationExtensionDiscovery;
	NSArray* _cachedBuiltinActivities;
	/*^block*/id _fetchShortcutsBlock;

}

@property (nonatomic,__weak,readonly) id<_UIActivityHelperDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * sessionID;                                                                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) _UIActivityApplicationExtensionDiscovery * applicationExtensionDiscovery;              //@synthesize applicationExtensionDiscovery=_applicationExtensionDiscovery - In the implementation block
@property (nonatomic,readonly) NSArray * cachedBuiltinActivities;                                                   //@synthesize cachedBuiltinActivities=_cachedBuiltinActivities - In the implementation block
@property (assign,nonatomic) BOOL primed;                                                                           //@synthesize primed=_primed - In the implementation block
@property (nonatomic,copy) id fetchShortcutsBlock;                                                                  //@synthesize fetchShortcutsBlock=_fetchShortcutsBlock - In the implementation block
+(id)builtinActivityClasses;
-(id<_UIActivityHelperDelegate>)delegate;
-(NSString *)sessionID;
-(id)initWithDelegate:(id)arg1 sessionID:(id)arg2 fetchShortcutsBlock:(/*^block*/id)arg3 ;
-(void)preheatAvailableActivitiesForMatchingContext:(id)arg1 ;
-(id)orderedAvailableActivitiesForMatchingContext:(id)arg1 ;
-(id)fetchShortcutsBlock;
-(void)primeWithDiscoveryContext:(id)arg1 ;
-(void)setFetchShortcutsBlock:(id)arg1 ;
-(void)setApplicationExtensionDiscovery:(_UIActivityApplicationExtensionDiscovery *)arg1 ;
-(void)setPrimed:(BOOL)arg1 ;
-(NSArray *)cachedBuiltinActivities;
-(BOOL)primed;
-(_UIActivityApplicationExtensionDiscovery *)applicationExtensionDiscovery;
-(id)_activitiesByApplyingBeforeTypePinningToActivities:(id)arg1 activitiesToBeforeTypePin:(id)arg2 ;
-(void)_enumerateAvailableActivitiesForMatchingContext:(id)arg1 intoMatchingResults:(id)arg2 matchingResultsUpdateBlock:(/*^block*/id)arg3 enumerateActivityBlock:(/*^block*/id)arg4 ;
-(id)activitiesByOrderingActivities:(id)arg1 applyDefaultOrdering:(BOOL)arg2 applyBeforeTypePinning:(BOOL)arg3 activityTypeOrdering:(id)arg4 ;
-(id)_activitiesByApplyingDefaultOrdering:(id)arg1 ;
-(id)_activitiesByTypeOrderingActivities:(id)arg1 activityTypeOrdering:(id)arg2 ;
-(id)_activitiesByApplyingFavoriteOrderingToActivities:(id)arg1 favoriteActivityTypes:(id)arg2 ;
-(id)_activitiesByDuetOrderingActivities:(id)arg1 ;
-(id)_defaultOrderingDescriptorForActivity:(id)arg1 ;
-(id)_defaultSortOrderForBuiltInElevatedActivity:(id)arg1 ;
-(id)_defaultSortItemForBuiltinActivity:(id)arg1 ;
-(id)_defaultSortOrderForExtensionBasedActivity:(id)arg1 ;
-(id)_defaultSortOrderForApplicationDefinedActivity:(id)arg1 ;
-(id)_defaultSortOrderForOpenInAppActivity:(id)arg1 ;
-(id)_defaultSortOrderForShortcutActivity:(id)arg1 ;
-(id)_defaultSortOrderForOtherActivity:(id)arg1 ;
@end

