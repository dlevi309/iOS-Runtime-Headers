/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableArray, NTKAltitudeColorCurve, NSArray;

@interface NTKSiderealColorManager : NSObject {

	NSMutableArray* _updateHandlers;
	NTKAltitudeColorCurve* _dialBackground;
	NSArray* _dayGradient;
	NTKAltitudeColorCurve* _civilTwilight;
	NTKAltitudeColorCurve* _nauticalTwilight;
	NTKAltitudeColorCurve* _astronomicalTwilight;
	NTKAltitudeColorCurve* _civilTwilightCurve_p3;
	NTKAltitudeColorCurve* _nauticalTwilightCurve_p3;
	NTKAltitudeColorCurve* _astronomicalTwilightCurve_p3;
	NTKAltitudeColorCurve* _dialBackgroundCurve_p3;
	NSArray* _dayGradientCurve_p3;
	NTKAltitudeColorCurve* _innerComplication;
	NTKAltitudeColorCurve* _outerComplication;
	NTKAltitudeColorCurve* _dayDiskBloom;

}
+(id)sharedInstance;
-(id)_init;
-(void)dealloc;
-(void)_notifyHandlers;
-(id)_createElementsFromDict:(id)arg1 ;
-(void)setSunAltitude:(double)arg1 ;
-(void)addColorUpdateHandler:(/*^block*/id)arg1 ;
-(id)civilTwilightCurveP3;
-(id)nauticalTwilightCurveP3;
-(id)astronomicalTwilightCurveP3;
-(id)dayGradientCurveP3;
-(id)dialBackgroundCurveP3;
-(id)dialBackgroundColorCurve;
-(id)dayGradientColorCurves;
-(id)civilTwilightColorCurve;
-(id)nauticalTwilightColorCurve;
-(id)astronomicalTwilightColorCurve;
-(id)innerComplicationColorCurve;
-(id)outerComplicationColorCurve;
-(id)dayDiskBloomColorCurve;
@end

