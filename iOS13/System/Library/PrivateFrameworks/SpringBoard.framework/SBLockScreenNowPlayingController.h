/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol SBLockScreenNowPlayingControllerDelegate;
@class SBMediaController, PCPersistentTimer, CSLockScreenSettings, PTToggleTestRecipe, NSString;

@interface SBLockScreenNowPlayingController : NSObject <PTSettingsKeyObserver> {

	SBMediaController* _mediaController;
	PCPersistentTimer* _disableTimer;
	CSLockScreenSettings* _testSettings;
	PTToggleTestRecipe* _testRecipe;
	BOOL _enabled;
	long long _currentState;
	id<SBLockScreenNowPlayingControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenNowPlayingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) long long currentState;                                                  //@synthesize currentState=_currentState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id<SBLockScreenNowPlayingControllerDelegate>)delegate;
-(void)setDelegate:(id<SBLockScreenNowPlayingControllerDelegate>)arg1 ;
-(BOOL)isEnabled;
-(long long)currentState;
-(double)_timeoutInterval;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_addObservers;
-(void)_removeObservers;
-(id)initWithMediaController:(id)arg1 ;
-(void)_updateNowPlayingPlugin;
-(void)_invalidateDisableTimer;
-(void)_updateToState:(long long)arg1 ;
-(BOOL)_isMediaRecentlyActive;
-(void)_startDisableTimer;
-(void)_disableTimerFired;
-(BOOL)isNowPlayingActive;
@end

