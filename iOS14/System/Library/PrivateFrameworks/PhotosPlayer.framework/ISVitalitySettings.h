/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/ISSettings.h>
#import <libobjc.A.dylib/ISVitalitySettings.h>

@protocol ISVitalitySettings <NSObject>
@required
-(double)playbackRate;
-(double)preDuration;
-(long long)behavior;
-(double)endTimeOffset;
-(double)minimumVisibilityFactor;
-(double)maxVitalityDelay;
-(double)maximumDelayBeforePlayback;
-(double)postDuration;
-(double)minimumPhotoTransitionDuration;

@end


@class ISVitalitySpecificSettings, NSString;

@interface ISVitalitySettings : ISSettings <ISVitalitySettings> {

	BOOL _shouldPreroll;
	BOOL _useLegacyBehavior;
	ISVitalitySpecificSettings* _oneUpSettings;
	ISVitalitySpecificSettings* _shareViewSettings;
	ISVitalitySpecificSettings* _activityViewSettings;
	ISVitalitySpecificSettings* _orbPreviewSettings;

}

@property (assign,nonatomic) BOOL useLegacyBehavior;                                         //@synthesize useLegacyBehavior=_useLegacyBehavior - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * oneUpSettings;                     //@synthesize oneUpSettings=_oneUpSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * shareViewSettings;                 //@synthesize shareViewSettings=_shareViewSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * activityViewSettings;              //@synthesize activityViewSettings=_activityViewSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * orbPreviewSettings;                //@synthesize orbPreviewSettings=_orbPreviewSettings - In the implementation block
@property (assign,nonatomic) BOOL shouldPreroll;                                             //@synthesize shouldPreroll=_shouldPreroll - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)shouldPreroll;
-(double)playbackRate;
-(BOOL)useLegacyBehavior;
-(double)preDuration;
-(void)setUseLegacyBehavior:(BOOL)arg1 ;
-(void)setOrbPreviewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(long long)behavior;
-(ISVitalitySpecificSettings *)oneUpSettings;
-(void)setOneUpSettings:(ISVitalitySpecificSettings *)arg1 ;
-(void)setShouldPreroll:(BOOL)arg1 ;
-(double)endTimeOffset;
-(double)minimumVisibilityFactor;
-(ISVitalitySpecificSettings *)orbPreviewSettings;
-(double)maxVitalityDelay;
-(void)setShareViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(double)maximumDelayBeforePlayback;
-(void)setActivityViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(ISVitalitySpecificSettings *)shareViewSettings;
-(double)postDuration;
-(ISVitalitySpecificSettings *)activityViewSettings;
-(double)minimumPhotoTransitionDuration;
-(id)_defaultSettings;
@end

