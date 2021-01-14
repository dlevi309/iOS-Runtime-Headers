/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


#import <GameController/GameController-Structs.h>
@class NSMutableDictionary, NSString, NSTimer;

@interface GCAnalytics : NSObject {

	NSMutableDictionary* _controllersData;
	NSString* _bundleID;
	NSTimer* _eventPollTimer;

}
+(id)instance;
-(id)init;
-(void)dealloc;
-(id)getBundleID;
-(void)sendInputsPressedEvent:(const SCD_Struct_GC4*)arg1 ;
-(void)runInputPollTimer;
-(void)checkMultipleControllers;
-(void)publishController:(id)arg1 ;
-(void)unpublishController:(id)arg1 ;
-(void)onSiriMotionEnabled;
-(void)sendSettingsEnteredEvent;
-(void)sendSettingsCustomizationsToggledEventForBundleID:(id)arg1 productCategory:(id)arg2 toggledOn:(BOOL)arg3 ;
-(void)sendSettingsCustomizationsResetEventForBundleID:(id)arg1 productCategory:(id)arg2 ;
-(void)sendSettingsButtonCustomizedEventForBundleID:(id)arg1 productCategory:(id)arg2 button:(id)arg3 ;
-(void)sendSettingsIdentifyControllerEventForProductCategory:(id)arg1 ;
-(void)sendSettingsDevicesEventForTotalCustomizedControllersCount:(int)arg1 ;
-(void)sendSettingsCustomizedAppsEventForTotalCustomizedAppsCount:(int)arg1 ;
-(void)sendHapticsEngineCreatedEventForBundleID:(id)arg1 productCategory:(id)arg2 hapticsLocality:(id)arg3 ;
-(void)sendHapticsClientDestroyedEventForBundleID:(id)arg1 productCategory:(id)arg2 totalPlayers:(int)arg3 sessionTotalDuration:(int)arg4 sessionActiveDuration:(int)arg5 terminationReason:(id)arg6 ;
-(void)sendHapticsPlayerDestroyedEventForBundleID:(id)arg1 productCategory:(id)arg2 totalEventsProcessed:(int)arg3 transientEventsProcessed:(int)arg4 continuousEventsProcessed:(int)arg5 parameterCurvesProcessed:(int)arg6 sessionTotalDuration:(int)arg7 sessionActiveDuration:(int)arg8 ;
-(void)sendHapticsErrorRaisedEventFromSource:(id)arg1 productCategory:(id)arg2 errorType:(id)arg3 ;
@end

