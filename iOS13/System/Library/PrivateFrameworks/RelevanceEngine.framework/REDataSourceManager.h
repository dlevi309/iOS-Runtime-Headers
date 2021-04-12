/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceEngineSubsystem.h>
#import <libobjc.A.dylib/REDataSourceManagerProperties.h>

@protocol REDataSourceManagerObserver;
@class NSSet, NSArray, NSMutableArray, NSDictionary, REConcurrentDictionary, REDataSourceLoader;

@interface REDataSourceManager : RERelevanceEngineSubsystem <REDataSourceManagerProperties> {

	NSMutableArray* _dataSourceControllers;
	unsigned long long _dataSourceState;
	BOOL _locationAllowed;
	NSSet* _disabledDataSources;
	NSDictionary* _identifierDataSourceMap;
	NSDictionary* _identifierApplicationIdentifierMap;
	NSDictionary* _identifierOperatingSystemVersionMap;
	NSDictionary* _unmanagedDataSourcesMap;
	NSSet* _elementGroupSupportingConfigurations;
	REConcurrentDictionary* _elementGroupMap;
	BOOL _ignoreAppInstallation;
	BOOL _completedFirstElementLoad;
	REDataSourceLoader* _loader;
	NSSet* _availableDataSourceIdentifiers;
	NSSet* _currentDataSourceIdentifiers;
	NSArray* _currentDataSources;
	id<REDataSourceManagerObserver> _delegate;

}

@property (retain) NSSet * availableDataSourceIdentifiers;                                                      //@synthesize availableDataSourceIdentifiers=_availableDataSourceIdentifiers - In the implementation block
@property (retain) NSSet * currentDataSourceIdentifiers;                                                        //@synthesize currentDataSourceIdentifiers=_currentDataSourceIdentifiers - In the implementation block
@property (retain) NSArray * currentDataSources;                                                                //@synthesize currentDataSources=_currentDataSources - In the implementation block
@property (nonatomic,readonly) REDataSourceLoader * loader;                                                     //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) NSSet * unrestirctedDataSourceIdentifiers; 
@property (nonatomic,__weak,readonly) id<REDataSourceManagerObserver> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (getter=hasCompletedFirstElementLoad,nonatomic,readonly) BOOL completedFirstElementLoad;              //@synthesize completedFirstElementLoad=_completedFirstElementLoad - In the implementation block
@property (nonatomic,readonly) NSSet * disabledDataSources; 
@property (nonatomic,readonly) NSArray * dataSourceControllers; 
+(id)_prioritizedDataSourceClasses;
+(BOOL)_isPrioritizedDataSourceClass:(Class)arg1 ;
-(void)dealloc;
-(id<REDataSourceManagerObserver>)delegate;
-(void)pause;
-(void)resume;
-(REDataSourceLoader *)loader;
-(void)_updatePreferences;
-(void)enumerateElementDataSourceControllers:(/*^block*/id)arg1 ;
-(id)initWithRelevanceEngine:(id)arg1 dataSourceLoader:(id)arg2 withDelegate:(id)arg3 ;
-(NSSet *)availableDataSourceIdentifiers;
-(NSSet *)unrestirctedDataSourceIdentifiers;
-(NSArray *)currentDataSources;
-(Class)classForDataSourceIdentifier:(id)arg1 ;
-(SCD_Struct_RE2)minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1 ;
-(id)elementGroupForIdentifier:(id)arg1 ;
-(void)setAvailableDataSourceIdentifiers:(NSSet *)arg1 ;
-(void)setCurrentDataSourceIdentifiers:(NSSet *)arg1 ;
-(void)_handleApplicationStateChange;
-(void)_queue_availableDataSourcesDidChange;
-(NSSet *)currentDataSourceIdentifiers;
-(BOOL)_isApplicationRemovedOrRestrictedForIdentifier:(id)arg1 ;
-(void)_queue_updateAvailableDataSourceIdentifiers;
-(void)_queue_unloadDataSourceWithIdentifier:(id)arg1 ;
-(void)_queue_loadDataSourceWithIdentifier:(id)arg1 ;
-(void)setCurrentDataSources:(NSArray *)arg1 ;
-(NSSet *)disabledDataSources;
-(NSArray *)dataSourceControllers;
-(BOOL)hasCompletedFirstElementLoad;
@end

