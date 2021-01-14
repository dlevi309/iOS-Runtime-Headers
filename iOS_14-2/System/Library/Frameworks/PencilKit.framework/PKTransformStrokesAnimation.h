/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@class NSArray;

@interface PKTransformStrokesAnimation : NSObject {

	NSArray* _strokes;
	double _startTime;
	double _duration;
	double _fadeOutDuration;
	CGRect _sourceFrame;
	CGRect _destinationFrame;
	CGRect _bounds;

}

@property (nonatomic,readonly) NSArray * strokes;                    //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) double startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) CGRect sourceFrame;                   //@synthesize sourceFrame=_sourceFrame - In the implementation block
@property (nonatomic,readonly) CGRect destinationFrame;              //@synthesize destinationFrame=_destinationFrame - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                        //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double fadeOutDuration;               //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
-(CGRect)bounds;
-(NSArray *)strokes;
-(double)fadeOutDuration;
-(CGRect)sourceFrame;
-(double)duration;
-(double)startTime;
-(id)newStrokesAtTime:(double)arg1 ;
-(id)initWithStrokes:(id)arg1 startTime:(double)arg2 duration:(double)arg3 destinationFrame:(CGRect)arg4 fadeOutDuration:(double)arg5 ;
-(BOOL)isDoneAtTime:(double)arg1 ;
-(CGRect)destinationFrame;
@end

