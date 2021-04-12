/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBackdropViewSettings.h>

@class _UIBackdropViewSettings;

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings {

	_UIBackdropViewSettings* _inputSettingsA;
	_UIBackdropViewSettings* _inputSettingsB;
	double _weighting;
	_UIBackdropViewSettings* _outputSettingsA;
	_UIBackdropViewSettings* _outputSettingsB;

}

@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsA;              //@synthesize outputSettingsA=_outputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsB;              //@synthesize outputSettingsB=_outputSettingsB - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsA;               //@synthesize inputSettingsA=_inputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsB;               //@synthesize inputSettingsB=_inputSettingsB - In the implementation block
@property (assign,nonatomic) double weighting;                                       //@synthesize weighting=_weighting - In the implementation block
-(BOOL)isBackdropVisible;
-(void)setDefaultValues;
-(double)weighting;
-(void)setWeighting:(double)arg1 ;
-(void)copyAdditionalSettingsFromSettings:(id)arg1 ;
-(void)computeOutputSettingsUsingModel:(id)arg1 ;
-(void)setRequiresColorStatistics:(BOOL)arg1 ;
-(_UIBackdropViewSettings *)inputSettingsA;
-(_UIBackdropViewSettings *)inputSettingsB;
-(_UIBackdropViewSettings *)outputSettingsA;
-(_UIBackdropViewSettings *)outputSettingsB;
-(BOOL)requiresBackdropLayer;
-(void)setOutputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(void)setOutputSettingsB:(_UIBackdropViewSettings *)arg1 ;
-(void)setInputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(void)setInputSettingsB:(_UIBackdropViewSettings *)arg1 ;
@end

