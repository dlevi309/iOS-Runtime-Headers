/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _WKProcessPoolConfiguration, NSURL, WKGeolocationProviderIOS, NSString;

@interface WKProcessPool : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<WebKit::WebProcessPool> _processPool;
	WeakObjCPtr<id<_WKAutomationDelegate> > _automationDelegate;
	WeakObjCPtr<id<_WKDownloadDelegate> > _downloadDelegate;
	RetainPtr<_WKAutomationSession>* _automationSession;
	RetainPtr<WKGeolocationProviderIOS>* _geolocationProvider;
	RetainPtr<id<_WKGeolocationCoreLocationProvider> >* _coreLocationProvider;

}

@property (nonatomic,readonly) _WKProcessPoolConfiguration * _configuration; 
@property (assign,setter=_setDownloadDelegate:,nonatomic,__weak) id<_WKDownloadDelegate> _downloadDelegate; 
@property (assign,setter=_setAutomationDelegate:,nonatomic,__weak) id<_WKAutomationDelegate> _automationDelegate; 
@property (assign,setter=_setCoreLocationProvider:,nonatomic) id<_WKGeolocationCoreLocationProvider> _coreLocationProvider; 
@property (setter=_setJavaScriptConfigurationDirectory:,nonatomic,copy) NSURL * _javaScriptConfigurationDirectory; 
@property (assign,setter=_setCookieStoragePartitioningEnabled:,getter=_isCookieStoragePartitioningEnabled,nonatomic) BOOL _cookieStoragePartitioningEnabled; 
@property (assign,setter=_setStorageAccessAPIEnabled:,getter=_isStorageAccessAPIEnabled,nonatomic) BOOL _storageAccessAPIEnabled; 
@property (readonly) WKGeolocationProviderIOS * _geolocationProvider; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_sharedProcessPool;
+(id)_websiteDataURLForContainerWithURL:(id)arg1 bundleIdentifierIfNotInContainer:(id)arg2 ;
+(id)_allProcessPoolsForTesting;
+(id)_websiteDataURLForContainerWithURL:(id)arg1 ;
+(void)_forceGameControllerFramework;
-(_WKProcessPoolConfiguration *)_configuration;
-(id)_initWithConfiguration:(id)arg1 ;
-(id)_downloadURLRequest:(id)arg1 websiteDataStore:(id)arg2 originatingWebView:(id)arg3 ;
-(void)_sendNetworkProcessPrepareToSuspend:(/*^block*/id)arg1 ;
-(void)_makeNextNetworkProcessLaunchFailForTesting;
-(WKGeolocationProviderIOS *)_geolocationProvider;
-(unsigned long long)_pluginProcessCount;
-(void)_setDownloadDelegate:(id)arg1 ;
-(id)init;
-(unsigned long long)_numberOfConnectedHIDGamepadsForTesting;
-(void)_setAutomationSession:(id)arg1 ;
-(void)_setCanHandleHTTPSServerTrustEvaluation:(BOOL)arg1 ;
-(void)_terminateNetworkProcess;
-(int)_prewarmedProcessIdentifier;
-(void)_clearSupportedPlugins;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)_serviceWorkerProcessCount;
-(void)_setJavaScriptConfigurationDirectory:(id)arg1 ;
-(unsigned long long)_webProcessCountIgnoringPrewarmed;
-(unsigned long long)_webPageContentProcessCount;
-(void)_setUseSeparateServiceWorkerProcess:(BOOL)arg1 ;
-(void)_garbageCollectJavaScriptObjectsForTesting;
-(unsigned long long)_processCacheSize;
-(void)_setCoreLocationProvider:(id)arg1 ;
-(void)_setAllowsAnySSLCertificateForServiceWorker:(BOOL)arg1 ;
-(id<_WKDownloadDelegate>)_downloadDelegate;
-(void)_getActivePagesOriginsInWebProcessForTesting:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_resumeDownloadFromData:(id)arg1 websiteDataStore:(id)arg2 path:(id)arg3 originatingWebView:(id)arg4 ;
-(void)_synthesizeAppIsBackground:(BOOL)arg1 ;
-(void)_setObjectsForBundleParametersWithDictionary:(id)arg1 ;
-(NSString *)description;
-(void)_terminateServiceWorkers;
-(id<_WKAutomationDelegate>)_automationDelegate;
-(void)_setAutomationDelegate:(id)arg1 ;
-(unsigned long long)_maximumSuspendedPageCount;
-(void)_registerURLSchemeAsCanDisplayOnlyIfCanRequest:(id)arg1 ;
-(id)_objectForBundleParameter:(id)arg1 ;
-(void)_setStorageAccessAPIEnabled:(BOOL)arg1 ;
-(unsigned long long)_processCacheCapacity;
-(unsigned long long)_numberOfConnectedGamepadsForTesting;
-(void)_seedResourceLoadStatisticsForTestingWithFirstParty:(id)arg1 thirdParty:(id)arg2 shouldScheduleNotification:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_automationCapabilitiesDidChange;
-(void)_clearWebProcessCache;
-(void)_setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(void)_sendNetworkProcessWillSuspendImminently;
-(void)_preconnectToServer:(id)arg1 ;
-(BOOL)_hasPrewarmedWebProcess;
-(id<_WKGeolocationCoreLocationProvider>)_coreLocationProvider;
-(BOOL)_isStorageAccessAPIEnabled;
-(void)_clearPermanentCredentialsForProtectionSpace:(id)arg1 ;
-(void)_allowAnyTLSCertificateForWebSocketTesting;
-(unsigned long long)_numberOfConnectedGameControllerFrameworkGamepadsForTesting;
-(void)_syncNetworkProcessCookies;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_webProcessCountIgnoringPrewarmedAndCached;
-(int)_networkProcessIdentifier;
-(Object*)_apiObject;
-(unsigned long long)_webProcessCount;
-(void)_addSupportedPlugin:(id)arg1 named:(id)arg2 withMimeTypes:(id)arg3 withExtensions:(id)arg4 ;
-(BOOL)_isCookieStoragePartitioningEnabled;
-(BOOL)_networkProcessHasEntitlementForTesting:(id)arg1 ;
-(void)_setUsesOnlyHIDGamepadProviderForTesting:(BOOL)arg1 ;
-(NSURL *)_javaScriptConfigurationDirectory;
-(void)_setCookieStoragePartitioningEnabled:(BOOL)arg1 ;
-(void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(void)_sendNetworkProcessDidResume;
-(void)_warmInitialProcess;
-(void)_makeNextWebProcessLaunchFailForTesting;
-(void)_setObject:(id)arg1 forBundleParameter:(id)arg2 ;
-(void)dealloc;
@end

