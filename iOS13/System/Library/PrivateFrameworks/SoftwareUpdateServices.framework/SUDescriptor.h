/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUDocumentation, NSString, NSDictionary, NSData, NSDate;

@interface SUDescriptor : NSObject <NSSecureCoding, NSCopying> {

	SUDocumentation* _documentation;
	NSString* _publisher;
	NSString* _humanReadableUpdateName;
	NSString* _productSystemName;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _prerequisiteBuild;
	NSString* _prerequisiteOS;
	NSString* _releaseType;
	unsigned long long _downloadSize;
	unsigned long long _unarchiveSize;
	unsigned long long _msuPrepareSize;
	unsigned long long _installationSize;
	unsigned long long _minimumSystemPartitionSize;
	int _updateType;
	BOOL _autoDownloadAllowableForCellular;
	BOOL _downloadAllowableForCellular;
	BOOL _downloadable;
	BOOL _disableSiriVoiceDeletion;
	BOOL _disableCDLevel4;
	BOOL _disableAppDemotion;
	BOOL _disableIntallTonight;
	BOOL _rampEnabled;
	BOOL _criticalOutOfBoxOnly;
	BOOL _autoUpdateEnabled;
	NSString* _setupCritical;
	NSDictionary* _systemPartitionPadding;
	NSData* _sepDigest;
	NSData* _rsepDigest;
	NSData* _sepTBMDigest;
	NSData* _rsepTBMDigest;
	NSDate* _releaseDate;
	unsigned long long _mdmDelayInterval;
	NSString* _assetID;
	BOOL _downloadableOverCellular;
	BOOL _streamingZipCapable;
	NSString* _criticalDownloadPolicy;

}

