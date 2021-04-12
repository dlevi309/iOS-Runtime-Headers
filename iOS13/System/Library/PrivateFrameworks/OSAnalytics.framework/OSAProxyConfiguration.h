/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/


@class NSString, NSDictionary;

@interface OSAProxyConfiguration : NSObject {

	NSString* _logPath;
	NSString* _identifier;
	NSString* _modelCode;
	NSString* _productVersion;
	NSString* _targetAudience;
	NSString* _buildVersion;
	NSString* _osTrain;
	NSString* _productBuildString;
	NSString* _productName;
	NSString* _productNameVersionBuildString;
	NSString* _productReleaseString;
	NSString* _uiCountryCode;
	NSString* _systemId;
	NSString* _serialNumber;
	NSString* _crashReporterKey;
	NSString* _awdReporterKey;
	NSString* _internalKey;
	NSString* _releaseType;
	NSString* _seedGroup;
	NSString* _experimentGroup;
	NSString* _automatedDeviceGroup;
	NSString* _automatedContextURL;
	NSDictionary* _currentTaskingIDByRouting;

}

@property (readonly) NSString * logPath;                                    //@synthesize logPath=_logPath - In the implementation block
@property (readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) BOOL isProxy; 
@property (readonly) BOOL isInternalBridge; 
@property (readonly) NSString * modelCode;                                  //@synthesize modelCode=_modelCode - In the implementation block
@property (readonly) NSString * productVersion;                             //@synthesize productVersion=_productVersion - In the implementation block
@property (readonly) NSString * buildVersion;                               //@synthesize buildVersion=_buildVersion - In the implementation block
@property (readonly) NSString * osTrain;                                    //@synthesize osTrain=_osTrain - In the implementation block
@property (readonly) NSString * productName;                                //@synthesize productName=_productName - In the implementation block
@property (readonly) NSString * productNameVersionBuildString;              //@synthesize productNameVersionBuildString=_productNameVersionBuildString - In the implementation block
@property (readonly) NSString * targetAudience;                             //@synthesize targetAudience=_targetAudience - In the implementation block
@property (readonly) NSString * uiCountryCode;                              //@synthesize uiCountryCode=_uiCountryCode - In the implementation block
@property (readonly) NSString * systemId;                                   //@synthesize systemId=_systemId - In the implementation block
@property (readonly) NSString * internalKey;                                //@synthesize internalKey=_internalKey - In the implementation block
@property (readonly) NSString * crashReporterKey;                           //@synthesize crashReporterKey=_crashReporterKey - In the implementation block
@property (readonly) NSString * awdReporterKey;                             //@synthesize awdReporterKey=_awdReporterKey - In the implementation block
@property (readonly) NSString * releaseType;                                //@synthesize releaseType=_releaseType - In the implementation block
@property (readonly) NSString * seedGroup;                                  //@synthesize seedGroup=_seedGroup - In the implementation block
@property (readonly) NSString * experimentGroup;                            //@synthesize experimentGroup=_experimentGroup - In the implementation block
@property (readonly) NSString * automatedDeviceGroup;                       //@synthesize automatedDeviceGroup=_automatedDeviceGroup - In the implementation block
@property (readonly) NSString * automatedContextURL;                        //@synthesize automatedContextURL=_automatedContextURL - In the implementation block
@property (readonly) NSDictionary * currentTaskingIDByRouting;              //@synthesize currentTaskingIDByRouting=_currentTaskingIDByRouting - In the implementation block
-(BOOL)isProxy;
-(id)description;
-(NSString *)identifier;
-(id)initFromPath:(id)arg1 ;
-(id)metadata;
-(NSString *)productVersion;
-(NSString *)buildVersion;
-(NSString *)productName;
-(NSString *)automatedDeviceGroup;
-(NSString *)systemId;
-(NSString *)productNameVersionBuildString;
-(NSString *)modelCode;
-(NSString *)crashReporterKey;
-(NSString *)logPath;
-(NSString *)uiCountryCode;
-(NSString *)releaseType;
-(id)init:(id)arg1 fromMetadata:(id)arg2 ;
-(NSString *)automatedContextURL;
-(NSString *)seedGroup;
-(NSString *)experimentGroup;
-(NSString *)internalKey;
-(NSString *)osTrain;
-(NSString *)targetAudience;
-(NSString *)awdReporterKey;
-(NSDictionary *)currentTaskingIDByRouting;
-(BOOL)isConfigEnabled:(id)arg1 ;
-(BOOL)isInternalBridge;
-(id)assembleMetadataAt:(double)arg1 withOptions:(unsigned)arg2 ;
-(BOOL)usesLegacySubmission:(id)arg1 ;
-(BOOL)isFile:(id)arg1 validForSubmission:(id)arg2 reasonableSize:(long long)arg3 to:(id)arg4 internalTypes:(id)arg5 result:(const char**)arg6 ;
@end

