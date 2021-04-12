/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray, NSDictionary, NSData, SUCoreDocumentation, SUCoreMAIdentifier, MAAsset;

@interface SUCoreDescriptor : NSObject <NSSecureCoding> {

	BOOL _streamingZipCapable;
	BOOL _autoDownloadAllowableOverCellular;
	BOOL _downloadAllowableOverCellular;
	BOOL _downloadable;
	BOOL _disableSiriVoiceDeletion;
	BOOL _disableCDLevel4;
	BOOL _disableAppDemotion;
	BOOL _disableInstallTonight;
	BOOL _rampEnabled;
	BOOL _autoUpdateEnabled;
	BOOL _criticalCellularOverride;
	BOOL _criticalOutOfBoxOnly;
	NSString* _publisher;
	NSString* _productSystemName;
	long long _updateType;
	NSString* _assetID;
	NSString* _uniqueBuildID;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _releaseType;
	NSDate* _releaseDate;
	NSString* _prerequisiteBuild;
	NSString* _prerequisiteOSVersion;
	NSArray* _supportedDevices;
	unsigned long long _downloadSize;
	unsigned long long _unarchivedSize;
	unsigned long long _msuPrepareSize;
	unsigned long long _installationSize;
	unsigned long long _minimumSystemPartitionSize;
	NSDictionary* _systemPartitionPadding;
	unsigned long long _mdmDelayInterval;
	NSString* _setupCritical;
	NSString* _lastEmergencyBuild;
	NSString* _lastEmergencyOSVersion;
	NSData* _sepDigest;
	NSData* _sepTBMDigests;
	NSData* _rsepDigest;
	NSData* _rsepTBMDigests;
	NSString* _documentationID;
	SUCoreDocumentation* _documentation;
	NSString* _softwareUpdateURL;
	NSData* _measurement;
	NSString* _measurementAlgorithm;
	SUCoreMAIdentifier* _softwareUpdateAssetIdentifier;
	SUCoreMAIdentifier* _documentationAssetIdentifier;
	MAAsset* _softwareUpdateAsset;
	MAAsset* _documentationAsset;

}

