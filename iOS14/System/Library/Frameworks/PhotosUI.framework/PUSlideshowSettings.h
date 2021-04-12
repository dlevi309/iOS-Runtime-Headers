/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXSettings.h>

@class OKProducerPreset, NSString;

@interface PUSlideshowSettings : PXSettings {

	BOOL _allowUserInteractivity;
	BOOL _slideshowSettingsEnableFullscreenSupport;
	OKProducerPreset* _currentPreset;
	double _interactiveTransitionFingerTrackingBoxRadiusMinValue;
	double _interactiveTransitionFingerTrackingBoxRadiusMaxValue;
	double _interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
	double _interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
	double _interactiveTransitionProgressThresholdMinValue;
	double _interactiveTransitionProgressThresholdMaxValue;
	double _interactiveTransitionProgressThresholdDefaultValue;
	double _interactiveTransitionProgressThresholdIncrementValue;
	double _interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
	double _interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
	double _interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
	double _interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
	NSString* _currentPresetUniqueIdentifier;

}

@property (assign,nonatomic) BOOL allowUserInteractivity;                                                                //@synthesize allowUserInteractivity=_allowUserInteractivity - In the implementation block
@property (assign,nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMinValue;                                //@synthesize interactiveTransitionFingerTrackingBoxRadiusMinValue=_interactiveTransitionFingerTrackingBoxRadiusMinValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMaxValue;                                //@synthesize interactiveTransitionFingerTrackingBoxRadiusMaxValue=_interactiveTransitionFingerTrackingBoxRadiusMaxValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionFingerTrackingBoxRadiusDefaultValue;                            //@synthesize interactiveTransitionFingerTrackingBoxRadiusDefaultValue=_interactiveTransitionFingerTrackingBoxRadiusDefaultValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionFingerTrackingBoxRadiusIncrementValue;                          //@synthesize interactiveTransitionFingerTrackingBoxRadiusIncrementValue=_interactiveTransitionFingerTrackingBoxRadiusIncrementValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThresholdMinValue;                                      //@synthesize interactiveTransitionProgressThresholdMinValue=_interactiveTransitionProgressThresholdMinValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThresholdMaxValue;                                      //@synthesize interactiveTransitionProgressThresholdMaxValue=_interactiveTransitionProgressThresholdMaxValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThresholdDefaultValue;                                  //@synthesize interactiveTransitionProgressThresholdDefaultValue=_interactiveTransitionProgressThresholdDefaultValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThresholdIncrementValue;                                //@synthesize interactiveTransitionProgressThresholdIncrementValue=_interactiveTransitionProgressThresholdIncrementValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;                    //@synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;                    //@synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;                //@synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;              //@synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue - In the implementation block
@property (assign,nonatomic) BOOL slideshowSettingsEnableFullscreenSupport;                                              //@synthesize slideshowSettingsEnableFullscreenSupport=_slideshowSettingsEnableFullscreenSupport - In the implementation block
@property (nonatomic,retain) OKProducerPreset * currentPreset;                                                           //@synthesize currentPreset=_currentPreset - In the implementation block
@property (nonatomic,retain) NSString * currentPresetUniqueIdentifier;                                                   //@synthesize currentPresetUniqueIdentifier=_currentPresetUniqueIdentifier - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(id)archiveValueForKey:(id)arg1 ;
-(void)setDefaultValues;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(void)performPostSaveActions;
-(void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue:(double)arg1 ;
-(void)setInteractiveTransitionProgressThresholdIncrementValue:(double)arg1 ;
-(NSString *)currentPresetUniqueIdentifier;
-(void)setInteractiveTransitionProgressThresholdMinValue:(double)arg1 ;
-(void)setInteractiveTransitionProgressThresholdDefaultValue:(double)arg1 ;
-(void)setDefaultPresetTransitionValues;
-(void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue:(double)arg1 ;
-(BOOL)slideshowSettingsEnableFullscreenSupport;
-(double)interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
-(double)interactiveTransitionProgressThresholdMinValue;
-(void)setCurrentPresetUniqueIdentifier:(NSString *)arg1 ;
-(void)setInteractiveTransitionFingerTrackingBoxRadiusIncrementValue:(double)arg1 ;
-(void)removeTransitionTimingCustomizationsFromUserDefaults;
-(void)setSlideshowSettingsEnableFullscreenSupport:(BOOL)arg1 ;
-(void)saveInteractiveSlideshowSettingsInUserDefaults;
-(void)setAllowUserInteractivity:(BOOL)arg1 ;
-(OKProducerPreset *)currentPreset;
-(void)setCurrentPreset:(OKProducerPreset *)arg1 ;
-(double)interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
-(double)interactiveTransitionFingerTrackingBoxRadiusMinValue;
-(double)interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
-(void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;
-(BOOL)transitionSettingsAreDefaults;
-(void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingMinValue:(double)arg1 ;
-(void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingMaxValue:(double)arg1 ;
-(void)setInteractiveTransitionFingerTrackingBoxRadiusMaxValue:(double)arg1 ;
-(double)interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
-(double)interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
-(void)setInteractiveTransitionProgressThresholdMaxValue:(double)arg1 ;
-(void)setInteractiveTransitionFingerTrackingBoxRadiusDefaultValue:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowUserInteractivity;
-(double)interactiveTransitionProgressThresholdDefaultValue;
-(double)interactiveTransitionFingerTrackingBoxRadiusMaxValue;
-(double)interactiveTransitionProgressThresholdIncrementValue;
-(void)setInteractiveTransitionFingerTrackingBoxRadiusMinValue:(double)arg1 ;
-(double)interactiveTransitionProgressThresholdMaxValue;
-(double)interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
@end

