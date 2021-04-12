/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString;

@interface SBSoundDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,getter=isRingerMuted,nonatomic) BOOL ringerMuted; 
@property (nonatomic,retain) NSString * calendarAlarmPath; 
@property (nonatomic,readonly) BOOL vibrateWhenRinging; 
@property (nonatomic,readonly) BOOL vibrateWhenSilent; 
@property (nonatomic,readonly) BOOL playSoundOnDeviceWake; 
@property (nonatomic,readonly) BOOL debugEUVolumeLimit; 
-(void)setVibrateWhenRinging:(BOOL)arg1 ;
-(BOOL)vibrateWhenRinging;
-(void)setRingerMuted:(BOOL)arg1 ;
-(BOOL)isRingerMuted;
-(void)setVibrateWhenSilent:(BOOL)arg1 ;
-(BOOL)vibrateWhenSilent;
-(void)setCalendarAlarmPath:(NSString *)arg1 ;
-(NSString *)calendarAlarmPath;
-(void)setPlaySoundOnDeviceWake:(BOOL)arg1 ;
-(BOOL)playSoundOnDeviceWake;
-(void)setDebugEUVolumeLimit:(BOOL)arg1 ;
-(BOOL)debugEUVolumeLimit;
-(void)_bindAndRegisterDefaults;
@end

