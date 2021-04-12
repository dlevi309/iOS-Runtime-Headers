/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitBox.h>

@interface EQKitRule : EQKitBox {

	double mHeight;
	double mDepth;
	double mWidth;
	CGColorRef mCGColor;

}

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) CGColorRef color; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)depth;
-(double)width;
-(double)height;
-(CGColorRef)color;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(id)initWithHeight:(double)arg1 depth:(double)arg2 width:(double)arg3 cgColor:(CGColorRef)arg4 ;
@end

