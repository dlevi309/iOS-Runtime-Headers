/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBBundleProperties.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class RBBundlePropertiesLSProvider, RBBundlePropertiesBSXPCProvider, RBBundlePropertiesBackgroundRefreshProvider, RBSProcessIdentifier, RBSProcessIdentity, RBLSBundleProperties, RBXPCBundleProperties, NSString, NSURL, NSDictionary;

@interface RBBundleProperties : NSObject <RBBundleProperties, BSDescriptionProviding> {

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(NSString *)debugDescription;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(NSString *)executablePath;
-(NSDictionary *)environmentVariables;
-(NSString *)extensionPointIdentifier;
-(NSURL *)dataContainerURL;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)bundleInfoValuesForKeys:(id)arg1 ;
-(BOOL)isExtension;
-(BOOL)usesSocketMonitoring;
-(BOOL)supportsBackgroundContentFetching;
-(BOOL)supportsBackgroundNetworkAuthentication;
-(BOOL)supportsUnboundedTaskCompletion;
-(BOOL)supportsBackgroundAudio;
-(BOOL)isBackgroundRefreshEnabled;
-(int)preferredJetsamBand;
-(BOOL)hasPreferredJetsamBand;
-(id)_xpcBundleProperties;
-(id)_lsBundleProperties;
-(id)_bundleProperties;
-(id)initWithLSProvider:(id)arg1 xpcProvider:(id)arg2 backgroundRefreshProvider:(id)arg3 processIdentity:(id)arg4 processIdentifier:(id)arg5 ;
@end

