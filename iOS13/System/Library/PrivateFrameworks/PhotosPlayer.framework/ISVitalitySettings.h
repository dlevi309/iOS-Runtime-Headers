/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/ISSettings.h>
#import <libobjc.A.dylib/ISVitalitySettings.h>

@protocol ISVitalitySettings <NSObject>
@required
-(long long)behavior;
-(double)playbackRate;
-(double)maximumDelayBeforePlayback;
-(double)preDuration;
-(double)endTimeOffset;
-(double)minimumVisibilityFactor;
-(double)postDuration;
-(double)maxVitalityDelay;
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
-(long long)behavior;
-(double)playbackRate;
-(id)_defaultSettings;
-(ISVitalitySpecificSettings *)oneUpSettings;
-(void)setOneUpSettings:(ISVitalitySpecificSettings *)arg1 ;
-(double)maximumDelayBeforePlayback;
-(double)preDuration;
-(double)endTimeOffset;
-(double)minimumVisibilityFactor;
-(double)postDuration;
-(double)maxVitalityDelay;
-(double)minimumPhotoTransitionDuration;
-(BOOL)shouldPreroll;
-(void)setShouldPreroll:(BOOL)arg1 ;
-(BOOL)useLegacyBehavior;
-(void)setUseLegacyBehavior:(BOOL)arg1 ;
-(ISVitalitySpecificSettings *)shareViewSettings;
-(void)setShareViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(ISVitalitySpecificSettings *)activityViewSettings;
-(void)setActivityViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(ISVitalitySpecificSettings *)orbPreviewSettings;
-(void)setOrbPreviewSettings:(ISVitalitySpecificSettings *)arg1 ;
@end

