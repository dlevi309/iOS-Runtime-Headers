/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dateView;
-(void)setContentAlpha:(double)arg1 withSubtitleVisible:(BOOL)arg2 ;
-(BOOL)isSubtitleHidden;
-(void)_updateView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateLegibilityStrength;
-(void)_stopUpdateTimer;
-(void)_handleTimeZoneChange;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_updateFormatIfEnabled;
-(void)setSubtitleHidden:(BOOL)arg1 ;
-(void)setView:(id)arg1 ;
-(void)_updateState;
-(void)willMoveToParentViewController:(id)arg1 ;
-(NSString *)description;
-(BOOL)_canShowWhileLocked;
-(_UILegibilitySettings *)legibilitySettings;
-(id)dateViewIfExists;
-(void)_addObservers;
-(BOOL)screenOff;
-(void)setScreenOff:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<SBFDateProviding>)dateProvider;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setDateProvider:(id<SBFDateProviding>)arg1 ;
-(void)loadView;
-(void)_updateFormat;
-(void)_startUpdateTimer;
-(void)setCustomSubtitleView:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateTimeNow;
@end

