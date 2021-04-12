/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)currentState;
-(id<SBLockScreenNowPlayingControllerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<SBLockScreenNowPlayingControllerDelegate>)arg1 ;
-(void)_removeObservers;
-(void)_addObservers;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)isEnabled;
-(double)_timeoutInterval;
-(void)dealloc;
-(void)_updateNowPlayingPlugin;
-(void)_invalidateDisableTimer;
-(void)_updateToState:(long long)arg1 ;
-(BOOL)_isMediaRecentlyActive;
-(void)_startDisableTimer;
-(void)_disableTimerFired;
-(id)initWithMediaController:(id)arg1 ;
-(BOOL)isNowPlayingActive;
@end

