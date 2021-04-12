/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)productName;
-(BOOL)isProxy;
-(NSString *)seedGroup;
-(BOOL)isConfigEnabled:(id)arg1 ;
-(NSString *)awdReporterKey;
-(NSString *)productVersion;
-(NSString *)productNameVersionBuildString;
-(NSString *)targetAudience;
-(NSString *)internalKey;
-(NSString *)releaseType;
-(id)init:(id)arg1 fromMetadata:(id)arg2 ;
-(BOOL)isInternalBridge;
-(BOOL)isFile:(id)arg1 validForSubmission:(id)arg2 reasonableSize:(long long)arg3 to:(id)arg4 internalTypes:(id)arg5 result:(const char**)arg6 ;
-(id)description;
-(id)initFromPath:(id)arg1 ;
-(NSString *)systemId;
-(BOOL)usesLegacySubmission:(id)arg1 ;
-(NSString *)buildVersion;
-(NSString *)automatedContextURL;
-(NSString *)experimentGroup;
-(NSString *)uiCountryCode;
-(id)assembleMetadataAt:(double)arg1 withOptions:(unsigned)arg2 ;
-(NSString *)automatedDeviceGroup;
-(NSString *)identifier;
-(NSString *)logPath;
-(id)metadata;
-(NSString *)modelCode;
-(NSString *)crashReporterKey;
-(NSDictionary *)currentTaskingIDByRouting;
-(NSString *)osTrain;
@end

