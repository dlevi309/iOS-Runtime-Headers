/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/RERelevanceEnginePreferencesDelegate.h>

@protocol OS_dispatch_queue;
@class NSMapTable, RERelevanceEnginePreferences, NSObject, NSString;

@interface RERelevanceEnginePreferencesController : NSObject <RERelevanceEnginePreferencesDelegate> {

	NSMapTable* _preferences;
	RERelevanceEnginePreferences* _effectivePreferences;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) RERelevanceEnginePreferences * effectivePreferences; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(RERelevanceEnginePreferences *)effectivePreferences;
-(void)setPreferences:(id)arg1 forObject:(id)arg2 ;
-(void)removePreferencesForObject:(id)arg1 ;
-(void)relevanceEnginePreferencesDidUpdate:(id)arg1 ;
-(void)_resetEffectivePreferences;
@end

