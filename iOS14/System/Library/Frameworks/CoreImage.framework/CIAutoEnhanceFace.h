/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)I;
-(double)Q;
-(int)centerY;
-(CGRect)faceRect;
-(int)size;
-(int)centerX;
-(id)initWithBounds:(CGRect)arg1 andImage:(id)arg2 usingContext:(id)arg3 ;
-(id)description;
@end