@property (assign,nonatomic) long long updateType;                                            //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,retain) NSString * assetID;                                              //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,retain) NSString * uniqueBuildID;                                        //@synthesize uniqueBuildID=_uniqueBuildID - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                                       //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * productBuildVersion;                                  //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * productSystemName;                                    //@synthesize productSystemName=_productSystemName - In the implementation block
@property (nonatomic,retain) NSString * releaseType;                                          //@synthesize releaseType=_releaseType - In the implementation block
@property (nonatomic,retain) NSString * publisher;                                            //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                                            //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteBuild;                                    //@synthesize prerequisiteBuild=_prerequisiteBuild - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteOSVersion;                                //@synthesize prerequisiteOSVersion=_prerequisiteOSVersion - In the implementation block
@property (nonatomic,retain) NSArray * supportedDevices;                                      //@synthesize supportedDevices=_supportedDevices - In the implementation block
@property (assign,nonatomic) unsigned long long downloadSize;                                 //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) unsigned long long unarchivedSize;                               //@synthesize unarchivedSize=_unarchivedSize - In the implementation block
@property (assign,nonatomic) unsigned long long msuPrepareSize;                               //@synthesize msuPrepareSize=_msuPrepareSize - In the implementation block
@property (assign,nonatomic) unsigned long long installationSize;                             //@synthesize installationSize=_installationSize - In the implementation block
@property (assign,nonatomic) unsigned long long minimumSystemPartitionSize;                   //@synthesize minimumSystemPartitionSize=_minimumSystemPartitionSize - In the implementation block
@property (assign,nonatomic) BOOL streamingZipCapable;                                        //@synthesize streamingZipCapable=_streamingZipCapable - In the implementation block
@property (nonatomic,retain) NSDictionary * systemPartitionPadding;                           //@synthesize systemPartitionPadding=_systemPartitionPadding - In the implementation block
@property (assign,nonatomic) BOOL autoDownloadAllowableOverCellular;                          //@synthesize autoDownloadAllowableOverCellular=_autoDownloadAllowableOverCellular - In the implementation block
@property (assign,nonatomic) BOOL downloadAllowableOverCellular;                              //@synthesize downloadAllowableOverCellular=_downloadAllowableOverCellular - In the implementation block
@property (assign,nonatomic) BOOL downloadable;                                               //@synthesize downloadable=_downloadable - In the implementation block
@property (assign,nonatomic) BOOL disableSiriVoiceDeletion;                                   //@synthesize disableSiriVoiceDeletion=_disableSiriVoiceDeletion - In the implementation block
@property (assign,nonatomic) BOOL disableCDLevel4;                                            //@synthesize disableCDLevel4=_disableCDLevel4 - In the implementation block
@property (assign,nonatomic) BOOL disableAppDemotion;                                         //@synthesize disableAppDemotion=_disableAppDemotion - In the implementation block
@property (assign,nonatomic) BOOL disableInstallTonight;                                      //@synthesize disableInstallTonight=_disableInstallTonight - In the implementation block
@property (assign,nonatomic) BOOL rampEnabled;                                                //@synthesize rampEnabled=_rampEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long mdmDelayInterval;                             //@synthesize mdmDelayInterval=_mdmDelayInterval - In the implementation block
@property (assign,nonatomic) BOOL autoUpdateEnabled;                                          //@synthesize autoUpdateEnabled=_autoUpdateEnabled - In the implementation block
@property (nonatomic,retain) NSString * setupCritical;                                        //@synthesize setupCritical=_setupCritical - In the implementation block
@property (assign,nonatomic) BOOL criticalCellularOverride;                                   //@synthesize criticalCellularOverride=_criticalCellularOverride - In the implementation block
@property (assign,nonatomic) BOOL criticalOutOfBoxOnly;                                       //@synthesize criticalOutOfBoxOnly=_criticalOutOfBoxOnly - In the implementation block
@property (nonatomic,retain) NSString * lastEmergencyBuild;                                   //@synthesize lastEmergencyBuild=_lastEmergencyBuild - In the implementation block
@property (nonatomic,retain) NSString * lastEmergencyOSVersion;                               //@synthesize lastEmergencyOSVersion=_lastEmergencyOSVersion - In the implementation block
@property (nonatomic,retain) NSData * sepDigest;                                              //@synthesize sepDigest=_sepDigest - In the implementation block
@property (nonatomic,retain) NSData * sepTBMDigests;                                          //@synthesize sepTBMDigests=_sepTBMDigests - In the implementation block
@property (nonatomic,retain) NSData * rsepDigest;                                             //@synthesize rsepDigest=_rsepDigest - In the implementation block
@property (nonatomic,retain) NSData * rsepTBMDigests;                                         //@synthesize rsepTBMDigests=_rsepTBMDigests - In the implementation block
@property (nonatomic,retain) NSString * documentationID;                                      //@synthesize documentationID=_documentationID - In the implementation block
@property (nonatomic,retain) SUCoreDocumentation * documentation;                             //@synthesize documentation=_documentation - In the implementation block
@property (nonatomic,retain) NSString * softwareUpdateURL;                                    //@synthesize softwareUpdateURL=_softwareUpdateURL - In the implementation block
@property (nonatomic,retain) NSData * measurement;                                            //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,retain) NSString * measurementAlgorithm;                                 //@synthesize measurementAlgorithm=_measurementAlgorithm - In the implementation block
@property (nonatomic,retain) SUCoreMAIdentifier * softwareUpdateAssetIdentifier;              //@synthesize softwareUpdateAssetIdentifier=_softwareUpdateAssetIdentifier - In the implementation block
@property (nonatomic,retain) SUCoreMAIdentifier * documentationAssetIdentifier;               //@synthesize documentationAssetIdentifier=_documentationAssetIdentifier - In the implementation block
@property (nonatomic,retain) MAAsset * softwareUpdateAsset;                                   //@synthesize softwareUpdateAsset=_softwareUpdateAsset - In the implementation block
@property (nonatomic,retain) MAAsset * documentationAsset;                                    //@synthesize documentationAsset=_documentationAsset - In the implementation block
@property (nonatomic,retain,readonly) NSString * humanReadableUpdateName; 
@property (nonatomic,readonly) BOOL fullReplacement; 
@property (nonatomic,readonly) unsigned long long preparationSize; 
@property (nonatomic,readonly) unsigned long long totalRequiredFreeSpace; 
+(BOOL)supportsSecureCoding;
+(id)cleanProductVersion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)measurement;
-(void)setMeasurement:(NSData *)arg1 ;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(long long)updateType;
-(id)summary;
-(id)overview;
-(NSString *)publisher;
-(void)setPublisher:(NSString *)arg1 ;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(void)setUpdateType:(long long)arg1 ;
-(SUCoreDocumentation *)documentation;
-(NSString *)assetID;
-(void)setAssetID:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(unsigned long long)downloadSize;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(BOOL)autoUpdateEnabled;
-(BOOL)downloadable;
-(NSArray *)supportedDevices;
-(void)setDownloadSize:(unsigned long long)arg1 ;
-(NSString *)releaseType;
-(void)setDocumentation:(SUCoreDocumentation *)arg1 ;
-(NSData *)sepDigest;
-(NSData *)rsepDigest;
-(void)setProductSystemName:(NSString *)arg1 ;
-(void)setReleaseType:(NSString *)arg1 ;
-(void)setDownloadable:(BOOL)arg1 ;
-(void)setMinimumSystemPartitionSize:(unsigned long long)arg1 ;
-(void)setRampEnabled:(BOOL)arg1 ;
-(void)setSystemPartitionPadding:(NSDictionary *)arg1 ;
-(void)setMdmDelayInterval:(unsigned long long)arg1 ;
-(void)setSetupCritical:(NSString *)arg1 ;
-(void)setCriticalOutOfBoxOnly:(BOOL)arg1 ;
-(void)setPrerequisiteBuild:(NSString *)arg1 ;
-(void)setInstallationSize:(unsigned long long)arg1 ;
-(NSString *)setupCritical;
-(NSString *)prerequisiteBuild;
-(unsigned long long)installationSize;
-(NSString *)humanReadableUpdateName;
-(NSString *)productSystemName;
-(unsigned long long)preparationSize;
-(unsigned long long)minimumSystemPartitionSize;
-(BOOL)rampEnabled;
-(BOOL)criticalOutOfBoxOnly;
-(NSDictionary *)systemPartitionPadding;
-(unsigned long long)mdmDelayInterval;
-(unsigned long long)totalRequiredFreeSpace;
-(id)updateTypeName;
-(NSString *)measurementAlgorithm;
-(void)setMeasurementAlgorithm:(NSString *)arg1 ;
-(NSString *)documentationID;
-(void)setDocumentationID:(NSString *)arg1 ;
-(unsigned long long)unarchivedSize;
-(void)setUnarchivedSize:(unsigned long long)arg1 ;
-(unsigned long long)msuPrepareSize;
-(void)setMsuPrepareSize:(unsigned long long)arg1 ;
-(MAAsset *)documentationAsset;
-(id)initWithSUAsset:(id)arg1 releaseDate:(id)arg2 ;
-(void)setDocumentationAsset:(MAAsset *)arg1 ;
-(void)setDocumentationAssetIdentifier:(SUCoreMAIdentifier *)arg1 ;
-(NSString *)prerequisiteOSVersion;
-(BOOL)streamingZipCapable;
-(BOOL)criticalCellularOverride;
-(MAAsset *)softwareUpdateAsset;
-(NSString *)uniqueBuildID;
-(BOOL)autoDownloadAllowableOverCellular;
-(BOOL)downloadAllowableOverCellular;
-(BOOL)disableSiriVoiceDeletion;
-(BOOL)disableCDLevel4;
-(BOOL)disableAppDemotion;
-(BOOL)disableInstallTonight;
-(NSString *)lastEmergencyBuild;
-(NSString *)lastEmergencyOSVersion;
-(NSData *)sepTBMDigests;
-(NSData *)rsepTBMDigests;
-(NSString *)softwareUpdateURL;
-(SUCoreMAIdentifier *)softwareUpdateAssetIdentifier;
-(SUCoreMAIdentifier *)documentationAssetIdentifier;
-(BOOL)fullReplacement;
-(id)criticalOverrideCellularPolicy;
-(id)getMASoftwareUpdateAsset;
-(id)getMADocumentationAsset;
-(void)setUniqueBuildID:(NSString *)arg1 ;
-(void)setPrerequisiteOSVersion:(NSString *)arg1 ;
-(void)setSupportedDevices:(NSArray *)arg1 ;
-(void)setStreamingZipCapable:(BOOL)arg1 ;
-(void)setAutoDownloadAllowableOverCellular:(BOOL)arg1 ;
-(void)setDownloadAllowableOverCellular:(BOOL)arg1 ;
-(void)setDisableSiriVoiceDeletion:(BOOL)arg1 ;
-(void)setDisableCDLevel4:(BOOL)arg1 ;
-(void)setDisableAppDemotion:(BOOL)arg1 ;
-(void)setDisableInstallTonight:(BOOL)arg1 ;
-(void)setCriticalCellularOverride:(BOOL)arg1 ;
-(void)setLastEmergencyBuild:(NSString *)arg1 ;
-(void)setLastEmergencyOSVersion:(NSString *)arg1 ;
-(void)setSepDigest:(NSData *)arg1 ;
-(void)setSepTBMDigests:(NSData *)arg1 ;
-(void)setRsepDigest:(NSData *)arg1 ;
-(void)setRsepTBMDigests:(NSData *)arg1 ;
-(void)setSoftwareUpdateURL:(NSString *)arg1 ;
-(void)setSoftwareUpdateAssetIdentifier:(SUCoreMAIdentifier *)arg1 ;
-(void)setSoftwareUpdateAsset:(MAAsset *)arg1 ;
@end

