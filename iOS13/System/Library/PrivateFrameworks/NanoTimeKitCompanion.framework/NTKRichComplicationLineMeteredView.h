/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationLineView.h>

@class NSArray;

@interface NTKRichComplicationLineMeteredView : NTKRichComplicationLineView {

	NSArray* _meterLayers;

}

@property (nonatomic,retain) NSArray * meterLayers;              //@synthesize meterLayers=_meterLayers - In the implementation block
-(void)setProgress:(double)arg1 ;
-(void)_updateGradient;
-(CGPoint)_pointAtProgress:(float)arg1 ;
-(void)setMeterLayers:(NSArray *)arg1 ;
-(void)colorMetersWithProgress:(double)arg1 ;
-(NSArray *)meterLayers;
-(void)_setupShapeLayer:(id)arg1 ;
-(id)_shapeStrokeColor;
@end

