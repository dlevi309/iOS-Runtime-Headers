/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDefaultValues;
-(void)setRequiresColorStatistics:(BOOL)arg1 ;
-(void)computeOutputSettingsUsingModel:(id)arg1 ;
-(BOOL)requiresBackdropLayer;
-(void)copyAdditionalSettingsFromSettings:(id)arg1 ;
-(BOOL)isBackdropVisible;
-(void)setInputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(void)setInputSettingsB:(_UIBackdropViewSettings *)arg1 ;
-(_UIBackdropViewSettings *)inputSettingsA;
-(_UIBackdropViewSettings *)inputSettingsB;
-(void)setWeighting:(double)arg1 ;
-(double)weighting;
-(_UIBackdropViewSettings *)outputSettingsA;
-(void)setOutputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(_UIBackdropViewSettings *)outputSettingsB;
-(void)setOutputSettingsB:(_UIBackdropViewSettings *)arg1 ;
@end

