/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class PFUbiquityLocation, PFUbiquityBaselineMetadata, NSMutableDictionary, NSString, NSManagedObjectModel, _PFZipFileArchive, NSPersistentStore, NSDictionary;

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {

	PFUbiquityLocation* _baselineStagingLocation;
	PFUbiquityBaselineMetadata* _metadata;
	NSMutableDictionary* _storeFilenameToData;
	NSString* _storeFilename;
	NSString* _storeName;
	NSString* _modelVersionHash;
	NSManagedObjectModel* _model;
	_PFZipFileArchive* _baselineArchive;
	NSPersistentStore* _store;

}

@property (readonly) PFUbiquityLocation * baselineArchiveLocation; 
@property (readonly) PFUbiquityLocation * baselineStagingLocation;                  //@synthesize baselineStagingLocation=_baselineStagingLocation - In the implementation block
@property (readonly) PFUbiquityLocation * baselinePeerArchiveLocation; 
@property (readonly) PFUbiquityBaselineMetadata * metadata;                         //@synthesize metadata=_metadata - In the implementation block
@property (readonly) NSDictionary * storeFilenameToData;                            //@synthesize storeFilenameToData=_storeFilenameToData - In the implementation block
@property (readonly) NSString * storeFilename;                                      //@synthesize storeFilename=_storeFilename - In the implementation block
@property (readonly) NSString * storeName;                                          //@synthesize storeName=_storeName - In the implementation block
@property (readonly) NSString * modelVersionHash;                                   //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (readonly) _PFZipFileArchive * baselineArchive;                           //@synthesize baselineArchive=_baselineArchive - In the implementation block
@property (readonly) NSPersistentStore * store;                                     //@synthesize store=_store - In the implementation block
+(id)metadataFromCurrentBaselineForStoreWithName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 withError:(id*)arg5 ;
+(BOOL)checkPeerReceiptsUnderRootLocation:(id)arg1 forAgreementWithLocalPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 error:(id*)arg5 ;
+(id)createArchiveWithModel:(id)arg1 metadata:(id)arg2 storeFilenameToData:(id)arg3 storeFilename:(id)arg4 error:(id*)arg5 ;
+(BOOL)isPeerReceiptTooOld:(id)arg1 ;
+(id)metadataFromBaselineArchive:(id)arg1 ;
+(id)createModelFromBaselineModelWithModelVersionHash:(id)arg1 peerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
+(id)createBaselineOptimizedModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
+(id)createBaselineGCModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
+(id)createStringOfContentsOfBaselineFile:(id)arg1 ;
+(BOOL)removePeerSpecificIdentifiersFromStore:(id)arg1 withLocalPeerID:(id)arg2 ;
-(BOOL)importBaselineForStoreAtURL:(id)arg1 ofType:(id)arg2 options:(id)arg3 withLocalPeerID:(id)arg4 stack:(id)arg5 andPersistentStoreCoordinator:(id)arg6 error:(id*)arg7 ;
-(NSString *)storeName;
-(id)init;
-(NSPersistentStore *)store;
-(NSString *)storeFilename;
-(void)setMetadata:(PFUbiquityBaselineMetadata *)arg1 ;
-(id)description;
-(id)storeData;
-(id)initWithBaselineLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(id)createPersistentStoreCoordinatorForCurrentBaseline:(id*)arg1 ;
-(PFUbiquityLocation *)baselineStagingLocation;
-(NSDictionary *)storeFilenameToData;
-(id)gcModelData;
-(PFUbiquityLocation *)baselineArchiveLocation;
-(BOOL)clearOutStagingLocationWithError:(id*)arg1 ;
-(BOOL)constructBaselineArchive:(id*)arg1 ;
-(PFUbiquityLocation *)baselinePeerArchiveLocation;
-(BOOL)unpackStoreFilesToStagingLocation:(id*)arg1 ;
-(BOOL)haveTransactionLogsForPeer:(id)arg1 between:(long long)arg2 and:(long long)arg3 ;
-(id)optimizedModelData;
-(BOOL)makeCurrentBaselineWithError:(id*)arg1 ;
-(id)_createPersistentStoreCoordinatorForCurrentBaseline:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)replaceLocalPersistentStoreAtURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 usingPersistentStoreCoordinator:(id)arg4 error:(id*)arg5 ;
-(BOOL)moveToPermanentLocation:(id*)arg1 ;
-(id)createManagedObjectModelFromCurrentBaseline;
-(_PFZipFileArchive *)baselineArchive;
-(BOOL)isUploaded:(id*)arg1 ;
-(id)createSetOfInUseExternalDataRefUUIDs:(id*)arg1 ;
-(BOOL)metadataMatchesCurrentMetadata:(id*)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 forStoreWithName:(id)arg3 andManagedObjectModel:(id)arg4 ;
-(BOOL)prepareForBaselineRollOfPersistentStore:(id)arg1 andLocalPeerID:(id)arg2 error:(id*)arg3 ;
-(BOOL)loadFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)gatherContentsFromMigratedBaseline:(id)arg1 withStoreFileURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)canReplaceStoreAtKnowledgeVector:(id)arg1 ;
-(BOOL)gatherContentsAndConstructArchiveWithError:(id*)arg1 ;
-(BOOL)updateCurrentStoreIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeFileToLocation:(id)arg1 error:(id*)arg2 ;
-(id)baselineMetadataData;
-(id)createManagedObjectModel;
-(BOOL)removeUnusedExternalDataReferences:(id*)arg1 ;
-(PFUbiquityBaselineMetadata *)metadata;
-(NSString *)modelVersionHash;
-(void)dealloc;
@end

