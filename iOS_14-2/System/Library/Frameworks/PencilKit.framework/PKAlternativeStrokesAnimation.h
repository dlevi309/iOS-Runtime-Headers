/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class PKShape, NSArray;

@interface PKAlternativeStrokesAnimation : NSObject {

	BOOL _accepted;
	BOOL _forceDone;
	PKShape* _shape;
	NSArray* _strokes;
	double _startTime;
	double _crossFadeStartTime;
	double _fadeDuration;
	double _originalStrokeDimmingFactor;

}

@property (nonatomic,readonly) PKShape * shape;                                 //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) NSArray * strokes;                               //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) double startTime;                                //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double crossFadeStartTime;                       //@synthesize crossFadeStartTime=_crossFadeStartTime - In the implementation block
@property (nonatomic,readonly) double fadeDuration;                             //@synthesize fadeDuration=_fadeDuration - In the implementation block
@property (nonatomic,readonly) double originalStrokeDimmingFactor;              //@synthesize originalStrokeDimmingFactor=_originalStrokeDimmingFactor - In the implementation block
@property (nonatomic,readonly) BOOL accepted;                                   //@synthesize accepted=_accepted - In the implementation block
@property (assign,nonatomic) BOOL forceDone;                                    //@synthesize forceDone=_forceDone - In the implementation block
-(PKShape *)shape;
-(NSArray *)strokes;
-(double)fadeDuration;
-(BOOL)accepted;
-(double)startTime;
-(double)alphaAtTime:(double)arg1 ;
-(double)originalStrokeAlphaAtTime:(double)arg1 ;
-(void)setForceDone:(BOOL)arg1 ;
-(double)crossFadeStartTime;
-(void)startCrossFade:(double)arg1 accepted:(BOOL)arg2 ;
-(BOOL)isDoneAtTime:(double)arg1 ;
-(id)initWithStrokes:(id)arg1 shape:(id)arg2 startTime:(double)arg3 fadeDuration:(double)arg4 ;
-(double)originalStrokeDimmingFactor;
-(BOOL)forceDone;
@end

