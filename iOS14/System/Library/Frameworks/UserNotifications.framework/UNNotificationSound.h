/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSURL;

@interface UNNotificationSound : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	long long _alertType;
	NSString* _alertTopic;
	NSString* _audioCategory;
	NSNumber* _audioVolume;
	double _maximumDuration;
	BOOL _critical;
	BOOL _shouldIgnoreRingerSwitch;
	BOOL _shouldRepeat;
	NSString* _toneFileName;
	NSURL* _toneFileURL;
	NSString* _toneIdentifier;
	unsigned long long _toneMediaLibraryItemIdentifier;
	NSString* _vibrationIdentifier;
	NSURL* _vibrationPatternFileURL;

}

@property (nonatomic,readonly) long long alertType;                                            //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertTopic;                                     //@synthesize alertTopic=_alertTopic - In the implementation block
@property (nonatomic,copy,readonly) NSString * audioCategory;                                  //@synthesize audioCategory=_audioCategory - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioVolume;                                    //@synthesize audioVolume=_audioVolume - In the implementation block
@property (getter=isCritical,nonatomic,readonly) BOOL critical;                                //@synthesize critical=_critical - In the implementation block
@property (nonatomic,readonly) double maximumDuration;                                         //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreRingerSwitch;                                  //@synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch - In the implementation block
@property (nonatomic,readonly) BOOL shouldRepeat;                                              //@synthesize shouldRepeat=_shouldRepeat - In the implementation block
@property (nonatomic,copy,readonly) NSString * toneFileName;                                   //@synthesize toneFileName=_toneFileName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * toneFileURL;                                       //@synthesize toneFileURL=_toneFileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * toneIdentifier;                                 //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long toneMediaLibraryItemIdentifier;              //@synthesize toneMediaLibraryItemIdentifier=_toneMediaLibraryItemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * vibrationIdentifier;                            //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * vibrationPatternFileURL;                           //@synthesize vibrationPatternFileURL=_vibrationPatternFileURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)soundWithAlertType:(long long)arg1 ;
+(id)defaultSound;
+(id)defaultSystemSound;
+(id)_soundWithAlertType:(long long)arg1 audioVolume:(id)arg2 critical:(BOOL)arg3 toneFileName:(id)arg4 ;
+(id)defaultCriticalSound;
+(id)defaultCriticalSoundWithAudioVolume:(float)arg1 ;
+(id)criticalSoundNamed:(id)arg1 ;
+(id)soundNamed:(id)arg1 ;
+(id)criticalSoundNamed:(id)arg1 withAudioVolume:(float)arg2 ;
-(id)mt_Description;
-(id)mtSound;
-(long long)alertType;
-(id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 audioCategory:(id)arg3 audioVolume:(id)arg4 critical:(BOOL)arg5 maximumDuration:(double)arg6 shouldIgnoreRingerSwitch:(BOOL)arg7 shouldRepeat:(BOOL)arg8 toneFileName:(id)arg9 toneFileURL:(id)arg10 toneIdentifier:(id)arg11 toneMediaLibraryItemIdentifier:(unsigned long long)arg12 vibrationIdentifier:(id)arg13 vibrationPatternFileURL:(id)arg14 ;
-(NSString *)vibrationIdentifier;
-(id)init;
-(NSString *)alertTopic;
-(double)maximumDuration;
-(BOOL)shouldIgnoreRingerSwitch;
-(NSString *)toneIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)vibrationPatternFileURL;
-(NSURL *)toneFileURL;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)audioCategory;
-(unsigned long long)toneMediaLibraryItemIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)shouldRepeat;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)toneFileName;
-(BOOL)isCritical;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)audioVolume;
-(BOOL)isEqual:(id)arg1 ;
@end

