/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <ClockKitUI/CLKUIQuad.h>

@class CLKDevice, NTKCharacterRenderer;

@interface NTKCharacterQuad : CLKUIQuad {

	CLKDevice* _clkDevice;
	NTKCharacterRenderer* _renderer;

}

@property (nonatomic,retain) NTKCharacterRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
-(void)dealloc;
-(void)purge;
-(NTKCharacterRenderer *)renderer;
-(void)setRenderer:(NTKCharacterRenderer *)arg1 ;
-(void)setupForQuadView:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(id)clkDevice;
-(id)initWithCLKDevice:(id)arg1 ;
@end

