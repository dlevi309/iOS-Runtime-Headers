/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)upperLeftPoint;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 upperLeftPoint:(CGPoint)arg4 upperRightPoint:(CGPoint)arg5 lowerLeftPoint:(CGPoint)arg6 lowerRightPoint:(CGPoint)arg7 ;
@end

