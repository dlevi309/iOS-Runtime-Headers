/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
*/

#import <NanoUniverse/NanoUniverse-Structs.h>
#import <ClockKitUI/CLKUIQuad.h>

@class NURenderer, NUResources, NUScene;

@interface NUMetalQuad : CLKUIQuad {

	double _baseTime;
	NURenderer* _renderer;
	NUResources* _resources;
	CGSize _viewport;
	unsigned _isPrepared : 1;
	NUScene* _scene;

}

@property (nonatomic,retain) NUScene * scene;              //@synthesize scene=_scene - In the implementation block
-(NUScene *)scene;
-(void)setScene:(NUScene *)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setupForQuadView:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
@end

