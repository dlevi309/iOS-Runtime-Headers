/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCurveView.h>

@class NSArray;

@interface NTKRichComplicationCurvedMeteredView : NTKRichComplicationCurveView {

	NSArray* _meterLayers;

}

@property (nonatomic,retain) NSArray * meterLayers;              //@synthesize meterLayers=_meterLayers - In the implementation block
-(void)_updateGradient;
-(void)setProgress:(double)arg1 ;
-(void)setMeterLayers:(NSArray *)arg1 ;
-(void)colorMetersWithProgress:(double)arg1 ;
-(NSArray *)meterLayers;
-(void)_setupShapeLayer:(id)arg1 ;
-(id)_shapeStrokeColor;
-(double)rotationAngleAtProgress:(float)arg1 ;
-(/*^block*/id)customizeMeterLayerBlock;
@end

