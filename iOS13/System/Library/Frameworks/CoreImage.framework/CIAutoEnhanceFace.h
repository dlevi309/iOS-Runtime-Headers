/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIAutoEnhanceFace : NSObject {

	int size;
	int centerX;
	int centerY;
	double I;
	double Q;

}

@property (readonly) int size; 
@property (readonly) int centerX; 
@property (readonly) int centerY; 
@property (readonly) double I; 
@property (readonly) double Q; 
-(id)description;
-(int)size;
-(CGRect)faceRect;
-(id)initWithBounds:(CGRect)arg1 andImage:(id)arg2 usingContext:(id)arg3 ;
-(double)I;
-(double)Q;
-(int)centerX;
-(int)centerY;
@end

