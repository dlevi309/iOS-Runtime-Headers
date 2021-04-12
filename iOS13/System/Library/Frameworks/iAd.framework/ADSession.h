/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(ADAdServingDaemonConnection *)connection;
-(void)setConnection:(ADAdServingDaemonConnection *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)configureConnection:(id)arg1 ;
-(ADDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(ADDeviceInfo *)arg1 ;
-(void)_appDidEnterBackground;
-(id<ADSSession_RPC>)rpcProxy;
-(void)_appDidBecomeActive;
-(void)adAnalyticsEventReceived:(id)arg1 ;
-(void)establishRPCConnection;
-(void)createDeviceInfo;
-(void)updateDeviceInfo;
-(void)orientationChanged:(id)arg1 ;
-(BOOL)appExtensionCanReceiveAds;
-(BOOL)applicationCanReceiveBackgroundAds;
-(void)performWhenConnected:(/*^block*/id)arg1 ;
-(id)rpcProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_remote_deviceInfo:(/*^block*/id)arg1 ;
-(void)_remote_policyEngineDidIdleDisable;
-(void)_remote_closeClientAdSpaceWithIdentifier:(id)arg1 ;
-(void)_remote_setRequiresFastVisibilityTestOnly:(BOOL)arg1 withIdentifier:(id)arg2 ;
-(void)_remote_creativeWithAdSpaceIdentifier:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1 identifier:(id)arg2 ;
-(void)_remote_adImpressionReportedWithIdentifier:(id)arg1 ;
-(void)_remote_openURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2 ;
-(void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 forAdSpaceWithIdentifier:(id)arg3 ;
-(void)_remote_actionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(id)arg1 ;
-(void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1 ;
-(void)_remote_contentProxyURLDidChange:(id)arg1 ;
-(void)_remote_contentProxyURLConnectDidChange:(id)arg1 ;
-(void)_remote_proxyTypeDidChange:(long long)arg1 ;
-(void)_remote_configVersionDidChange:(id)arg1 ;
-(void)_remote_adDataForAdSpace:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_linkedOnVersion;
-(void)_currentClientAdSpaces;
-(NSMutableArray *)adSpaces;
-(NSObject*<OS_dispatch_queue>)adSpaceQueue;
-(id)_adSpaceForIdentifier:(id)arg1 ;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 privateSegment:(BOOL)arg3 ;
-(id)adServingDaemonMachServiceName;
-(BOOL)shouldConnectToAdServingDaemon;
-(void)adServingDaemonConnectionEstablished;
-(void)adServingDaemonConnectionLost;
-(id)additionalAdServingDaemonLaunchOptions;
-(void)registerAdSpace:(id)arg1 ;
-(void)unregisterAdSpace:(id)arg1 ;
-(void)_remote_updateActionViewControllerOrientation:(unsigned long long)arg1 forAdSpaceWithIdentifier:(id)arg2 ;
-(void)reportPrerollRequest;
-(void)_reportAdSubscriptionEvent:(id)arg1 ;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 ;
-(void)segmentDataForSignedInUserWithBlock:(/*^block*/id)arg1 ;
-(void)prepareForAdRequests;
-(void)setApplicationCanReceiveBackgroundAds:(BOOL)arg1 ;
-(void)setAppExtensionCanReceiveAds:(BOOL)arg1 ;
-(void)setAdSpaces:(NSMutableArray *)arg1 ;
-(int)classicUnavailableToken;
-(void)setClassicUnavailableToken:(int)arg1 ;
-(void)setAdSpaceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)applicationCanRecieveAds;
-(void)setApplicationCanRecieveAds:(BOOL)arg1 ;
@end

