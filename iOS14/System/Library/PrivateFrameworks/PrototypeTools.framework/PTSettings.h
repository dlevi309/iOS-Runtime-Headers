/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _PTSettingsRestoreDefaultsObserver;
@class PTSettingsClassStructure, NSHashTable, NSString;

@interface PTSettings : NSObject <PTSettingsKeyPathObserver, NSCopying> {

	PTSettingsClassStructure* __classStructure;
	NSHashTable* __keyObservers;
	NSHashTable* __keyPathObservers;
	id<_PTSettingsRestoreDefaultsObserver> __restoreDefaultsObserver;
	BOOL __observationEnabled;
	BOOL __isObservingProperties;
	BOOL __isObservingChildren;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_supportsArchivingCustomClass:(Class)arg1 ;
+(BOOL)_supportsArchivingStructType:(id)arg1 ;
+(id)_archiveDictionaryForObject:(id)arg1 ofCustomClass:(Class)arg2 ;
+(id)_archiveDictionaryForValue:(id)arg1 ofStructType:(id)arg2 ;
+(id)_objectOfCustomClass:(Class)arg1 fromArchiveDictionary:(id)arg2 ;
+(id)_valueOfStructType:(id)arg1 fromArchiveDictionary:(id)arg2 ;
+(BOOL)ignoresKey:(id)arg1 ;
+(id)settingsControllerModule;
+(id)settingsFromArchiveDictionary:(id)arg1 ;
+(unsigned long long)settingsVersionNumber;
+(id)emptyArchiveForSettingsClassName:(id)arg1 ;
+(void)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 toArchive:(id)arg3 ;
-(id)archiveValueForKey:(id)arg1 ;
-(void)setDefaultValues;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id)drillDownSummary;
-(BOOL)_hasObservers;
-(BOOL)suppressesIntrospectionOnCustomerInstalls;
-(void)invalidateValueForKey:(id)arg1 ;
-(id)_allKeys;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(id)module;
-(void)applySettings:(id)arg1 ;
-(void)restoreFromArchiveDictionary:(id)arg1 ;
-(id)initWithDefaultValues;
-(void)restoreDefaultValues;
-(void)createChildren;
-(void)addKeyPathObserver:(id)arg1 ;
-(void)_setObservationEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addKeyObserver:(id)arg1 ;
-(void)removeKeyObserver:(id)arg1 ;
-(void)removeKeyPathObserver:(id)arg1 ;
-(void)dealloc;
-(id)archiveDictionary;
-(id)_initWithClassStructure:(id)arg1 ;
-(void)_createChildrenAndOutlets;
-(void)_sendWillRestoreDefaults;
-(void)_applyArchiveDictionary:(id)arg1 ;
-(void)_sendDidRestoreDefaults;
-(id)_createChildForKey:(id)arg1 ;
-(BOOL)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(void)_createChildren;
-(void)_createOutlets;
-(void)_validateChildren;
-(id)_ensureChildForKey:(id)arg1 ;
-(void)_stopObservingProperties;
-(void)_stopObservingChildren;
-(id)_initWithArchiveDictionary:(id)arg1 ;
-(id)_allChildAndLeafKeys;
-(void)_safeSetValue:(id)arg1 forLeafKey:(id)arg2 ;
-(void)_startOrStopObservingPropertiesAndChildren;
-(void)_sendKeyChanged:(id)arg1 ;
-(void)_sendKeyPathChanged:(id)arg1 ;
-(BOOL)_applyArchiveValue:(id)arg1 forLeafKey:(id)arg2 error:(id*)arg3 ;
-(id)_archiveValueForLeafKey:(id)arg1 ;
-(void)_enumerateChildrenWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_hasKeyPathObservers;
-(void)_startObservingProperties;
-(void)_startObservingChildren;
-(BOOL)_getChild:(id*)arg1 create:(BOOL)arg2 leafKey:(id*)arg3 forKeyPath:(id)arg4 error:(id*)arg5 ;
-(id)_keyForChild:(id)arg1 ;
-(void)_setRestoreDefaultsObserver:(id)arg1 ;
-(void)_enumerateOutletsWithBlock:(/*^block*/id)arg1 ;
-(id)_archiveValueForKeyPath:(id)arg1 ;
@end

