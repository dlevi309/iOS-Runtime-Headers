/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBBundleProperties.h>

@class NSString, NSURL, NSDictionary, NSCache;

@interface RBXPCBundleProperties : NSObject <RBBundleProperties> {

	int _pid;
	NSCache* _plistValues;
	BOOL _canFetchBundle;
	BOOL _backgroundRefreshEnabled;
	BOOL _hasPreferredJetsamBand;
	BOOL _supportsBackgroundContentFetching;
	BOOL _supportsBackgroundNetworkAuthentication;
	BOOL _supportsBackgroundAudio;
	BOOL _supportsUnboundedTaskCompletion;
	BOOL _usesSocketMonitoring;
	BOOL _isExtension;
	int _preferredJetsamBand;
	int _platform;
	NSString* _identifier;
	NSString* _path;
	NSString* _executablePath;
	NSString* _extensionPointIdentifier;
	NSURL* _dataContainerURL;
	NSDictionary* _environmentVariables;

}

@property (getter=isBackgroundRefreshEnabled,nonatomic,readonly) BOOL backgroundRefreshEnabled;              //@synthesize backgroundRefreshEnabled=_backgroundRefreshEnabled - In the implementation block
@property (nonatomic,readonly) NSURL * dataContainerURL;                                                     //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * environmentVariables;                                          //@synthesize environmentVariables=_environmentVariables - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundlePath;                                                   //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * executablePath;                                               //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier;                                     //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundContentFetching;                                       //@synthesize supportsBackgroundContentFetching=_supportsBackgroundContentFetching - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundNetworkAuthentication;                                 //@synthesize supportsBackgroundNetworkAuthentication=_supportsBackgroundNetworkAuthentication - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundAudio;                                                 //@synthesize supportsBackgroundAudio=_supportsBackgroundAudio - In the implementation block
@property (nonatomic,readonly) BOOL supportsUnboundedTaskCompletion;                                         //@synthesize supportsUnboundedTaskCompletion=_supportsUnboundedTaskCompletion - In the implementation block
@property (nonatomic,readonly) BOOL usesSocketMonitoring;                                                    //@synthesize usesSocketMonitoring=_usesSocketMonitoring - In the implementation block
@property (nonatomic,readonly) int preferredJetsamBand;                                                      //@synthesize preferredJetsamBand=_preferredJetsamBand - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredJetsamBand;                                                  //@synthesize hasPreferredJetsamBand=_hasPreferredJetsamBand - In the implementation block
@property (nonatomic,readonly) BOOL isExtension;                                                             //@synthesize isExtension=_isExtension - In the implementation block
@property (nonatomic,readonly) int platform;                                                                 //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)dataContainerURL;
-(int)platform;
-(NSString *)executablePath;
-(id)initWithPID:(int)arg1 ;
-(BOOL)usesSocketMonitoring;
-(NSString *)bundlePath;
-(BOOL)supportsUnboundedTaskCompletion;
-(NSString *)bundleIdentifier;
-(NSDictionary *)environmentVariables;
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

