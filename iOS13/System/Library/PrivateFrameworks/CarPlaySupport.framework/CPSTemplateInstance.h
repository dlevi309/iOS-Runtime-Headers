/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CPTemplateProviding.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/CPSTemplateViewControllerDelegate.h>
#import <libobjc.A.dylib/CPSSafeAreaDelegate.h>
#import <libobjc.A.dylib/CPBannerDelegate.h>
#import <libobjc.A.dylib/CPDashboardProviding.h>
#import <libobjc.A.dylib/CPSNavigatorObserving.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol CPTemplateServiceClientInterface, CPDashboardClientInterface;
@class NSString, CPSOverlayViewController, FBScene, UIWindowScene, CPSDashboardGuidanceViewController, CPSDashboardEstimatesViewController, NSXPCListener, NSXPCConnection, NSMutableDictionary, CPSBannerSourceProxy, CPSApplicationStateMonitor, NSUUID;

@interface CPSTemplateInstance : NSObject <NSXPCListenerDelegate, CPTemplateProviding, UINavigationControllerDelegate, CPSTemplateViewControllerDelegate, CPSSafeAreaDelegate, CPBannerDelegate, CPDashboardProviding, CPSNavigatorObserving, BSInvalidatable> {

	NSString* _sceneIdentifier;
	CPSOverlayViewController* _overlayViewController;
	FBScene* _scene;
	UIWindowScene* _windowSceneForTemplateApplicationScene;
	UIWindowScene* _windowSceneForMapWidgetScene;
	UIWindowScene* _windowSceneForGuidanceWidgetScene;
	FBScene* _mapWidgetScene;
	CPSDashboardGuidanceViewController* _dashboardGuidanceViewController;
	CPSDashboardEstimatesViewController* _dashboardEstimatesViewController;
	NSXPCListener* _interfaceControllerListener;
	NSXPCConnection* _interfaceControllerConnection;
	id<CPTemplateServiceClientInterface> _interfaceControllerRemoteObjectProxy;
	NSXPCListener* _dashboardControllerListener;
	NSXPCConnection* _dashboardControllerConnection;
	id<CPDashboardClientInterface> _dashboardControllerRemoteObjectProxy;
	NSMutableDictionary* _identifierToViewControllerDictionary;
	CPSBannerSourceProxy* _bannerSourceProxy;
	CPSApplicationStateMonitor* _applicationStateMonitor;
	NSUUID* _actionSheetIdentifier;
	UIEdgeInsets _currentSafeAreaInsets;

}

