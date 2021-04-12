/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_sharedCache;
+(id)cachedUserAgentForBundleIdentifier:(id)arg1 ;
+(void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(id)userAgentForProcessInfo:(id)arg1 ;
-(AMSProcessInfo *)processInfo;
-(NSString *)clientName;
-(id)initWithProcessInfo:(id)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(AMSMappedBundleInfo *)bundleInfo;
-(id)_compileAndShouldCache:(BOOL*)arg1 ;
-(id)_sharedComponentFairPlayDeviceType;
-(id)_iOSComponentClientInfo;
-(id)_iOSComponentProductVersion;
-(id)_iOSComponentDeviceModel;
-(id)_iOSComponentHardwarePlatform;
-(id)_iOSComponentBuildVersion;
-(id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1 ;
-(id)_sharedComponentFrameworkVersion;
-(id)compile;
@end

