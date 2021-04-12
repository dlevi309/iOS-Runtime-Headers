/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHEllipseRecognitionResult.h>

@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult {

	double _stemWidth;
	CGPoint _stemLocation;

}

@property (readonly) CGPoint stemLocation;              //@synthesize stemLocation=_stemLocation - In the implementation block
@property (readonly) double stemWidth;                  //@synthesize stemWidth=_stemWidth - In the implementation block
-(double)stemWidth;
-(CGPoint)stemLocation;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(CGPoint)arg4 size:(CGSize)arg5 stemLocation:(CGPoint)arg6 stemWidth:(double)arg7 ;
@end

