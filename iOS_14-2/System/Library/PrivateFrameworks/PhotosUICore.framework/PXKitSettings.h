/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXKitSettings : PXSettings {

	BOOL _defaultAsyncTextRenderingEnabled;
	BOOL _defaultUseShapeLayerForText;
	BOOL _defaultTextAutoscalingEnabled;
	BOOL _defaultTextTruncationEnabled;
	BOOL _allowCapitalization;
	BOOL _allowFontFallback;
	BOOL _simulateSlowTextTypesetting;
	BOOL _drawTypographicGuidelines;
	BOOL _useFancyDarkening;
	long long _defaultLabelTypesettingMode;
	double _defaultTextMinimumScaleFactor;
	double _defaultTruncatedTextMinimumScaleFactor;
	double _textAutoscalingPrecision;
	long long _deviceGraphicsQuality;
	double _simulatedSafeAreaHorizontalInsets;

}

@property (assign,nonatomic) BOOL defaultAsyncTextRenderingEnabled;                      //@synthesize defaultAsyncTextRenderingEnabled=_defaultAsyncTextRenderingEnabled - In the implementation block
@property (assign,nonatomic) long long defaultLabelTypesettingMode;                      //@synthesize defaultLabelTypesettingMode=_defaultLabelTypesettingMode - In the implementation block
@property (assign,nonatomic) BOOL defaultUseShapeLayerForText;                           //@synthesize defaultUseShapeLayerForText=_defaultUseShapeLayerForText - In the implementation block
@property (assign,nonatomic) BOOL defaultTextAutoscalingEnabled;                         //@synthesize defaultTextAutoscalingEnabled=_defaultTextAutoscalingEnabled - In the implementation block
@property (assign,nonatomic) double defaultTextMinimumScaleFactor;                       //@synthesize defaultTextMinimumScaleFactor=_defaultTextMinimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL defaultTextTruncationEnabled;                          //@synthesize defaultTextTruncationEnabled=_defaultTextTruncationEnabled - In the implementation block
@property (assign,nonatomic) double defaultTruncatedTextMinimumScaleFactor;              //@synthesize defaultTruncatedTextMinimumScaleFactor=_defaultTruncatedTextMinimumScaleFactor - In the implementation block
@property (assign,nonatomic) double textAutoscalingPrecision;                            //@synthesize textAutoscalingPrecision=_textAutoscalingPrecision - In the implementation block
@property (assign,nonatomic) BOOL allowCapitalization;                                   //@synthesize allowCapitalization=_allowCapitalization - In the implementation block
@property (assign,nonatomic) BOOL allowFontFallback;                                     //@synthesize allowFontFallback=_allowFontFallback - In the implementation block
@property (assign,nonatomic) BOOL simulateSlowTextTypesetting;                           //@synthesize simulateSlowTextTypesetting=_simulateSlowTextTypesetting - In the implementation block
@property (assign,nonatomic) BOOL drawTypographicGuidelines;                             //@synthesize drawTypographicGuidelines=_drawTypographicGuidelines - In the implementation block
@property (assign,nonatomic) BOOL useFancyDarkening;                                     //@synthesize useFancyDarkening=_useFancyDarkening - In the implementation block
@property (assign,nonatomic) long long deviceGraphicsQuality;                            //@synthesize deviceGraphicsQuality=_deviceGraphicsQuality - In the implementation block
@property (assign,nonatomic) double simulatedSafeAreaHorizontalInsets;                   //@synthesize simulatedSafeAreaHorizontalInsets=_simulatedSafeAreaHorizontalInsets - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(double)simulatedSafeAreaHorizontalInsets;
-(BOOL)allowCapitalization;
-(BOOL)simulateSlowTextTypesetting;
-(void)setSimulatedSafeAreaHorizontalInsets:(double)arg1 ;
-(double)defaultTextMinimumScaleFactor;
-(void)setDeviceGraphicsQuality:(long long)arg1 ;
-(void)setAllowFontFallback:(BOOL)arg1 ;
-(long long)deviceGraphicsQuality;
-(BOOL)defaultAsyncTextRenderingEnabled;
-(BOOL)drawTypographicGuidelines;
-(BOOL)defaultTextTruncationEnabled;
-(BOOL)defaultTextAutoscalingEnabled;
-(void)setSimulateSlowTextTypesetting:(BOOL)arg1 ;
-(void)setUseFancyDarkening:(BOOL)arg1 ;
-(long long)defaultLabelTypesettingMode;
-(void)setTextAutoscalingPrecision:(double)arg1 ;
-(void)setDefaultLabelTypesettingMode:(long long)arg1 ;
-(void)setDefaultTextAutoscalingEnabled:(BOOL)arg1 ;
-(BOOL)defaultUseShapeLayerForText;
-(void)setDefaultTextMinimumScaleFactor:(double)arg1 ;
-(void)setDrawTypographicGuidelines:(BOOL)arg1 ;
-(double)defaultTruncatedTextMinimumScaleFactor;
-(BOOL)allowFontFallback;
-(void)setAllowCapitalization:(BOOL)arg1 ;
-(BOOL)useFancyDarkening;
-(void)setDefaultTextTruncationEnabled:(BOOL)arg1 ;
-(void)setDefaultTruncatedTextMinimumScaleFactor:(double)arg1 ;
-(double)textAutoscalingPrecision;
-(void)setDefaultUseShapeLayerForText:(BOOL)arg1 ;
-(void)setDefaultAsyncTextRenderingEnabled:(BOOL)arg1 ;
@end

