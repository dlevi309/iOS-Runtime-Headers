/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSProgress, CAShapeLayer;

@interface ICLoadingPieLayer : CALayer {

	BOOL _removeOnCompletion;
	double _progress;
	NSProgress* _observedProgress;
	CAShapeLayer* _pieLayer;
	CAShapeLayer* _backgroundLayer;

}

@property (nonatomic,retain) CAShapeLayer * pieLayer;                     //@synthesize pieLayer=_pieLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * backgroundLayer;              //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,readonly) double progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;               //@synthesize observedProgress=_observedProgress - In the implementation block
@property (assign,nonatomic) BOOL removeOnCompletion;                     //@synthesize removeOnCompletion=_removeOnCompletion - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)progress;
-(id)init;
-(NSProgress *)observedProgress;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(CAShapeLayer *)backgroundLayer;
-(void)setBackgroundLayer:(CAShapeLayer *)arg1 ;
-(void)dealloc;
-(CGPathRef)newPathForProgress:(double)arg1 ;
-(BOOL)removeOnCompletion;
-(CAShapeLayer *)pieLayer;
-(void)setRemoveOnCompletion:(BOOL)arg1 ;
-(void)setPieLayer:(CAShapeLayer *)arg1 ;
@end

