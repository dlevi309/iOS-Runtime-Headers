/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSSet, NSUserDefaults, SGContentAdmissionKVOObserver;

@interface SGContentAdmission : NSObject {

	NSSet* _disabledBundleIdentifiers;
	NSUserDefaults* _defaults;
	SGContentAdmissionKVOObserver* _kvoObserver;

}
+(void)initialize;
+(id)sharedInstance;
+(void)clearTestSettings;
+(BOOL)isSupportedSearchableItemBundleIdentifier:(id)arg1 ;
+(void)migrateForTests;
+(BOOL)shouldAdmitContentFromBundleIdentifier:(id)arg1 ;
+(void)disableBundleIdentifier:(id)arg1 ;
-(void)_migrateIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_clearTestSettings;
-(id)init;
-(void)_disableBundleIdentifier:(id)arg1 ;
-(void)_refreshDisabledBundleIds;
-(BOOL)_shouldAdmitContentFromBundleIdentifier:(id)arg1 ;
@end