@property (nonatomic,retain) NSXPCListener * interfaceControllerListener;                                            //@synthesize interfaceControllerListener=_interfaceControllerListener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * interfaceControllerConnection;                                        //@synthesize interfaceControllerConnection=_interfaceControllerConnection - In the implementation block
@property (nonatomic,retain) id<CPTemplateServiceClientInterface> interfaceControllerRemoteObjectProxy;              //@synthesize interfaceControllerRemoteObjectProxy=_interfaceControllerRemoteObjectProxy - In the implementation block
@property (nonatomic,retain) NSXPCListener * dashboardControllerListener;                                            //@synthesize dashboardControllerListener=_dashboardControllerListener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * dashboardControllerConnection;                                        //@synthesize dashboardControllerConnection=_dashboardControllerConnection - In the implementation block
@property (nonatomic,retain) id<CPDashboardClientInterface> dashboardControllerRemoteObjectProxy;                    //@synthesize dashboardControllerRemoteObjectProxy=_dashboardControllerRemoteObjectProxy - In the implementation block
@property (nonatomic,retain) CPSOverlayViewController * overlayViewController;                                       //@synthesize overlayViewController=_overlayViewController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToViewControllerDictionary;                             //@synthesize identifierToViewControllerDictionary=_identifierToViewControllerDictionary - In the implementation block
@property (nonatomic,retain) CPSBannerSourceProxy * bannerSourceProxy;                                               //@synthesize bannerSourceProxy=_bannerSourceProxy - In the implementation block
@property (nonatomic,retain) CPSApplicationStateMonitor * applicationStateMonitor;                                   //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,copy) NSUUID * actionSheetIdentifier;                                                           //@synthesize actionSheetIdentifier=_actionSheetIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sceneIdentifier;                                                           //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (assign,nonatomic,__weak) FBScene * scene;                                                                 //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic,__weak) UIWindowScene * windowSceneForTemplateApplicationScene;                          //@synthesize windowSceneForTemplateApplicationScene=_windowSceneForTemplateApplicationScene - In the implementation block
@property (assign,nonatomic,__weak) UIWindowScene * windowSceneForMapWidgetScene;                                    //@synthesize windowSceneForMapWidgetScene=_windowSceneForMapWidgetScene - In the implementation block
@property (assign,nonatomic,__weak) UIWindowScene * windowSceneForGuidanceWidgetScene;                               //@synthesize windowSceneForGuidanceWidgetScene=_windowSceneForGuidanceWidgetScene - In the implementation block
@property (assign,nonatomic,__weak) FBScene * mapWidgetScene;                                                        //@synthesize mapWidgetScene=_mapWidgetScene - In the implementation block
@property (nonatomic,readonly) CPSDashboardGuidanceViewController * dashboardGuidanceViewController;                 //@synthesize dashboardGuidanceViewController=_dashboardGuidanceViewController - In the implementation block
@property (nonatomic,readonly) CPSDashboardEstimatesViewController * dashboardEstimatesViewController;               //@synthesize dashboardEstimatesViewController=_dashboardEstimatesViewController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets currentSafeAreaInsets;                                                     //@synthesize currentSafeAreaInsets=_currentSafeAreaInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)endpoint;
-(id)initWithWindowScene:(id)arg1 ;
-(FBScene *)scene;
-(void)setScene:(FBScene *)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(NSString *)sceneIdentifier;
-(CPSOverlayViewController *)overlayViewController;
-(id)dashboardEndpoint;
-(CPSApplicationStateMonitor *)applicationStateMonitor;
-(void)setApplicationStateMonitor:(CPSApplicationStateMonitor *)arg1 ;
-(void)setHostPrefersDarkUserInterfaceStyle:(BOOL)arg1 ;
-(void)popToRootTemplateAnimated:(id)arg1 ;
-(void)popTemplateAnimated:(id)arg1 ;
-(void)popToTemplate:(id)arg1 animated:(id)arg2 ;
-(void)containsTemplate:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dismissTemplateAnimated:(id)arg1 ;
-(void)getPresentedTemplateWithReply:(/*^block*/id)arg1 ;
-(void)getTopTemplateWithReply:(/*^block*/id)arg1 ;
-(void)getTemplatesWithReply:(/*^block*/id)arg1 ;
-(void)presentVoiceTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)pushGridTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)pushMapTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)requestBannerProviderWithReply:(/*^block*/id)arg1 ;
-(void)requestNavigationProviderForMapTemplate:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)pushListTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)pushSearchTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)presentActionSheetTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 ;
-(void)presentAlertTemplate:(id)arg1 withProxyDelegate:(id)arg2 ;
-(void)dismissAlertAnimated:(BOOL)arg1 ;
-(void)bannerTappedWithIdentifier:(id)arg1 ;
-(void)bannerDidAppearWithIdentifier:(id)arg1 ;
-(void)bannerDidDisappearWithIdentifier:(id)arg1 ;
-(void)hostSetShortcutButtons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setWindowSceneForTemplateApplicationScene:(UIWindowScene *)arg1 ;
-(NSXPCListener *)interfaceControllerListener;
-(NSXPCListener *)dashboardControllerListener;
-(CPSDashboardEstimatesViewController *)dashboardEstimatesViewController;
-(id<CPTemplateServiceClientInterface>)interfaceControllerRemoteObjectProxy;
-(NSMutableDictionary *)identifierToViewControllerDictionary;
-(CPSBannerSourceProxy *)bannerSourceProxy;
-(BOOL)_handleAppViewConnection:(id)arg1 ;
-(BOOL)_handleDashboardConnection:(id)arg1 ;
-(void)setInterfaceControllerRemoteObjectProxy:(id<CPTemplateServiceClientInterface>)arg1 ;
-(void)_appViewConnectionInvalidationHandler;
-(void)setInterfaceControllerConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)dashboardControllerConnection;
-(NSXPCConnection *)interfaceControllerConnection;
-(void)setDashboardControllerRemoteObjectProxy:(id<CPDashboardClientInterface>)arg1 ;
-(void)_dashboardConnectionInvalidationHandler;
-(void)setDashboardControllerConnection:(NSXPCConnection *)arg1 ;
-(CPSDashboardGuidanceViewController *)dashboardGuidanceViewController;
-(FBScene *)mapWidgetScene;
-(void)setWindowSceneForMapWidgetScene:(UIWindowScene *)arg1 ;
-(void)setWindowSceneForGuidanceWidgetScene:(UIWindowScene *)arg1 ;
-(void)templateViewControllerDidPop:(id)arg1 ;
-(void)templateViewControllerDidDismiss:(id)arg1 ;
-(void)viewController:(id)arg1 didUpdateSafeAreaInsets:(UIEdgeInsets)arg2 ;
-(void)updateInterestingInsets:(UIEdgeInsets)arg1 ;
-(void)didCreateNavigator:(id)arg1 ;
-(void)setMapWidgetScene:(FBScene *)arg1 ;
-(void)whitelistClassesForBaseTemplateProvider:(id)arg1 ;
-(void)setOverlayViewController:(CPSOverlayViewController *)arg1 ;
-(UIWindowScene *)windowSceneForTemplateApplicationScene;
-(UIWindowScene *)windowSceneForMapWidgetScene;
-(UIWindowScene *)windowSceneForGuidanceWidgetScene;
-(UIEdgeInsets)currentSafeAreaInsets;
-(void)setCurrentSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)setInterfaceControllerListener:(NSXPCListener *)arg1 ;
-(void)setDashboardControllerListener:(NSXPCListener *)arg1 ;
-(id<CPDashboardClientInterface>)dashboardControllerRemoteObjectProxy;
-(void)setIdentifierToViewControllerDictionary:(NSMutableDictionary *)arg1 ;
-(void)setBannerSourceProxy:(CPSBannerSourceProxy *)arg1 ;
-(NSUUID *)actionSheetIdentifier;
-(void)setActionSheetIdentifier:(NSUUID *)arg1 ;
@end

