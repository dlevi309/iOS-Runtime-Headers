/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUAirPlaySettings : PXSettings {

	BOOL _ignoreMirroredScreens;
	BOOL _ignoreScreenRecordingScreens;
	BOOL _compensateForOverscan;
	BOOL _switchToMediaPresentationMode;
	unsigned long long _placeholderForSecondScreen;
	unsigned long long _placeholderForMirroredScreen;
	double _minimumZoomForScrollPadding;
	double _maximumZoomForScrollPadding;
	double _simulatedScreenContentWidth;
	double _simulatedScreenContentHeight;
	long long _routeAvailabilityOverride;

}

@property (assign,nonatomic) BOOL ignoreMirroredScreens;                                   //@synthesize ignoreMirroredScreens=_ignoreMirroredScreens - In the implementation block
@property (assign,nonatomic) BOOL ignoreScreenRecordingScreens;                            //@synthesize ignoreScreenRecordingScreens=_ignoreScreenRecordingScreens - In the implementation block
@property (assign,nonatomic) BOOL compensateForOverscan;                                   //@synthesize compensateForOverscan=_compensateForOverscan - In the implementation block
@property (assign,nonatomic) unsigned long long placeholderForSecondScreen;                //@synthesize placeholderForSecondScreen=_placeholderForSecondScreen - In the implementation block
@property (assign,nonatomic) unsigned long long placeholderForMirroredScreen;              //@synthesize placeholderForMirroredScreen=_placeholderForMirroredScreen - In the implementation block
@property (assign,nonatomic) double minimumZoomForScrollPadding;                           //@synthesize minimumZoomForScrollPadding=_minimumZoomForScrollPadding - In the implementation block
@property (assign,nonatomic) double maximumZoomForScrollPadding;                           //@synthesize maximumZoomForScrollPadding=_maximumZoomForScrollPadding - In the implementation block
@property (assign,nonatomic) BOOL switchToMediaPresentationMode;                           //@synthesize switchToMediaPresentationMode=_switchToMediaPresentationMode - In the implementation block
@property (assign,nonatomic) double simulatedScreenContentWidth;                           //@synthesize simulatedScreenContentWidth=_simulatedScreenContentWidth - In the implementation block
@property (assign,nonatomic) double simulatedScreenContentHeight;                          //@synthesize simulatedScreenContentHeight=_simulatedScreenContentHeight - In the implementation block
@property (assign,nonatomic) long long routeAvailabilityOverride;                          //@synthesize routeAvailabilityOverride=_routeAvailabilityOverride - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setCompensateForOverscan:(BOOL)arg1 ;
-(void)setRouteAvailabilityOverride:(long long)arg1 ;
-(BOOL)ignoreScreenRecordingScreens;
-(double)simulatedScreenContentWidth;
-(long long)routeAvailabilityOverride;
-(BOOL)ignoreMirroredScreens;
-(void)setPlaceholderForSecondScreen:(unsigned long long)arg1 ;
-(void)setSimulatedScreenContentHeight:(double)arg1 ;
-(id)debugDescription;
-(void)setIgnoreMirroredScreens:(BOOL)arg1 ;
-(void)setSwitchToMediaPresentationMode:(BOOL)arg1 ;
-(void)setMaximumZoomForScrollPadding:(double)arg1 ;
-(double)minimumZoomForScrollPadding;
-(BOOL)compensateForOverscan;
-(void)setMinimumZoomForScrollPadding:(double)arg1 ;
-(void)setSimulatedScreenContentWidth:(double)arg1 ;
-(unsigned long long)placeholderForSecondScreen;
-(double)simulatedScreenContentHeight;
-(void)setIgnoreScreenRecordingScreens:(BOOL)arg1 ;
-(BOOL)switchToMediaPresentationMode;
-(unsigned long long)placeholderForMirroredScreen;
-(void)setPlaceholderForMirroredScreen:(unsigned long long)arg1 ;
-(double)maximumZoomForScrollPadding;
@end

