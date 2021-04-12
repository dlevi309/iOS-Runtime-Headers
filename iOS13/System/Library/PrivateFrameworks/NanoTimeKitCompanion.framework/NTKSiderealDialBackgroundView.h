/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NTKSiderealBackgroundQuad, CLKUIQuadView, NTKAltitudeColorCurveView;

@interface NTKSiderealDialBackgroundView : UIView {

	NTKSiderealBackgroundQuad* _backgroundQuad;
	CLKUIQuadView* _quadView;
	NTKSiderealBackgroundQuad* _quad;
	NTKAltitudeColorCurveView* _backgroundDialView;

}

@property (nonatomic,retain) NTKAltitudeColorCurveView * backgroundDialView;              //@synthesize backgroundDialView=_backgroundDialView - In the implementation block
@property (nonatomic,retain) CLKUIQuadView * quadView;                                    //@synthesize quadView=_quadView - In the implementation block
@property (nonatomic,readonly) NTKSiderealBackgroundQuad * quad;                          //@synthesize quad=_quad - In the implementation block
-(void)layoutSubviews;
-(NTKSiderealBackgroundQuad *)quad;
-(void)setQuadView:(CLKUIQuadView *)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(CLKUIQuadView *)quadView;
-(void)setSolarDayProgress:(double)arg1 ;
-(void)setSectors:(id)arg1 ;
-(void)updateDayMask;
-(id)initWithFrame:(CGRect)arg1 orbitDiameter:(double)arg2 timeOrbitRadius:(double)arg3 timeRadius:(double)arg4 dialImage:(id)arg5 waypointImage:(id)arg6 gnomonImage:(id)arg7 dayGnomonImage:(id)arg8 dayDiskBloomImage:(id)arg9 dayDiscImage:(id)arg10 nightGnomonImage:(id)arg11 nightDiscImage:(id)arg12 nightRingImage:(id)arg13 dataSource:(id)arg14 ;
-(NTKAltitudeColorCurveView *)backgroundDialView;
-(void)setBackgroundDialView:(NTKAltitudeColorCurveView *)arg1 ;
@end

