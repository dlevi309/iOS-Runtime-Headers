/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface PFUbiquityLocation : NSObject <NSCopying> {

	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _ubiquityRootLocationPath;
	int _ubiquityLocationType;
	NSString* _exportingPeerID;
	NSString* _storeName;
	NSString* _modelVersionHash;
	NSString* _filename;
	NSArray* _otherPathComponents;
	BOOL _isDirectory;
	unsigned long long _hash;
	BOOL _isRootUbiquitous;

}

@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation; 
@property (nonatomic,readonly) NSString * ubiquityRootLocationPath;                                        //@synthesize ubiquityRootLocationPath=_ubiquityRootLocationPath - In the implementation block
@property (nonatomic,readonly) BOOL isRootUbiquitous;                                                      //@synthesize isRootUbiquitous=_isRootUbiquitous - In the implementation block
@property (nonatomic,readonly) int ubiquityLocationType;                                                   //@synthesize ubiquityLocationType=_ubiquityLocationType - In the implementation block
@property (nonatomic,readonly) NSString * exportingPeerID;                                                 //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                                       //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSString * modelVersionHash;                                                //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (nonatomic,readonly) NSString * filename;                                                        //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) BOOL usesStagingLogDirectory; 
@property (nonatomic,readonly) BOOL usesTemporaryLogDirectory; 
@property (nonatomic,readonly) BOOL usesCurrentBaselineDirectory; 
@property (nonatomic,readonly) BOOL usesBaselineStagingDirectory; 
@property (nonatomic,readonly) BOOL usesBaselineDirectory; 
@property (nonatomic,readonly) BOOL usesNosyncDirectory; 
@property (nonatomic,readonly) unsigned long long hash;                                                    //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) NSArray * otherPathComponents;                                              //@synthesize otherPathComponents=_otherPathComponents - In the implementation block
@property (getter=isTransactionLogLocation,nonatomic,readonly) BOOL isTransactionLogLocation; 
@property (nonatomic,readonly) BOOL isDirectory;                                                           //@synthesize isDirectory=_isDirectory - In the implementation block
+(void)initialize;
+(id)createCurrentBaselineLocation:(int)arg1 forStoreName:(id)arg2 peerID:(id)arg3 andModelVersionHash:(id)arg4 forFileNamed:(id)arg5 withUbiquityRootLocation:(id)arg6 ;
+(id)createTransactionLogLocationForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 logFilename:(id)arg4 andUbiquityRootLocation:(id)arg5 ;
+(id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4 ;
+(id)createBaselineStagingLocation:(int)arg1 forStoreName:(id)arg2 modelVersionHash:(id)arg3 andFilename:(id)arg4 withUbiquityRootLocation:(id)arg5 ;
+(id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4 ;
+(id)createMapOfLocationsForOldManagedObjectModel:(id)arg1 andNewManagedObjectModel:(id)arg2 inUbiquityPeerStoreLocation:(id)arg3 ;
+(id)pathByTruncatingBeforeLibraryMobileDocuments:(id)arg1 ;
+(id)createPeerRootLocationForPeerID:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
+(id)createVersionHashStringForModel:(id)arg1 ;
+(id)createArrayOfSubLocationsAtLocation:(id)arg1 error:(id*)arg2 ;
+(id)createUbiquityLocationForRootURL:(id)arg1 ;
+(id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
+(id)createBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4 ;
+(id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)arg1 ;
+(id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)arg1 ;
+(id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andStore:(id)arg2 withUbiquityRootLocation:(id)arg3 ;
+(id)createPeerBaselineFileSafeSaveLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2 ;
+(id)createPeerStoreVersionLocationForPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4 ;
+(id)locationSentinel;
+(id)createUbiquityExternalDataReferenceStoreLocationForStoreName:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
+(void)setLocationSentinel:(id)arg1 ;
+(id)createUbiquityLocationForRootPath:(id)arg1 ;
+(id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
+(id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)arg1 ;
+(id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andLog:(id)arg2 ;
+(id)createPeerStoreLocationForPeerID:(id)arg1 andStoreName:(id)arg2 withUbiquityRootLocation:(id)arg3 ;
+(id)localLocationSentinel;
+(id)createStringByAppendingSubpath:(id)arg1 toPath:(id)arg2 ;
+(id)createUbiquityLocationForRootPath:(id)arg1 checkIsUbiquitous:(BOOL)arg2 ;
+(id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootPath:(id)arg2 ;
+(BOOL)isUbiquityLocationPath:(id)arg1 equalToPath:(id)arg2 ;
+(id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
+(id)createLocalBasePathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4 ;
+(id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootURL:(id)arg2 ;
+(id)createUbiquityLocationForSubpath:(id)arg1 ofUbiquityRootPath:(id)arg2 ;
+(id)createMetadataRootLocationForUbiquityRootLocation:(id)arg1 ;
+(id)createMetadataStoreFileLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
+(id)createMetadataPeerLocationForLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
+(id)createMetadataPeerStoreLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
+(id)createMetadataUUIDLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 UUID:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
+(id)createPeerBaselineFileLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2 ;
+(id)createUbiquityPeerReceiptSafeSaveLocationFromReceiptFileLocation:(id)arg1 ;
+(id)createLocalStoresPathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4 ;
+(id)createLocalContainerRootLocationWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4 ;
-(void)updateHash;
-(NSString *)storeName;
-(id)createFullURL;
-(NSString *)ubiquityRootLocationPath;
-(id)createRelativePath;
-(BOOL)isRootUbiquitous;
-(id)init;
-(NSString *)filename;
-(NSString *)exportingPeerID;
-(void)setExportingPeerID:(NSString *)arg1 ;
-(BOOL)usesNosyncDirectory;
-(id)description;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(BOOL)removeFileAtLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)usesCurrentBaselineDirectory;
-(BOOL)__isDirectory;
-(id)initWithUbiquityRootPath:(id)arg1 ;
-(void)setUbiquityRootLocationPath:(NSString *)arg1 ;
-(void)setModelVersionHash:(NSString *)arg1 ;
-(NSArray *)otherPathComponents;
-(void)setOtherPathComponents:(NSArray *)arg1 ;
-(void)setUbiquityLocationType:(int)arg1 ;
-(void)setIsRootUbiquitous:(BOOL)arg1 ;
-(id)initWithUbiquityRootURL:(id)arg1 ;
-(BOOL)usesBaselineStagingDirectory;
-(BOOL)fileExistsAtLocationWithLocalPeerID:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)hash;
-(BOOL)usesTemporaryLogDirectory;
-(BOOL)fileAtLocationIsDownloaded:(id*)arg1 ;
-(BOOL)isEqualToURL:(id)arg1 ;
-(BOOL)isTransactionLogLocation;
-(BOOL)usesBaselineDirectory;
-(BOOL)fileAtLocationIsUploaded:(id*)arg1 ;
-(BOOL)usesStagingLogDirectory;
-(void)setStoreName:(NSString *)arg1 ;
-(void)setHash:(unsigned long long)arg1 ;
-(BOOL)isDirectory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)ubiquityLocationType;
-(NSString *)modelVersionHash;
-(BOOL)fileExistsAtLocation;
-(id)createFullPath;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

