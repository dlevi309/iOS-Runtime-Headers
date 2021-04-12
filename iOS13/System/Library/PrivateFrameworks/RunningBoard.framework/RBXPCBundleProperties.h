/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * bundlePath; 
@property (nonatomic,copy,readonly) NSString * executablePath; 
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier; 
@property (nonatomic,readonly) BOOL supportsBackgroundContentFetching;                                       //@synthesize supportsBackgroundContentFetching=_supportsBackgroundContentFetching - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundNetworkAuthentication;                                 //@synthesize supportsBackgroundNetworkAuthentication=_supportsBackgroundNetworkAuthentication - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundAudio;                                                 //@synthesize supportsBackgroundAudio=_supportsBackgroundAudio - In the implementation block
@property (nonatomic,readonly) BOOL supportsUnboundedTaskCompletion;                                         //@synthesize supportsUnboundedTaskCompletion=_supportsUnboundedTaskCompletion - In the implementation block
@property (nonatomic,readonly) BOOL usesSocketMonitoring;                                                    //@synthesize usesSocketMonitoring=_usesSocketMonitoring - In the implementation block
@property (nonatomic,readonly) int preferredJetsamBand;                                                      //@synthesize preferredJetsamBand=_preferredJetsamBand - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredJetsamBand;                                                  //@synthesize hasPreferredJetsamBand=_hasPreferredJetsamBand - In the implementation block
@property (nonatomic,readonly) BOOL isExtension;                                                             //@synthesize isExtension=_isExtension - In the implementation block
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(NSString *)executablePath;
-(NSDictionary *)environmentVariables;
-(NSString *)extensionPointIdentifier;
-(NSURL *)dataContainerURL;
-(id)bundleInfoValuesForKeys:(id)arg1 ;
-(BOOL)isExtension;
-(id)initWithPID:(int)arg1 ;
-(BOOL)usesSocketMonitoring;
-(BOOL)supportsBackgroundContentFetching;
-(BOOL)supportsBackgroundNetworkAuthentication;
-(BOOL)supportsUnboundedTaskCompletion;
-(BOOL)supportsBackgroundAudio;
-(BOOL)isBackgroundRefreshEnabled;
-(int)preferredJetsamBand;
-(BOOL)hasPreferredJetsamBand;
@end

