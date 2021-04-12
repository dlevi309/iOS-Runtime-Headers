/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/

#import <ToneLibrary/ToneLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary;

@interface TLAlertConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isFrozen;
	BOOL _hasCustomRepeatingFlag;
	BOOL _hasCustomAudioVolume;
	BOOL _forPreview;
	BOOL _shouldRepeat;
	BOOL _shouldIgnoreRingerSwitch;
	BOOL _shouldForcePlayingAtUserSelectedAudioVolume;
	float _audioVolume;
	double _audioPlaybackInitiationDelay;
	double _audioVolumeRampingDuration;
	long long _type;
	NSString* _topic;
	NSString* _toneIdentifier;
	NSString* _vibrationIdentifier;
	NSURL* _externalToneFileURL;
	unsigned long long _externalToneMediaLibraryItemIdentifier;
	NSDictionary* _externalVibrationPattern;
	NSURL* _externalVibrationPatternFileURL;
	NSString* _audioCategory;
	double _maximumDuration;

}

@property (nonatomic,readonly) BOOL _hasCustomAudioVolume;                                                               //@synthesize hasCustomAudioVolume=_hasCustomAudioVolume - In the implementation block
@property (assign,setter=_setAudioPlaybackInitiationDelay:,nonatomic) double _audioPlaybackInitiationDelay;              //@synthesize audioPlaybackInitiationDelay=_audioPlaybackInitiationDelay - In the implementation block
@property (assign,setter=_setAudioVolumeRampingDuration:,nonatomic) double _audioVolumeRampingDuration;                  //@synthesize audioVolumeRampingDuration=_audioVolumeRampingDuration - In the implementation block
@property (nonatomic,readonly) long long type;                                                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * topic;                                                                             //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy) NSString * toneIdentifier;                                                                    //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vibrationIdentifier;                                                               //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * externalToneFileURL;                                                                  //@synthesize externalToneFileURL=_externalToneFileURL - In the implementation block
@property (assign,nonatomic) unsigned long long externalToneMediaLibraryItemIdentifier;                                  //@synthesize externalToneMediaLibraryItemIdentifier=_externalToneMediaLibraryItemIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * externalVibrationPattern;                                                      //@synthesize externalVibrationPattern=_externalVibrationPattern - In the implementation block
@property (nonatomic,copy) NSURL * externalVibrationPatternFileURL;                                                      //@synthesize externalVibrationPatternFileURL=_externalVibrationPatternFileURL - In the implementation block
@property (nonatomic,copy) NSString * audioCategory;                                                                     //@synthesize audioCategory=_audioCategory - In the implementation block
@property (assign,nonatomic) float audioVolume;                                                                          //@synthesize audioVolume=_audioVolume - In the implementation block
@property (assign,getter=isForPreview,nonatomic) BOOL forPreview;                                                        //@synthesize forPreview=_forPreview - In the implementation block
@property (assign,nonatomic) double maximumDuration;                                                                     //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign,nonatomic) BOOL shouldRepeat;                                                                          //@synthesize shouldRepeat=_shouldRepeat - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreRingerSwitch;                                                              //@synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch - In the implementation block
@property (assign,nonatomic) BOOL shouldForcePlayingAtUserSelectedAudioVolume;                                           //@synthesize shouldForcePlayingAtUserSelectedAudioVolume=_shouldForcePlayingAtUserSelectedAudioVolume - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)topic;
-(void)_freeze;
-(void)setTopic:(NSString *)arg1 ;
-(double)maximumDuration;
-(void)setMaximumDuration:(double)arg1 ;
-(void)setToneIdentifier:(NSString *)arg1 ;
-(NSString *)audioCategory;
-(float)audioVolume;
-(BOOL)shouldIgnoreRingerSwitch;
-(BOOL)shouldRepeat;
-(NSString *)toneIdentifier;
-(NSString *)vibrationIdentifier;
-(void)setAudioCategory:(NSString *)arg1 ;
-(void)setAudioVolume:(float)arg1 ;
-(void)setShouldIgnoreRingerSwitch:(BOOL)arg1 ;
-(void)setShouldRepeat:(BOOL)arg1 ;
-(void)setVibrationIdentifier:(NSString *)arg1 ;
-(void)setForPreview:(BOOL)arg1 ;
-(void)_throwForFrozenInstance;
-(void)setExternalToneFileURL:(NSURL *)arg1 ;
-(void)setExternalToneMediaLibraryItemIdentifier:(unsigned long long)arg1 ;
-(void)setExternalVibrationPattern:(NSDictionary *)arg1 ;
-(void)setExternalVibrationPatternFileURL:(NSURL *)arg1 ;
-(void)setShouldForcePlayingAtUserSelectedAudioVolume:(BOOL)arg1 ;
-(void)_setAudioPlaybackInitiationDelay:(double)arg1 ;
-(void)_setAudioVolumeRampingDuration:(double)arg1 ;
-(BOOL)_hasCustomAudioVolume;
-(double)_audioPlaybackInitiationDelay;
-(double)_audioVolumeRampingDuration;
-(NSURL *)externalToneFileURL;
-(unsigned long long)externalToneMediaLibraryItemIdentifier;
-(NSDictionary *)externalVibrationPattern;
-(NSURL *)externalVibrationPatternFileURL;
-(BOOL)isForPreview;
-(BOOL)shouldForcePlayingAtUserSelectedAudioVolume;
@end

