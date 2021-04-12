/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSMappedBundleInfo, AMSProcessInfo, NSString;

@interface AMSUserAgent : NSObject {

	AMSMappedBundleInfo* _bundleInfo;
	AMSProcessInfo* _processInfo;

}

@property (nonatomic,readonly) AMSMappedBundleInfo * bundleInfo;              //@synthesize bundleInfo=_bundleInfo - In the implementation block
@property (nonatomic,readonly) AMSProcessInfo * processInfo;                  //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,retain) NSString * clientName; 
@property (nonatomic,retain) NSString * clientVersion; 
+(id)userAgentForProcessInfo:(id)arg1 ;
+(id)_sharedCache;
+(id)cachedUserAgentForBundleIdentifier:(id)arg1 ;
+(void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setClientName:(NSString *)arg1 ;
-(AMSProcessInfo *)processInfo;
-(id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1 ;
-(id)compile;
-(id)_iOSComponentBuildVersion;
-(NSString *)clientName;
-(NSString *)clientVersion;
-(id)_sharedComponentFrameworkVersion;
-(id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1 productType:(id)arg2 ;
-(AMSMappedBundleInfo *)bundleInfo;
-(id)_sharedComponentFairPlayDeviceType;
-(id)_compileAndShouldCache:(BOOL*)arg1 ;
-(id)initWithProcessInfo:(id)arg1 ;
-(id)_userAgentSuffix;
-(id)_iOSComponentDeviceModel;
-(void)setClientVersion:(NSString *)arg1 ;
-(id)_iOSComponentClientInfo;
-(id)_iOSComponentHardwarePlatform;
-(id)_iOSComponentProductVersion;
@end

