/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <libobjc.A.dylib/ADSession_RPC.h>
#import <libobjc.A.dylib/ADAdServingDaemonConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, ADAdServingDaemonConnection, NSString, NSObject, ADDeviceInfo;

@interface ADSession : NSObject <ADSession_RPC, ADAdServingDaemonConnectionDelegate> {

	BOOL _applicationCanReceiveBackgroundAds;
	BOOL _appExtensionCanReceiveAds;
	BOOL _applicationCanRecieveAds;
	int _classicUnavailableToken;
	NSMutableArray* _adSpaces;
	ADAdServingDaemonConnection* _connection;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _adSpaceQueue;
	ADDeviceInfo* _deviceInfo;

}

@property (nonatomic,retain) NSMutableArray * adSpaces;                              //@synthesize adSpaces=_adSpaces - In the implementation block
@property (assign,nonatomic) int classicUnavailableToken;                            //@synthesize classicUnavailableToken=_classicUnavailableToken - In the implementation block
@property (nonatomic,retain) ADAdServingDaemonConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> adSpaceQueue;              //@synthesize adSpaceQueue=_adSpaceQueue - In the implementation block
@property (assign,nonatomic) BOOL applicationCanRecieveAds;                          //@synthesize applicationCanRecieveAds=_applicationCanRecieveAds - In the implementation block
@property (nonatomic,readonly) id<ADSSession_RPC> rpcProxy; 
@property (nonatomic,retain) ADDeviceInfo * deviceInfo;                              //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (assign,nonatomic) BOOL applicationCanReceiveBackgroundAds;                //@synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds - In the implementation block
@property (assign,nonatomic) BOOL appExtensionCanReceiveAds;                         //@synthesize appExtensionCanReceiveAds=_appExtensionCanReceiveAds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)adShouldCreateADSession;
-(id)additionalAdServingDaemonLaunchOptions;
-(void)performWhenConnected:(/*^block*/id)arg1 ;
-(ADDeviceInfo *)deviceInfo;
-(void)_remote_openURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2 ;
-(void)_currentClientAdSpaces;
-(void)setDeviceInfo:(ADDeviceInfo *)arg1 ;
-(id)init;
-(void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 forAdSpaceWithIdentifier:(id)arg3 ;
-(void)_reportAdSubscriptionEvent:(id)arg1 ;
-(void)registerAdSpace:(id)arg1 ;
-(void)_remote_adImpressionReportedWithIdentifier:(id)arg1 ;
-(void)_remote_contentProxyURLDidChange:(id)arg1 ;
-(id)_adSpaceForIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)adSpaceQueue;
-(void)_remote_deviceInfo:(/*^block*/id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setAdSpaces:(NSMutableArray *)arg1 ;
-(void)prepareForAdRequests;
-(void)_remote_configVersionDidChange:(id)arg1 ;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 privateSegment:(BOOL)arg3 ;
-(void)_remote_actionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(id)arg1 ;
-(BOOL)shouldConnectToAdServingDaemon;
-(void)setApplicationCanRecieveAds:(BOOL)arg1 ;
-(void)reportPrerollRequest;
-(BOOL)applicationCanRecieveAds;
-(void)setApplicationCanReceiveBackgroundAds:(BOOL)arg1 ;
-(void)_remote_contentProxyURLConnectDidChange:(id)arg1 ;
-(ADAdServingDaemonConnection *)connection;
-(void)setAppExtensionCanReceiveAds:(BOOL)arg1 ;
-(NSMutableArray *)adSpaces;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)updateDeviceInfo;
-(void)_remote_updateActionViewControllerOrientation:(unsigned long long)arg1 forAdSpaceWithIdentifier:(id)arg2 ;
-(void)unregisterAdSpace:(id)arg1 ;
-(id)adServingDaemonMachServiceName;
-(void)adServingDaemonConnectionLost;
-(void)_remote_policyEngineDidIdleDisable;
-(void)setAdSpaceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_remote_adDataForAdSpace:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)segmentDataForSignedInUserWithBlock:(/*^block*/id)arg1 ;
-(id)_linkedOnVersion;
-(void)_remote_setRequiresFastVisibilityTestOnly:(BOOL)arg1 withIdentifier:(id)arg2 ;
-(void)createDeviceInfo;
-(id<ADSSession_RPC>)rpcProxy;
-(void)setConnection:(ADAdServingDaemonConnection *)arg1 ;
-(void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1 identifier:(id)arg2 ;
-(BOOL)appExtensionCanReceiveAds;
-(id)rpcProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 ;
-(BOOL)applicationCanReceiveBackgroundAds;
-(void)_appDidBecomeActive;
-(void)establishRPCConnection;
-(void)_appDidEnterBackground;
-(int)classicUnavailableToken;
-(void)adServingDaemonConnectionEstablished;
-(void)_remote_creativeWithAdSpaceIdentifier:(id)arg1 didFailWithError:(id)arg2 ;
-(void)configureConnection:(id)arg1 ;
-(void)orientationChanged:(id)arg1 ;
-(void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_remote_closeClientAdSpaceWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)setClassicUnavailableToken:(int)arg1 ;
-(void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1 ;
-(void)adAnalyticsEventReceived:(id)arg1 ;
-(void)_remote_proxyTypeDidChange:(long long)arg1 ;
@end

