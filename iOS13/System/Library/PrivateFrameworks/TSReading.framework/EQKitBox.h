/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EQKitBox : NSObject <NSCopying>

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double vsize; 
@property (nonatomic,readonly) double layoutHeight; 
@property (nonatomic,readonly) double layoutDepth; 
@property (nonatomic,readonly) double layoutVSize; 
@property (nonatomic,readonly) CGColorRef color; 
@property (nonatomic,readonly) double opticalAlignWidth; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)depth;
-(double)width;
-(double)height;
-(CGColorRef)color;
-(double)layoutHeight;
-(double)layoutDepth;
-(double)vsize;
-(BOOL)p_getTransform:(CGAffineTransform*)arg1 fromDescendant:(id)arg2 ;
-(double)opticalAlignWidth;
-(double)layoutVSize;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(CGAffineTransform)transformFromDescendant:(id)arg1 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
@end

