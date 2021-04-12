/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHRectangleSketchRecognitionResult : CHSketchRecognitionResult {

	CGPoint _upperLeftPoint;
	CGPoint _upperRightPoint;
	CGPoint _lowerLeftPoint;
	CGPoint _lowerRightPoint;

}

@property (readonly) CGPoint upperLeftPoint;               //@synthesize upperLeftPoint=_upperLeftPoint - In the implementation block
@property (readonly) CGPoint upperRightPoint;              //@synthesize upperRightPoint=_upperRightPoint - In the implementation block
@property (readonly) CGPoint lowerLeftPoint;               //@synthesize lowerLeftPoint=_lowerLeftPoint - In the implementation block
@property (readonly) CGPoint lowerRightPoint;              //@synthesize lowerRightPoint=_lowerRightPoint - In the implementation block
-(CGPoint)lowerLeftPoint;
-(CGPoint)lowerRightPoint;
-(CGPoint)upperRightPoint;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 upperLeftPoint:(CGPoint)arg4 upperRightPoint:(CGPoint)arg5 lowerLeftPoint:(CGPoint)arg6 lowerRightPoint:(CGPoint)arg7 ;
-(CGPoint)upperLeftPoint;
@end

