/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHOutlinedArrowSketchRecognitionResult : CHSketchRecognitionResult {

	CGPoint _center;
	CGSize _size;
	CGPoint _controlPoint;

}

@property (readonly) CGPoint center;                    //@synthesize center=_center - In the implementation block
@property (readonly) CGSize size;                       //@synthesize size=_size - In the implementation block
@property (readonly) CGPoint controlPoint;              //@synthesize controlPoint=_controlPoint - In the implementation block
-(CGSize)size;
-(CGPoint)center;
-(CGPoint)controlPoint;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(CGPoint)arg4 size:(CGSize)arg5 controlPointLocation:(CGPoint)arg6 ;
@end

