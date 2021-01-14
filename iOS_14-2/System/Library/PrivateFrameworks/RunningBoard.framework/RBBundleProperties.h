/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBBundleProperties.h>

@class RBBundlePropertiesLSProvider, RBBundlePropertiesBSXPCProvider, RBBundlePropertiesBackgroundRefreshProvider, RBSProcessIdentifier, RBSProcessIdentity, RBLSBundleProperties, RBXPCBundleProperties, NSString, NSURL, NSDictionary;

@interface RBBundleProperties : NSObject <RBBundleProperties> {

	RBBundlePropertiesLSProvider* _lsProvider;
	RBBundlePropertiesBSXPCProvider* _xpcProvider;
	RBBundlePropertiesBackgroundRefreshProvider* _bgRefreshProvider;
	RBSProcessIdentifier* _processIdentifier;
	RBSProcessIdentity* _processIdentity;
	RBLSBundleProperties* _lsBundleProperties;
	RBXPCBundleProperties* _xpcBundleProperties;
	BOOL _hasFetchedBackgroundRefreshEnabled;
	BOOL _backgroundRefreshEnabled;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * bundlePath; 
@property (nonatomic,copy,readonly) NSString * executablePath; 
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier; 
@property (nonatomic,readonly) NSURL * dataContainerURL; 
@property (nonatomic,readonly) NSDictionary * environmentVariables; 
@property (nonatomic,readonly) BOOL supportsBackgroundContentFetching; 
@property (nonatomic,readonly) BOOL supportsBackgroundNetworkAuthentication; 
@property (nonatomic,readonly) BOOL supportsBackgroundAudio; 
@property (nonatomic,readonly) BOOL supportsUnboundedTaskCompletion; 
@property (nonatomic,readonly) BOOL usesSocketMonitoring; 
@property (getter=isBackgroundRefreshEnabled,nonatomic,readonly) BOOL backgroundRefreshEnabled; 
@property (nonatomic,readonly) int preferredJetsamBand; 
@property (nonatomic,readonly) BOOL hasPreferredJetsamBand; 
@property (nonatomic,readonly) BOOL isExtension; 
@property (nonatomic,readonly) int platform; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)dataContainerURL;
-(int)platform;
-(id)initWithLSProvider:(id)arg1 xpcProvider:(id)arg2 backgroundRefreshProvider:(id)arg3 processIdentity:(id)arg4 processIdentifier:(id)arg5 ;
-(NSString *)executablePath;
-(BOOL)usesSocketMonitoring;
-(NSString *)bundlePath;
-(BOOL)supportsUnboundedTaskCompletion;
-(NSString *)bundleIdentifier;
-(NSDictionary *)environmentVariables;
-(NSString *)debugDescription;
-(NSString *)extensionPointIdentifier;
-(BOOL)supportsBackgroundNetworkAuthentication;
-(BOOL)isBackgroundRefreshEnabled;
-(BOOL)hasPreferredJetsamBand;
-(int)preferredJetsamBand;
-(BOOL)supportsBackgroundContentFetching;
-(BOOL)supportsBackgroundAudio;
-(BOOL)isExtension;
-(id)bundleInfoValuesForKeys:(id)arg1 ;
@end

