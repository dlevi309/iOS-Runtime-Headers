/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <ClockKitUI/CLKUIQuad.h>

@class CLKDevice, NTKCharacterRenderer;

@interface NTKCharacterQuad : CLKUIQuad {

	CLKDevice* _clkDevice;
	NTKCharacterRenderer* _renderer;

}

@property (nonatomic,retain) NTKCharacterRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
-(NTKCharacterRenderer *)renderer;
-(void)setRenderer:(NTKCharacterRenderer *)arg1 ;
-(void)purge;
-(void)dealloc;
-(id)clkDevice;
-(void)setupForQuadView:(id)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(id)initWithCLKDevice:(id)arg1 ;
@end