@property (nonatomic,retain) SUDocumentation * documentation;                                                                                  //@synthesize documentation=_documentation - In the implementation block
@property (nonatomic,retain) NSString * publisher;                                                                                             //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) NSString * productSystemName;                                                                                     //@synthesize productSystemName=_productSystemName - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                                                                                        //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * productBuildVersion;                                                                                   //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * releaseType;                                                                                           //@synthesize releaseType=_releaseType - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteBuild;                                                                                     //@synthesize prerequisiteBuild=_prerequisiteBuild - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteOS;                                                                                        //@synthesize prerequisiteOS=_prerequisiteOS - In the implementation block
@property (assign,nonatomic) unsigned long long downloadSize;                                                                                  //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) unsigned long long installationSize;                                                                              //@synthesize installationSize=_installationSize - In the implementation block
@property (assign,nonatomic) unsigned long long minimumSystemPartitionSize;                                                                    //@synthesize minimumSystemPartitionSize=_minimumSystemPartitionSize - In the implementation block
@property (assign,nonatomic) int updateType;                                                                                                   //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) BOOL autoDownloadAllowableForCellular;                                                                            //@synthesize autoDownloadAllowableForCellular=_autoDownloadAllowableForCellular - In the implementation block
@property (assign,getter=isDownloadable,nonatomic) BOOL downloadable;                                                                          //@synthesize downloadable=_downloadable - In the implementation block
@property (assign,getter=isDownloadableOverCellular,nonatomic) BOOL downloadableOverCellular;                                                  //@synthesize downloadableOverCellular=_downloadableOverCellular - In the implementation block
@property (assign,setter=_setDisableSiriVoiceDeletion:,getter=siriVoiceDeletionDisabled,nonatomic) BOOL disableSiriVoiceDeletion;              //@synthesize disableSiriVoiceDeletion=_disableSiriVoiceDeletion - In the implementation block
@property (assign,setter=_setDisableCDLevel4:,getter=cdLevel4Disabled,nonatomic) BOOL disableCDLevel4;                                         //@synthesize disableCDLevel4=_disableCDLevel4 - In the implementation block
@property (assign,setter=_setDisableAppDemotion:,getter=appDemotionDisabled,nonatomic) BOOL disableAppDemotion;                                //@synthesize disableAppDemotion=_disableAppDemotion - In the implementation block
@property (assign,setter=_setDisableInstallTonight:,getter=installTonightDisabled,nonatomic) BOOL disableInstallTonight;                       //@synthesize disableIntallTonight=_disableIntallTonight - In the implementation block
@property (assign,nonatomic) BOOL rampEnabled;                                                                                                 //@synthesize rampEnabled=_rampEnabled - In the implementation block
@property (assign,nonatomic) BOOL criticalOutOfBoxOnly;                                                                                        //@synthesize criticalOutOfBoxOnly=_criticalOutOfBoxOnly - In the implementation block
@property (assign,nonatomic) BOOL autoUpdateEnabled;                                                                                           //@synthesize autoUpdateEnabled=_autoUpdateEnabled - In the implementation block
@property (nonatomic,retain) NSString * setupCritical;                                                                                         //@synthesize setupCritical=_setupCritical - In the implementation block
@property (nonatomic,retain) NSString * criticalDownloadPolicy;                                                                                //@synthesize criticalDownloadPolicy=_criticalDownloadPolicy - In the implementation block
@property (nonatomic,retain) NSDictionary * systemPartitionPadding;                                                                            //@synthesize systemPartitionPadding=_systemPartitionPadding - In the implementation block
@property (setter=setSEPDigest:,nonatomic,retain) NSData * sepDigest;                                                                          //@synthesize sepDigest=_sepDigest - In the implementation block
@property (setter=setRSEPDigest:,nonatomic,retain) NSData * rsepDigest;                                                                        //@synthesize rsepDigest=_rsepDigest - In the implementation block
@property (setter=setSEPTBMDigest:,nonatomic,retain) NSData * sepTBMDigest;                                                                    //@synthesize sepTBMDigest=_sepTBMDigest - In the implementation block
@property (setter=setRSEPTBMDigest:,nonatomic,retain) NSData * rsepTBMDigest;                                                                  //@synthesize rsepTBMDigest=_rsepTBMDigest - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                                                                                             //@synthesize releaseDate=_releaseDate - In the implementation block
@property (assign,nonatomic) unsigned long long mdmDelayInterval;                                                                              //@synthesize mdmDelayInterval=_mdmDelayInterval - In the implementation block
@property (nonatomic,retain) NSString * assetID;                                                                                               //@synthesize assetID=_assetID - In the implementation block
@property (assign,setter=_setUnarchiveSize:,getter=_unarchiveSize,nonatomic) unsigned long long unarchiveSize;                                 //@synthesize unarchiveSize=_unarchiveSize - In the implementation block
@property (assign,setter=_setMsuPrepareSize:,getter=_msuPrepareSize,nonatomic) unsigned long long msuPrepareSize;                              //@synthesize msuPrepareSize=_msuPrepareSize - In the implementation block
@property (assign,setter=_setStreamingZipCapable:,getter=_isStreamingZipCapable,nonatomic) BOOL streamingZipCapable;                           //@synthesize streamingZipCapable=_streamingZipCapable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(int)updateType;
-(NSString *)publisher;
-(void)setPublisher:(NSString *)arg1 ;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(void)setUpdateType:(int)arg1 ;
-(SUDocumentation *)documentation;
-(NSString *)assetID;
-(void)setAssetID:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(BOOL)isDownloadable;
-(unsigned long long)downloadSize;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(BOOL)autoUpdateEnabled;
-(void)setDownloadSize:(unsigned long long)arg1 ;
-(NSString *)releaseType;
-(void)setDocumentation:(SUDocumentation *)arg1 ;
-(NSData *)sepDigest;
-(NSData *)rsepDigest;
-(NSData *)sepTBMDigest;
-(NSData *)rsepTBMDigest;
-(void)setProductSystemName:(NSString *)arg1 ;
-(void)setReleaseType:(NSString *)arg1 ;
-(void)setDownloadable:(BOOL)arg1 ;
-(void)setAutoDownloadAllowableForCellular:(BOOL)arg1 ;
-(void)setDownloadableOverCellular:(BOOL)arg1 ;
-(void)_setUnarchiveSize:(unsigned long long)arg1 ;
-(void)setMinimumSystemPartitionSize:(unsigned long long)arg1 ;
-(void)_setStreamingZipCapable:(BOOL)arg1 ;
-(void)_setDisableSiriVoiceDeletion:(BOOL)arg1 ;
-(void)_setDisableCDLevel4:(BOOL)arg1 ;
-(void)_setDisableAppDemotion:(BOOL)arg1 ;
-(void)_setDisableInstallTonight:(BOOL)arg1 ;
-(void)setRampEnabled:(BOOL)arg1 ;
-(void)setSystemPartitionPadding:(NSDictionary *)arg1 ;
-(void)setSEPDigest:(id)arg1 ;
-(void)setRSEPDigest:(id)arg1 ;
-(void)setSEPTBMDigest:(id)arg1 ;
-(void)setRSEPTBMDigest:(id)arg1 ;
-(void)setMdmDelayInterval:(unsigned long long)arg1 ;
-(void)setSetupCritical:(NSString *)arg1 ;
-(void)setCriticalDownloadPolicy:(NSString *)arg1 ;
-(void)setCriticalOutOfBoxOnly:(BOOL)arg1 ;
-(void)setPrerequisiteBuild:(NSString *)arg1 ;
-(void)setPrerequisiteOS:(NSString *)arg1 ;
-(void)_setMsuPrepareSize:(unsigned long long)arg1 ;
-(void)setInstallationSize:(unsigned long long)arg1 ;
-(NSString *)setupCritical;
-(NSString *)criticalDownloadPolicy;
-(NSString *)prerequisiteBuild;
-(NSString *)prerequisiteOS;
-(unsigned long long)installationSize;
-(id)humanReadableUpdateName;
-(NSString *)productSystemName;
-(unsigned long long)preparationSize;
-(unsigned long long)_unarchiveSize;
-(unsigned long long)_msuPrepareSize;
-(unsigned long long)minimumSystemPartitionSize;
-(BOOL)autoDownloadAllowableForCellular;
-(BOOL)isDownloadableOverCellular;
-(BOOL)_isStreamingZipCapable;
-(BOOL)siriVoiceDeletionDisabled;
-(BOOL)cdLevel4Disabled;
-(BOOL)appDemotionDisabled;
-(BOOL)installTonightDisabled;
-(BOOL)rampEnabled;
-(BOOL)criticalOutOfBoxOnly;
-(NSDictionary *)systemPartitionPadding;
-(unsigned long long)mdmDelayInterval;
-(BOOL)_hasValue:(id)arg1 ;
-(id)_buildCompareKey;
-(unsigned long long)totalRequiredFreeSpace;
-(id)updateTypeName;
-(BOOL)isValidDescriptor;
-(BOOL)isEmergencyOrCritical;
@end

