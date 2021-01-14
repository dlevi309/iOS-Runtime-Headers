/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PrototypeTools/PTSettings.h>

@class NSMutableSet, NSSet, NSArray;

@interface PXSettings : PTSettings {

	NSMutableSet* _archivedSettings;
	NSSet* _cachedTransientProperties;
	BOOL _hasUserDefaultsOverrides;
	long long _version;
	NSArray* _reparentedRootSettings;

}

@property (nonatomic,readonly) PXSettings * parentSettings; 
@property (nonatomic,readonly) NSArray * reparentedRootSettings;              //@synthesize reparentedRootSettings=_reparentedRootSettings - In the implementation block
@property (nonatomic,readonly) BOOL hasUserDefaultsOverrides; 
@property (nonatomic,readonly) BOOL hasDefaultValues; 
@property (assign,nonatomic) long long version;                               //@synthesize version=_version - In the implementation block
+(id)sharedInstance;
+(BOOL)ignoresKey:(id)arg1 ;
+(id)_signatureDictionaryWithDefaultSettings:(id*)arg1 ;
+(void)setSuiteName:(id)arg1 ;
+(id)transientProperties;
+(id)createSharedInstance;
+(id)_defaultsKey;
+(id)suiteName;
+(id)_userDefaults;
-(PXSettings *)parentSettings;
-(id)archiveValueForKey:(id)arg1 ;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(void)performPostSaveActions;
-(void)save;
-(BOOL)suppressesIntrospectionOnCustomerInstalls;
-(BOOL)_isTransientKey:(id)arg1 ;
-(BOOL)_setOverrideValuesFromDictionary:(id)arg1 ;
-(BOOL)hasDefaultValues;
-(void)_willArchiveSettings:(id)arg1 ;
-(void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)arg1 andArchivedDefaultValues:(id)arg2 defaultSettings:(id)arg3 ;
-(void)_validateArchivableValue:(id)arg1 forKey:(id)arg2 ;
-(void)addDeferredKeyPathObserver:(id)arg1 ;
-(void)clearManualOverrides;
-(BOOL)hasUserDefaultsOverrides;
-(void)addDeferredKeyObserver:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)restoreDefaultValues;
-(void)defaultValueDidChangeForKey:(id)arg1 ;
-(void)addKeyPathObserver:(id)arg1 ;
-(long long)version;
-(void)addKeyObserver:(id)arg1 ;
-(void)removeKeyObserver:(id)arg1 ;
-(NSArray *)reparentedRootSettings;
-(void)removeKeyPathObserver:(id)arg1 ;
-(id)archiveDictionary;
@end

