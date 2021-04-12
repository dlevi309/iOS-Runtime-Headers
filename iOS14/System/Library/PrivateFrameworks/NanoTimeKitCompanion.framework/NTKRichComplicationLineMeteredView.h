/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationLineView.h>

@class NSArray;

@interface NTKRichComplicationLineMeteredView : NTKRichComplicationLineView {

	NSArray* _meterLayers;

}

@property (nonatomic,retain) NSArray * meterLayers;              //@synthesize meterLayers=_meterLayers - In the implementation block
-(void)_updateGradient;
-(void)setProgress:(double)arg1 ;
-(CGPoint)_pointAtProgress:(float)arg1 ;
-(void)setMeterLayers:(NSArray *)arg1 ;
-(void)colorMetersWithProgress:(double)arg1 ;
-(NSArray *)meterLayers;
-(void)_setupShapeLayer:(id)arg1 ;
-(id)_shapeStrokeColor;
@end

