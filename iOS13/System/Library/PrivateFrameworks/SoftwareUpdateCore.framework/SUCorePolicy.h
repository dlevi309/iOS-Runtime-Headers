/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSNumber, NSDictionary, NSArray;

@interface SUCorePolicy : NSObject <NSSecureCoding, NSCopying> {

	BOOL _background;
	BOOL _allowsCellular;
	BOOL _requiresPowerPluggedIn;
	BOOL _restrictToIncremental;
	BOOL _restrictToFull;
	BOOL _allowSameVersion;
	BOOL _checkAvailableSpace;
	int _catalogDownloadTimeoutSecs;
	int _softwareUpdateAssetDownloadTimeoutSecs;
	int _documentationAssetDownloadTimeoutSecs;
	int _cacheDeleteUrgency;
	NSString* _softwareUpdateAssetType;
	NSString* _documentationAssetType;
	NSString* _prerequisiteBuildVersion;
	NSString* _prerequisiteProductVersion;
	NSString* _deviceClass;
	NSString* _hwModelStr;
	NSString* _productType;
	NSString* _releaseType;
	NSData* _ssoToken;
	NSString* _personalizationServerURL;
	NSString* _proxyHostName;
	NSNumber* _proxyPortNumber;
	NSDictionary* _updateMetricEventFields;
	NSString* _updateMetricContext;
	NSDictionary* _baseApplyOptions;
	NSArray* _policyExtentions;

}

