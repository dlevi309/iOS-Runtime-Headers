/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol SBFDateProviding;
@class _UILegibilitySettings, NSString;

@interface SBFLockScreenDateViewController : UIViewController <PTSettingsKeyObserver> {

	id _timerToken;
	BOOL _isVisible;
	id _minuteHandlerToken;
	BOOL _disablesUpdates;
	BOOL _screenOff;
	_UILegibilitySettings* _legibilitySettings;
	id<SBFDateProviding> _dateProvider;

}

@property (assign,nonatomic) BOOL screenOff;                                           //@synthesize screenOff=_screenOff - In the implementation block
@property (assign,getter=isSubtitleHidden,nonatomic) BOOL subtitleHidden; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;               //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) id<SBFDateProviding> dateProvider;                        //@synthesize dateProvider=_dateProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateView;
-(void)_updateState;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)dateView;
-(void)_addObservers;
-(void)_stopUpdateTimer;
-(void)_startUpdateTimer;
-(id<SBFDateProviding>)dateProvider;
-(BOOL)isSubtitleHidden;
-(void)setSubtitleHidden:(BOOL)arg1 ;
-(void)setContentAlpha:(double)arg1 withSubtitleVisible:(BOOL)arg2 ;
-(void)setCustomSubtitleView:(id)arg1 ;
-(void)setDateProvider:(id<SBFDateProviding>)arg1 ;
-(id)dateViewIfExists;
-(void)_updateLegibilityStrength;
-(void)_updateFormatIfEnabled;
-(void)_updateFormat;
-(void)_handleTimeZoneChange;
-(void)updateTimeNow;
-(void)setScreenOff:(BOOL)arg1 ;
-(BOOL)screenOff;
@end

