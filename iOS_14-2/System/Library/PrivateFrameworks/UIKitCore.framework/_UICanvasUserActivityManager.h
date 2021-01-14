/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIActivityContinuationManagerApplicationContext.h>
#import <UIKitCore/_UISceneComponentProviding.h>

@class UIScene, NSUserActivity, NSDictionary, UIActivityContinuationManager, NSSet, NSString;

@interface _UICanvasUserActivityManager : NSObject <UIActivityContinuationManagerApplicationContext, _UISceneComponentProviding> {

	UIScene* _weakScene;
	NSUserActivity* _restorationActivity;
	NSDictionary* _connectionOptionsRestorationActivityDictionary;
	UIActivityContinuationManager* _activityContinuationManager;
	NSSet* _activityTypesForDefaultProgressUI;
	BOOL _isDisplayingActivityContinuationUI;

}

@property (getter=_activityContinuationManager,nonatomic,readonly) UIActivityContinuationManager * _activityContinuationManager; 
@property (assign,setter=_setIsDisplayingActivityContinuationUI:,getter=_isDisplayingActivityContinuationUI,nonatomic) BOOL isDisplayingActivityContinuationUI;              //@synthesize isDisplayingActivityContinuationUI=_isDisplayingActivityContinuationUI - In the implementation block
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_restorationUserActivityAvailableForSceneIdentifier:(id)arg1 ;
+(void)_updatePersistedSceneSession:(id)arg1 ;
+(void)_showProgressForScene:(id)arg1 whenFetchingUserActivityForTypes:(id)arg2 ;
+(id)_getRestorationUserActivityForPersistentIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)_userActivityManagerForScene:(id)arg1 ;
+(id)_activityContinuationDictionaryWithAction:(id)arg1 sourceApplication:(id)arg2 ;
+(void)_scheduleDataSaveForSceneSession:(id)arg1 saveRestorationActivity:(BOOL)arg2 ;
+(id)_knownSceneSessionMap;
+(void)_saveRestorationStateForScene:(id)arg1 ;
+(void)_initializeUserActivityManager;
+(void)_deleteSavedSceneSessionDirectoryWithIdentifier:(id)arg1 ;
+(id)_fetchSceneSessionWithPersistentIdentifier:(id)arg1 ;
+(void)_deleteSceneSessionsWithPersistentIdentifiers:(id)arg1 ;
+(id)_getUserInfoForSceneIdentifier:(id)arg1 error:(id*)arg2 ;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(void)_saveSceneRestorationState;
-(id)_updateCanvasConnectionOptionsDictionary:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(BOOL)activityContinuationManager:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)activityContinuationManager:(id)arg1 didUpdateUserActivity:(id)arg2 ;
-(BOOL)_isDisplayingActivityContinuationUI;
-(void)_setIsDisplayingActivityContinuationUI:(BOOL)arg1 ;
-(void)_saveOrClearRestorationDictionary:(id)arg1 forScene:(id)arg2 ;
-(void)_setupCanvasRestorationState;
-(id)activityContinuationManagerUserCancelledError:(id)arg1 ;
-(void)activityContinuationManager:(id)arg1 configureProgressUIWithError:(id)arg2 ;
-(BOOL)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(id)arg1 ;
-(UIActivityContinuationManager *)_activityContinuationManager;
-(void)_performCanvasRestorationIfNecessary;
-(void)_performCanvasRestoration;
-(void)_sceneWillInvalidate:(id)arg1 ;
-(void)activityContinuationManager:(id)arg1 displayProgressUI:(id)arg2 dismissalHandler:(/*^block*/id)arg3 ;
-(void)_checkActivityContinuationAndBecomeCurrentIfNeeded;
-(void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3 ;
-(void)activityContinuationManager:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(BOOL)activityContinuationManager:(id)arg1 continueUserActivity:(id)arg2 ;
-(void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3 ;
-(void)activityContinuationManager:(id)arg1 hideProgressUIWithCompletion:(/*^block*/id)arg2 ;
@end