@property (nonatomic,retain) NSString * softwareUpdateAssetType;                      //@synthesize softwareUpdateAssetType=_softwareUpdateAssetType - In the implementation block
@property (nonatomic,retain) NSString * documentationAssetType;                       //@synthesize documentationAssetType=_documentationAssetType - In the implementation block
@property (nonatomic,retain) NSDictionary * updateMetricEventFields;                  //@synthesize updateMetricEventFields=_updateMetricEventFields - In the implementation block
@property (nonatomic,retain) NSArray * policyExtentions;                              //@synthesize policyExtentions=_policyExtentions - In the implementation block
@property (assign,nonatomic) BOOL background;                                         //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) BOOL allowsCellular;                                     //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign,nonatomic) BOOL requiresPowerPluggedIn;                             //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) BOOL restrictToIncremental;                              //@synthesize restrictToIncremental=_restrictToIncremental - In the implementation block
@property (assign,nonatomic) BOOL restrictToFull;                                     //@synthesize restrictToFull=_restrictToFull - In the implementation block
@property (assign,nonatomic) BOOL allowSameVersion;                                   //@synthesize allowSameVersion=_allowSameVersion - In the implementation block
@property (assign,nonatomic) int catalogDownloadTimeoutSecs;                          //@synthesize catalogDownloadTimeoutSecs=_catalogDownloadTimeoutSecs - In the implementation block
@property (assign,nonatomic) int softwareUpdateAssetDownloadTimeoutSecs;              //@synthesize softwareUpdateAssetDownloadTimeoutSecs=_softwareUpdateAssetDownloadTimeoutSecs - In the implementation block
@property (assign,nonatomic) int documentationAssetDownloadTimeoutSecs;               //@synthesize documentationAssetDownloadTimeoutSecs=_documentationAssetDownloadTimeoutSecs - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteBuildVersion;                     //@synthesize prerequisiteBuildVersion=_prerequisiteBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteProductVersion;                   //@synthesize prerequisiteProductVersion=_prerequisiteProductVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceClass;                                  //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,retain) NSString * hwModelStr;                                   //@synthesize hwModelStr=_hwModelStr - In the implementation block
@property (nonatomic,retain) NSString * productType;                                  //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * releaseType;                                  //@synthesize releaseType=_releaseType - In the implementation block
@property (assign,nonatomic) BOOL checkAvailableSpace;                                //@synthesize checkAvailableSpace=_checkAvailableSpace - In the implementation block
@property (assign,nonatomic) int cacheDeleteUrgency;                                  //@synthesize cacheDeleteUrgency=_cacheDeleteUrgency - In the implementation block
@property (nonatomic,retain) NSData * ssoToken;                                       //@synthesize ssoToken=_ssoToken - In the implementation block
@property (nonatomic,retain) NSString * personalizationServerURL;                     //@synthesize personalizationServerURL=_personalizationServerURL - In the implementation block
@property (nonatomic,retain) NSString * proxyHostName;                                //@synthesize proxyHostName=_proxyHostName - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPortNumber;                              //@synthesize proxyPortNumber=_proxyPortNumber - In the implementation block
@property (nonatomic,retain) NSString * updateMetricContext;                          //@synthesize updateMetricContext=_updateMetricContext - In the implementation block
@property (nonatomic,retain) NSDictionary * baseApplyOptions;                         //@synthesize baseApplyOptions=_baseApplyOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)getAllowSameProductVersionPredicateResultWithAssetOSVersion:(id)arg1 assetBuildVersion:(id)arg2 prerequisiteProductVersion:(id)arg3 prerequisiteBuildVersion:(id)arg4 ;
+(BOOL)getNoAllowSameProductVersionPredicateResultWithAssetOSVersion:(id)arg1 assetBuildVersion:(id)arg2 prerequisiteProductVersion:(id)arg3 prerequisiteBuildVersion:(id)arg4 ;
+(id)_cleanProductVersion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)background;
-(NSString *)productType;
-(NSString *)deviceClass;
-(void)setBackground:(BOOL)arg1 ;
-(id)summary;
-(void)setProductType:(NSString *)arg1 ;
-(void)setDeviceClass:(NSString *)arg1 ;
-(BOOL)requiresPowerPluggedIn;
-(void)setRequiresPowerPluggedIn:(BOOL)arg1 ;
-(void)setPrerequisiteBuildVersion:(NSString *)arg1 ;
-(void)setPrerequisiteProductVersion:(NSString *)arg1 ;
-(BOOL)allowSameVersion;
-(void)setAllowSameVersion:(BOOL)arg1 ;
-(NSString *)prerequisiteBuildVersion;
-(NSString *)prerequisiteProductVersion;
-(NSString *)releaseType;
-(void)setReleaseType:(NSString *)arg1 ;
-(BOOL)allowsCellular;
-(void)setAllowsCellular:(BOOL)arg1 ;
-(NSString *)softwareUpdateAssetType;
-(id)constructSoftwareUpdateMAAssetQuery;
-(NSString *)documentationAssetType;
-(id)constructDocumentationMAAssetQueryWithDocID:(id)arg1 ;
-(id)constructMASoftwareUpdateCatalogDownloadOptionsWithUUID:(id)arg1 ;
-(id)constructMADocumentationCatalogDownloadOptionsWithUUID:(id)arg1 usingDescriptor:(id)arg2 ;
-(void)selectSoftwareUpdatePrimaryAsset:(id*)arg1 secondaryAsset:(id*)arg2 fromAssetQuery:(id)arg3 ;
-(void)selectDocumentationAsset:(id*)arg1 fromAssetQuery:(id)arg2 ;
-(id)initWithSoftwareUpdateAssetType:(id)arg1 documentationAssetType:(id)arg2 usingExtensions:(id)arg3 ;
-(NSArray *)policyExtentions;
-(id)_copyGestaltValueForKey:(CFStringRef)arg1 ;
-(id)assetTypeSummary;
-(BOOL)checkAvailableSpace;
-(int)cacheDeleteUrgency;
-(id)constructMASoftwareUpdateAssetDownloadOptionsWithUUID:(id)arg1 ;
-(id)constructMADocumentationAssetDownloadOptionsWithUUID:(id)arg1 ;
-(BOOL)restrictToFull;
-(BOOL)restrictToIncremental;
-(NSString *)hwModelStr;
-(int)catalogDownloadTimeoutSecs;
-(int)softwareUpdateAssetDownloadTimeoutSecs;
-(int)documentationAssetDownloadTimeoutSecs;
-(void)setUpdateMetricEventFields:(NSDictionary *)arg1 ;
-(NSData *)ssoToken;
-(NSDictionary *)updateMetricEventFields;
-(NSString *)updateMetricContext;
-(NSString *)personalizationServerURL;
-(NSString *)proxyHostName;
-(NSNumber *)proxyPortNumber;
-(void)setRestrictToIncremental:(BOOL)arg1 ;
-(void)setRestrictToFull:(BOOL)arg1 ;
-(void)setCatalogDownloadTimeoutSecs:(int)arg1 ;
-(void)setSoftwareUpdateAssetDownloadTimeoutSecs:(int)arg1 ;
-(void)setDocumentationAssetDownloadTimeoutSecs:(int)arg1 ;
-(void)setHwModelStr:(NSString *)arg1 ;
-(void)setCheckAvailableSpace:(BOOL)arg1 ;
-(void)setCacheDeleteUrgency:(int)arg1 ;
-(void)setSsoToken:(NSData *)arg1 ;
-(void)setPersonalizationServerURL:(NSString *)arg1 ;
-(void)setProxyHostName:(NSString *)arg1 ;
-(void)setProxyPortNumber:(NSNumber *)arg1 ;
-(void)setUpdateMetricContext:(NSString *)arg1 ;
-(NSDictionary *)baseApplyOptions;
-(void)setBaseApplyOptions:(NSDictionary *)arg1 ;
-(id)initWithSoftwareUpdateAssetType:(id)arg1 documentationAssetType:(id)arg2 updateBrainAssetType:(id)arg3 usingExtensions:(id)arg4 ;
-(id)setUpdateMetricEventFieldsFromDictionary:(id)arg1 ;
-(void)setSoftwareUpdateAssetType:(NSString *)arg1 ;
-(void)setDocumentationAssetType:(NSString *)arg1 ;
-(void)setPolicyExtentions:(NSArray *)arg1 ;
@end

