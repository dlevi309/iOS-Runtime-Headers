/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <QuartzCore/CAReplicatorLayer.h>

@class CAShapeLayer, CATextLayer, NSMutableArray;

@interface CRBoxLayer : CAReplicatorLayer {

	BOOL _customInit;
	double _frameRatio;
	CAShapeLayer* _reticleLayer;
	CATextLayer* _codeLayer;
	NSMutableArray* _completionBlocks;
	double _demoSpeed;

}

@property (retain) CAShapeLayer * reticleLayer;                    //@synthesize reticleLayer=_reticleLayer - In the implementation block
@property (retain) CATextLayer * codeLayer;                        //@synthesize codeLayer=_codeLayer - In the implementation block
@property (retain) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (assign) double demoSpeed;                               //@synthesize demoSpeed=_demoSpeed - In the implementation block
@property (assign) BOOL customInit;                                //@synthesize customInit=_customInit - In the implementation block
@property (assign,nonatomic) double frameRatio;                    //@synthesize frameRatio=_frameRatio - In the implementation block
+(id)layer;
-(void)animatePulseColor:(id)arg1 ;
-(void)layoutSublayers;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMutableArray *)completionBlocks;
-(CATextLayer *)codeLayer;
-(id)init;
-(void)setCustomInit:(BOOL)arg1 ;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)animateToPosition:(CGPoint)arg1 transform:(CATransform3D)arg2 opacity:(double)arg3 type:(long long)arg4 ;
-(void)setDemoSpeed:(double)arg1 ;
-(void)setCodeLayer:(CATextLayer *)arg1 ;
-(void)animateReveal;
-(void)setReticleLayer:(CAShapeLayer *)arg1 ;
-(void)positionForCodeBoxPoints:(id)arg1 ;
-(id)initWithCodeFrameRatio:(double)arg1 ;
-(void)setString:(id)arg1 mirrored:(BOOL)arg2 inverted:(BOOL)arg3 ;
-(void)setFrameRatio:(double)arg1 ;
-(CAShapeLayer *)reticleLayer;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(double)frameRatio;
-(double)demoSpeed;
-(void)animateConceal;
-(void)dealloc;
-(BOOL)customInit;
@end

