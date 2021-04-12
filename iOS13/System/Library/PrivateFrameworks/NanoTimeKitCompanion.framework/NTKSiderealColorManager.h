/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NTKAltitudeColorCurve* _innerComplication;
	NTKAltitudeColorCurve* _outerComplication;
	NTKAltitudeColorCurve* _dayDiskBloom;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)_notifyHandlers;
-(void)setSunAltitude:(double)arg1 ;
-(void)addColorUpdateHandler:(/*^block*/id)arg1 ;
-(id)dialBackgroundColorCurve;
-(id)dayGradientColorCurves;
-(id)civilTwilightColorCurve;
-(id)nauticalTwilightColorCurve;
-(id)astronomicalTwilightColorCurve;
-(id)innerComplicationColorCurve;
-(id)outerComplicationColorCurve;
-(id)dayDiskBloomColorCurve;
@end

