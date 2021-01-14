/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUAirPlayScreenReceiver.h>
#import <libobjc.A.dylib/PUAirPlayRouteObserverRegistryDelegate.h>

@class PUAirPlayScreen, PUAirPlayScreenDetector, PUAirPlayRootViewController, PUAirPlayContentRegistry, PUAirPlayRouteObserverRegistry, UIViewController, NSDate, AVOutputContext, NSString;

@interface PHAirPlayScreenController : NSObject <PUAirPlayScreenReceiver, PUAirPlayRouteObserverRegistryDelegate> {

	PUAirPlayScreen* __currentScreen;
	PUAirPlayScreenDetector* __screenDetector;
	PUAirPlayRootViewController* __rootViewController;
	PUAirPlayContentRegistry* __contentRegistry;
	PUAirPlayRouteObserverRegistry* __routeObserverRegistry;
	UIViewController* __lastDisplayedContent;
	NSDate* __lastScreenConnectDate;
	NSDate* __lastScreenRequestDate;
	long long __lastScreenRequestOrigin;
	long long _airPlaySessionSignpost;
	id _secondDisplayModeToken;
	AVOutputContext* _outputContext;

}

@property (setter=_setCurrentScreen:,nonatomic,retain) PUAirPlayScreen * _currentScreen;                                             //@synthesize _currentScreen=__currentScreen - In the implementation block
@property (setter=_setScreenDetector:,nonatomic,retain) PUAirPlayScreenDetector * _screenDetector;                                   //@synthesize _screenDetector=__screenDetector - In the implementation block
@property (setter=_setRootViewController:,nonatomic,retain) PUAirPlayRootViewController * _rootViewController;                       //@synthesize _rootViewController=__rootViewController - In the implementation block
@property (setter=_setContentRegistry:,nonatomic,retain) PUAirPlayContentRegistry * _contentRegistry;                                //@synthesize _contentRegistry=__contentRegistry - In the implementation block
@property (setter=_setRouteObserverRegistry:,nonatomic,retain) PUAirPlayRouteObserverRegistry * _routeObserverRegistry;              //@synthesize _routeObserverRegistry=__routeObserverRegistry - In the implementation block
@property (setter=_setLastDisplayedContent:,nonatomic,retain) UIViewController * _lastDisplayedContent;                              //@synthesize _lastDisplayedContent=__lastDisplayedContent - In the implementation block
@property (setter=_setLastScreenConnectDate:,nonatomic,retain) NSDate * _lastScreenConnectDate;                                      //@synthesize _lastScreenConnectDate=__lastScreenConnectDate - In the implementation block
@property (setter=_setLastScreenRequestDate:,nonatomic,retain) NSDate * _lastScreenRequestDate;                                      //@synthesize _lastScreenRequestDate=__lastScreenRequestDate - In the implementation block
@property (assign,setter=_setLastScreenRequestOrigin:,nonatomic) long long _lastScreenRequestOrigin;                                 //@synthesize _lastScreenRequestOrigin=__lastScreenRequestOrigin - In the implementation block
@property (assign,nonatomic) long long airPlaySessionSignpost;                                                                       //@synthesize airPlaySessionSignpost=_airPlaySessionSignpost - In the implementation block
@property (nonatomic,retain) id secondDisplayModeToken;                                                                              //@synthesize secondDisplayModeToken=_secondDisplayModeToken - In the implementation block
@property (nonatomic,retain) AVOutputContext * outputContext;                                                                        //@synthesize outputContext=_outputContext - In the implementation block
@property (getter=isDisplayingContent,nonatomic,readonly) BOOL displayingContent; 
@property (nonatomic,readonly) unsigned long long screenAvailability; 
@property (nonatomic,readonly) unsigned long long routeAvailability; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(CFStringRef)_keyForScreenRequestOrigin:(long long)arg1 ;
-(void)unregisterContentProvider:(id)arg1 ;
-(id)_screenAvailabilityName;
-(long long)airPlaySessionSignpost;
-(void)_recordSessionBeganWithScreen:(id)arg1 ;
-(void)_sceneWillDeactivate:(id)arg1 ;
-(BOOL)isDisplayingContent;
-(void)_notifyWillRequestAirPlayScreenFromSource:(long long)arg1 ;
-(id)init;
-(void)notifyDidPresentAirPlayRoutesFromShareSheet;
-(PUAirPlayRouteObserverRegistry *)_routeObserverRegistry;
-(void)_setLastScreenRequestOrigin:(long long)arg1 ;
-(void)setAirPlaySessionSignpost:(long long)arg1 ;
-(void)_setCurrentScreen:(id)arg1 ;
-(void)_setScreenDetector:(id)arg1 ;
-(void)registerRouteObserver:(id)arg1 ;
-(void)_setRootViewController:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)pu_hasAvailableRoute;
-(void)_setLastScreenRequestDate:(id)arg1 ;
-(void)_setRouteObserverRegistry:(id)arg1 ;
-(BOOL)_shouldUpdateSecondDisplayModeWithCurrentContent;
-(void)_outputDeviceDidChange:(id)arg1 ;
-(void)_setLastDisplayedContent:(id)arg1 ;
-(void)_handleSettingHighResolutionContent:(BOOL)arg1 forRootController:(id)arg2 content:(id)arg3 ;
-(id)_findAvailableScreen;
-(PUAirPlayScreenDetector *)_screenDetector;
-(void)setSecondDisplayModeToken:(id)arg1 ;
-(void)_cacheDisplayedContentIfNeededForUnregisteringProvider:(id)arg1 ;
-(PUAirPlayContentRegistry *)_contentRegistry;
-(id)secondDisplayModeToken;
-(PUAirPlayScreen *)_currentScreen;
-(long long)_lastScreenRequestOrigin;
-(void)_updateScreenContentWithShouldTryToFindAvailableScreen:(BOOL)arg1 ;
-(unsigned long long)screenAvailability;
-(void)unregisterRouteObserver:(id)arg1 ;
-(void)notifyDidPresentAirPlayRoutesFromSlideshow;
-(PUAirPlayRootViewController *)_rootViewController;
-(void)_switchModeForHighResolutionContent:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)screenDetector:(id)arg1 didLoseScreen:(id)arg2 ;
-(AVOutputContext *)outputContext;
-(void)setOutputContext:(AVOutputContext *)arg1 ;
-(NSDate *)_lastScreenRequestDate;
-(void)_sceneDidActivate:(id)arg1 ;
-(void)registerContentProvider:(id)arg1 ;
-(id)_currentContent;
-(BOOL)_shouldIgnoreScreen:(id)arg1 ;
-(void)_setContentRegistry:(id)arg1 ;
-(void)_setLastScreenConnectDate:(id)arg1 ;
-(void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(id)arg1 forRouteObserver:(id)arg2 ;
-(void)screenDetector:(id)arg1 didDetectScreen:(id)arg2 ;
-(unsigned long long)routeAvailability;
-(void)_updateSecondDisplayModeWithCurrentContent;
-(UIViewController *)_lastDisplayedContent;
-(void)_recordSessionEnded;
-(NSDate *)_lastScreenConnectDate;
@end

