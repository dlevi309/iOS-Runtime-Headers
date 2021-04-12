/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSUColor;

@interface TSDPathStroker : NSObject {

	TSUColor* mColor;
	double mWidth;
	TSDPathStroker* mPrecedingStroker;

}

@property (assign,nonatomic) double width; 
-(void)dealloc;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingStroker:(id)arg4 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 inColor:(id)arg3 ;
@end

