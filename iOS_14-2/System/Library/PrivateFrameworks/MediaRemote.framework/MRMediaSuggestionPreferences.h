/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet, NSArray;

@interface MRMediaSuggestionPreferences : NSObject {

	/*^block*/id _userDisplayPreferencesDidChangeCallback;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _globalDisplayPreferencesForContexts;
	NSMutableDictionary* _disabledBundlesForContexts;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                           //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * bundlesDisabledInAllContexts; 
@property (nonatomic,retain) NSMutableDictionary * globalDisplayPreferencesForContexts;              //@synthesize globalDisplayPreferencesForContexts=_globalDisplayPreferencesForContexts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * disabledBundlesForContexts;                       //@synthesize disabledBundlesForContexts=_disabledBundlesForContexts - In the implementation block
@property (nonatomic,copy) id userDisplayPreferencesDidChangeCallback;                               //@synthesize userDisplayPreferencesDidChangeCallback=_userDisplayPreferencesDidChangeCallback - In the implementation block
@property (nonatomic,readonly) NSArray * allContexts; 
-(id)dictionaryRepresentation;
-(void)_registerForNotifications;
-(id)init;
-(void)_updateGlobalToggleState;
-(void)_notifyListener;
-(id)userDisplayPreferencesDidChangeCallback;
-(BOOL)suggestionsDisabledInContext:(id)arg1 ;
-(id)disabledBundleIdentifiersInContext:(id)arg1 ;
-(void)setUserDisplayPreferencesDidChangeCallback:(id)arg1 ;
-(void)setGlobalDisplayPreferencesForContexts:(NSMutableDictionary *)arg1 ;
-(void)setDisabledBundlesForContexts:(NSMutableDictionary *)arg1 ;
-(NSArray *)allContexts;
-(id)description;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSMutableDictionary *)globalDisplayPreferencesForContexts;
-(NSMutableDictionary *)disabledBundlesForContexts;
-(NSMutableSet *)bundlesDisabledInAllContexts;
-(void)dealloc;
@end

