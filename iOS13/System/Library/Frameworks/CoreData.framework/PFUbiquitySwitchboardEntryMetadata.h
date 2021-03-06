/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_queue;
@class NSString, PFUbiquityLocation, NSMutableSet, NSPersistentStoreCoordinator, NSSQLCore, _PFUbiquityRecordsImporter, _PFUbiquityRecordsExporter, PFUbiquitySwitchboardCacheWrapper, PFUbiquityRecordsImporterSchedulingContext, NSObject, PFUbiquityBaselineHeuristics, NSSet;

@interface PFUbiquitySwitchboardEntryMetadata : NSObject {

	NSString* _localPeerID;
	NSString* _storeName;
	PFUbiquityLocation* _ubiquityRootLocation;
	PFUbiquityLocation* _localRootLocation;
	NSString* _activeModelVersionHash;
	NSMutableSet* _stores;
	NSPersistentStoreCoordinator* _privatePSC;
	NSSQLCore* _privateStore;
	_PFUbiquityRecordsImporter* _importer;
	_PFUbiquityRecordsExporter* _exporter;
	PFUbiquitySwitchboardCacheWrapper* _cacheWrapper;
	PFUbiquityRecordsImporterSchedulingContext* _schedulingContext;
	BOOL _useLocalStorage;
	BOOL _useLocaAccount;
	NSObject*<OS_dispatch_queue> _privateQueue;
	PFUbiquityBaselineHeuristics* _baselineHeuristics;

}

@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;                              //@synthesize cacheWrapper=_cacheWrapper - In the implementation block
@property (nonatomic,readonly) _PFUbiquityRecordsImporter * importer;                                       //@synthesize importer=_importer - In the implementation block
@property (nonatomic,readonly) _PFUbiquityRecordsExporter * exporter;                                       //@synthesize exporter=_exporter - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;                                     //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSSet * stores;                                                              //@synthesize stores=_stores - In the implementation block
@property (nonatomic,readonly) NSString * activeModelVersionHash;                                           //@synthesize activeModelVersionHash=_activeModelVersionHash - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * privatePSC;                                   //@synthesize privatePSC=_privatePSC - In the implementation block
@property (nonatomic,readonly) NSSQLCore * privateStore;                                                    //@synthesize privateStore=_privateStore - In the implementation block
@property (nonatomic,readonly) PFUbiquityRecordsImporterSchedulingContext * schedulingContext;              //@synthesize schedulingContext=_schedulingContext - In the implementation block
@property (assign,nonatomic) BOOL useLocalStorage;                                                          //@synthesize useLocalStorage=_useLocalStorage - In the implementation block
@property (assign,nonatomic) BOOL useLocalAccount;                                                          //@synthesize useLocaAccount=_useLocaAccount - In the implementation block
@property (nonatomic,readonly) PFUbiquityBaselineHeuristics * baselineHeuristics;                           //@synthesize baselineHeuristics=_baselineHeuristics - In the implementation block
-(void)dealloc;
-(NSSet *)stores;
-(NSSQLCore *)privateStore;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(void)tearDown;
-(PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
-(PFUbiquityBaselineHeuristics *)baselineHeuristics;
-(void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg1 ;
-(_PFUbiquityRecordsImporter *)importer;
-(void)setUseLocalStorage:(BOOL)arg1 ;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(BOOL)useLocalStorage;
-(PFUbiquityRecordsImporterSchedulingContext *)schedulingContext;
-(NSPersistentStoreCoordinator *)privatePSC;
-(id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 localRootLocation:(id)arg3 storeName:(id)arg4 andPrivateQueue:(id)arg5 ;
-(void)addPersistentStore:(id)arg1 ;
-(void)removePersistentStore:(id)arg1 ;
-(_PFUbiquityRecordsExporter *)exporter;
-(void)setUseLocalAccount:(BOOL)arg1 ;
-(NSString *)activeModelVersionHash;
-(BOOL)useLocalAccount;
@end

