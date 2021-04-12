/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitBox.h>

@interface EQKitHVSpace : EQKitBox {

	double mWidth;
	double mHeight;
	double mDepth;

}

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double layoutHeight; 
@property (nonatomic,readonly) double layoutDepth; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)depth;
-(double)width;
-(double)height;
-(double)layoutHeight;
-(double)layoutDepth;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(id)initWithWidth:(double)arg1 height:(double)arg2 depth:(double)arg3 ;
@end

