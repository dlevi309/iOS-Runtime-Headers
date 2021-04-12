/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHTriangleRecognitionResult : CHSketchRecognitionResult {

	CGPoint _vertex1;
	CGPoint _vertex2;
	CGPoint _vertex3;

}

@property (readonly) CGPoint vertex1;              //@synthesize vertex1=_vertex1 - In the implementation block
@property (readonly) CGPoint vertex2;              //@synthesize vertex2=_vertex2 - In the implementation block
@property (readonly) CGPoint vertex3;              //@synthesize vertex3=_vertex3 - In the implementation block
-(CGPoint)vertex1;
-(CGPoint)vertex2;
-(CGPoint)vertex3;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 vertex1:(CGPoint)arg4 vertex2:(CGPoint)arg5 vertex3:(CGPoint)arg6 ;
@end

