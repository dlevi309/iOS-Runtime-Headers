/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@class NSString;

@interface CSLockScreenTestPluginSettings : PTSettings {

	BOOL _enablePlugin;
	BOOL _enableLostModePlugin;
	BOOL _restrictSiri;
	BOOL _restrictCamera;
	BOOL _restrictUnlock;
	BOOL _restrictLogout;
	BOOL _restrictTouchID;
	BOOL _restrictMediaControls;
	BOOL _restrictTodayCenter;
	BOOL _restrictControlCenter;
	BOOL _hideStatusBar;
	BOOL _hideTimeAndDate;
	BOOL _hideSubtitle;
	BOOL _disableOnUnlock;
	long long _presentationStyle;
	long long _backgroundStyle;
	long long _notificationBehavior;
	NSString* _subtitleValue;

}

@property (assign) BOOL enablePlugin;                           //@synthesize enablePlugin=_enablePlugin - In the implementation block
@property (assign) BOOL enableLostModePlugin;                   //@synthesize enableLostModePlugin=_enableLostModePlugin - In the implementation block
@property (assign) long long presentationStyle;                 //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign) long long backgroundStyle;                   //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign) long long notificationBehavior;              //@synthesize notificationBehavior=_notificationBehavior - In the implementation block
@property (assign) BOOL restrictSiri;                           //@synthesize restrictSiri=_restrictSiri - In the implementation block
@property (assign) BOOL restrictCamera;                         //@synthesize restrictCamera=_restrictCamera - In the implementation block
@property (assign) BOOL restrictUnlock;                         //@synthesize restrictUnlock=_restrictUnlock - In the implementation block
@property (assign) BOOL restrictLogout;                         //@synthesize restrictLogout=_restrictLogout - In the implementation block
@property (assign) BOOL restrictTouchID;                        //@synthesize restrictTouchID=_restrictTouchID - In the implementation block
@property (assign) BOOL restrictMediaControls;                  //@synthesize restrictMediaControls=_restrictMediaControls - In the implementation block
@property (assign) BOOL restrictTodayCenter;                    //@synthesize restrictTodayCenter=_restrictTodayCenter - In the implementation block
@property (assign) BOOL restrictControlCenter;                  //@synthesize restrictControlCenter=_restrictControlCenter - In the implementation block
@property (assign) BOOL hideStatusBar;                          //@synthesize hideStatusBar=_hideStatusBar - In the implementation block
@property (assign) BOOL hideTimeAndDate;                        //@synthesize hideTimeAndDate=_hideTimeAndDate - In the implementation block
@property (assign) BOOL hideSubtitle;                           //@synthesize hideSubtitle=_hideSubtitle - In the implementation block
@property (retain) NSString * subtitleValue;                    //@synthesize subtitleValue=_subtitleValue - In the implementation block
@property (assign) BOOL disableOnUnlock;                        //@synthesize disableOnUnlock=_disableOnUnlock - In the implementation block
+(id)settingsControllerModule;
-(void)setPresentationStyle:(long long)arg1 ;
-(long long)presentationStyle;
-(void)setDefaultValues;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(long long)notificationBehavior;
-(void)setNotificationBehavior:(long long)arg1 ;
-(void)setEnablePlugin:(BOOL)arg1 ;
-(void)setEnableLostModePlugin:(BOOL)arg1 ;
-(void)setRestrictSiri:(BOOL)arg1 ;
-(void)setRestrictCamera:(BOOL)arg1 ;
-(void)setRestrictUnlock:(BOOL)arg1 ;
-(void)setRestrictLogout:(BOOL)arg1 ;
-(void)setRestrictTouchID:(BOOL)arg1 ;
-(void)setRestrictMediaControls:(BOOL)arg1 ;
-(void)setRestrictTodayCenter:(BOOL)arg1 ;
-(void)setRestrictControlCenter:(BOOL)arg1 ;
-(void)setHideStatusBar:(BOOL)arg1 ;
-(void)setHideTimeAndDate:(BOOL)arg1 ;
-(void)setHideSubtitle:(BOOL)arg1 ;
-(void)setSubtitleValue:(NSString *)arg1 ;
-(void)setDisableOnUnlock:(BOOL)arg1 ;
-(BOOL)enablePlugin;
-(BOOL)enableLostModePlugin;
-(BOOL)restrictSiri;
-(BOOL)restrictCamera;
-(BOOL)restrictUnlock;
-(BOOL)restrictLogout;
-(BOOL)restrictTouchID;
-(BOOL)restrictMediaControls;
-(BOOL)restrictTodayCenter;
-(BOOL)restrictControlCenter;
-(BOOL)hideStatusBar;
-(BOOL)hideTimeAndDate;
-(BOOL)hideSubtitle;
-(NSString *)subtitleValue;
-(BOOL)disableOnUnlock;
@end
