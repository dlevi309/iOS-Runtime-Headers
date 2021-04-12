/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitBox.h>

@class EQKitBox;

@interface EQKitVShift : EQKitBox {

	EQKitBox* mBox;
	double mOffset;

}

@property (nonatomic,readonly) EQKitBox * box; 
@property (nonatomic,readonly) double offset; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)depth;
-(double)width;
-(double)height;
-(double)offset;
-(EQKitBox *)box;
-(BOOL)p_getTransform:(CGAffineTransform*)arg1 fromDescendant:(id)arg2 ;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(id)initWithBox:(id)arg1 offset:(double)arg2 ;
@end

