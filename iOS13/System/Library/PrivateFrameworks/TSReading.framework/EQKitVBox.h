/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitCompoundBox.h>

@interface EQKitVBox : EQKitCompoundBox {

	unsigned long long mPivotIndex;

}

@property (nonatomic,readonly) unsigned long long pivotIndex; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)p_getTransform:(CGAffineTransform*)arg1 fromDescendant:(id)arg2 ;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(CGRect)p_cacheErasableBounds;
-(id)initWithChildBoxes:(id)arg1 ;
-(void)p_cacheDimensionsForHeight:(double*)arg1 depth:(double*)arg2 width:(double*)arg3 ;
-(id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2 ;
-(unsigned long long)pivotIndex;
@end

