/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBCommandTabViewControllerDelegate.h>
#import <libobjc.A.dylib/SBRecentDisplayItemsControllerDelegate.h>
#import <libobjc.A.dylib/SBRecentDisplayItemsPersistenceDelegate.h>

@protocol OS_dispatch_queue, BSInvalidatable;
@class SBCommandTabViewController, NSTimer, UIApplicationSceneDeactivationAssertion, SBRecentDisplayItemsController, NSOrderedSet, NSMutableSet, NSObject, SBRecentDisplayItemsDataStore, SBRecentDisplayItemsDefaults, PTToggleTestRecipe, SBWindow, NSString;

@interface SBCommandTabController : NSObject <SBCommandTabViewControllerDelegate, SBRecentDisplayItemsControllerDelegate, SBRecentDisplayItemsPersistenceDelegate> {

	SBCommandTabViewController* _commandTabViewController;
	NSTimer* _timer;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBRecentDisplayItemsController* _recentDisplayItemsController;
	NSOrderedSet* _persistedRecentDisplayItems;
	NSMutableSet* _appsAllowedWhileHidden;
	NSObject*<OS_dispatch_queue> _recentDisplayItemsPersistenceQueue;
	SBRecentDisplayItemsDataStore* _dataStore;
	SBRecentDisplayItemsDefaults* _defaults;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;
	PTToggleTestRecipe* _testRecipe;
	SBWindow* _window;

}

@property (nonatomic,readonly) SBWindow * window;                          //@synthesize window=_window - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)keyCommands;
+(id)sharedInstanceIfExists;
-(id)init;
-(void)dealloc;
-(void)next;
-(void)previous;
-(BOOL)isVisible;
-(SBWindow *)window;
-(void)dismiss;
-(void)_clearTimer;
-(void)launchCurrentSelectedApplication;
-(void)removeCurrentSelectedApplication;
-(void)activateWithKeyCommand:(id)arg1 ;
-(BOOL)recentDisplayItemsController:(id)arg1 shouldAddItem:(id)arg2 ;
-(void)recentDisplayItemsControllerDidUpdateDisplayItems:(id)arg1 ;
-(void)recentDisplayItemsController:(id)arg1 didRemoveItem:(id)arg2 ;
-(void)_allowAppToAppearWhileHidden:(id)arg1 ;
-(void)_disallowAppFromAppearingWhileHidden:(id)arg1 ;
-(void)_activateWithForwardDirection:(BOOL)arg1 ;
-(void)_showWindow:(BOOL)arg1 ;
-(void)viewController:(id)arg1 selectedApplicationWithDisplayItem:(id)arg2 ;
-(void)_emitAnalyticsEventForDisplayItem:(id)arg1 ;
-(void)_showCommandTabBarAfterTimer:(id)arg1 ;
-(void)viewControllerWantsDismissal:(id)arg1 ;
-(id)persistedDisplayItemsForDataStore:(id)arg1 ;
-(void)dataStore:(id)arg1 persistDisplayItems:(id)arg2 ;
-(BOOL)dataStore:(id)arg1 shouldRestorePersistedDisplayItem:(id)arg2 ;
@end

