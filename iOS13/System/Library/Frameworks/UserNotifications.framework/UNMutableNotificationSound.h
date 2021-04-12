/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationSound.h>

@class NSString, NSNumber, NSURL;

@interface UNMutableNotificationSound : UNNotificationSound

@property (nonatomic,copy) NSString * alertTopic; 
@property (nonatomic,copy) NSString * audioCategory; 
@property (nonatomic,copy) NSNumber * audioVolume; 
@property (assign,getter=isCritical,nonatomic) BOOL critical; 
@property (assign,nonatomic) double maximumDuration; 
@property (assign,nonatomic) BOOL shouldIgnoreRingerSwitch; 
@property (assign,nonatomic) BOOL shouldRepeat; 
@property (nonatomic,copy) NSString * toneFileName; 
@property (nonatomic,copy) NSURL * toneFileURL; 
@property (nonatomic,copy) NSString * toneIdentifier; 
@property (assign,nonatomic) unsigned long long toneMediaLibraryItemIdentifier; 
@property (nonatomic,copy) NSString * vibrationIdentifier; 
@property (nonatomic,copy) NSURL * vibrationPatternFileURL; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaximumDuration:(double)arg1 ;
-(void)setToneFileName:(NSString *)arg1 ;
-(void)setToneIdentifier:(NSString *)arg1 ;
-(void)setCritical:(BOOL)arg1 ;
-(void)setAlertTopic:(NSString *)arg1 ;
-(void)setAudioCategory:(NSString *)arg1 ;
-(void)setAudioVolume:(NSNumber *)arg1 ;
-(void)setShouldIgnoreRingerSwitch:(BOOL)arg1 ;
-(void)setShouldRepeat:(BOOL)arg1 ;
-(void)setToneFileURL:(NSURL *)arg1 ;
-(void)setToneMediaLibraryItemIdentifier:(unsigned long long)arg1 ;
-(void)setVibrationIdentifier:(NSString *)arg1 ;
-(void)setVibrationPatternFileURL:(NSURL *)arg1 ;
@end

