/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBVolumeControlState : NSObject <NSCopying> {

	BOOL _isAudioPlayingSomewhere;
	BOOL _currentRouteHasVolumeControl;
	BOOL _isFullyMuted;
	BOOL _isRingerMuted;
	BOOL _isUILocked;
	BOOL _isHostingAppOnLockScreen;
	BOOL _isShowingLockScreenMediaControls;
	NSString* _activeVolumeCategoryName;

}

@property (nonatomic,copy) NSString * activeVolumeCategoryName;                                                            //@synthesize activeVolumeCategoryName=_activeVolumeCategoryName - In the implementation block
@property (assign,setter=setAudioPlayingSomewhere:,nonatomic) BOOL isAudioPlayingSomewhere;                                //@synthesize isAudioPlayingSomewhere=_isAudioPlayingSomewhere - In the implementation block
@property (assign,setter=setCurrentRouteHasVolumeControl:,nonatomic) BOOL currentRouteHasVolumeControl;                    //@synthesize currentRouteHasVolumeControl=_currentRouteHasVolumeControl - In the implementation block
@property (assign,setter=setFullyMuted:,nonatomic) BOOL isFullyMuted;                                                      //@synthesize isFullyMuted=_isFullyMuted - In the implementation block
@property (assign,setter=setRingerMuted:,nonatomic) BOOL isRingerMuted;                                                    //@synthesize isRingerMuted=_isRingerMuted - In the implementation block
@property (assign,setter=setUILocked:,nonatomic) BOOL isUILocked;                                                          //@synthesize isUILocked=_isUILocked - In the implementation block
@property (assign,setter=setHostingAppOnLockScreen:,nonatomic) BOOL isHostingAppOnLockScreen;                              //@synthesize isHostingAppOnLockScreen=_isHostingAppOnLockScreen - In the implementation block
@property (assign,setter=setShowingLockScreenMediaControls:,nonatomic) BOOL isShowingLockScreenMediaControls;              //@synthesize isShowingLockScreenMediaControls=_isShowingLockScreenMediaControls - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRingerMuted;
-(BOOL)currentRouteHasVolumeControl;
-(void)setCurrentRouteHasVolumeControl:(BOOL)arg1 ;
-(void)setRingerMuted:(BOOL)arg1 ;
-(BOOL)isUILocked;
-(BOOL)isFullyMuted;
-(BOOL)isHostingAppOnLockScreen;
-(BOOL)isAudioPlayingSomewhere;
-(BOOL)isShowingLockScreenMediaControls;
-(void)setAudioPlayingSomewhere:(BOOL)arg1 ;
-(void)setFullyMuted:(BOOL)arg1 ;
-(void)setActiveVolumeCategoryName:(NSString *)arg1 ;
-(void)setUILocked:(BOOL)arg1 ;
-(void)setHostingAppOnLockScreen:(BOOL)arg1 ;
-(void)setShowingLockScreenMediaControls:(BOOL)arg1 ;
-(NSString *)activeVolumeCategoryName;
@end

