/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShadow.h>

@interface TSDCurvedShadow : TSDShadow {

	double mCurve;

}

@property (nonatomic,readonly) double curve; 
+(id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(CGColorRef)arg6 enabled:(BOOL)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)curve;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(CGColorRef)arg6 enabled:(BOOL)arg7 ;
-(unsigned long long)shadowType;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 ;
-(double)clampOffset:(double)arg1 ;
-(id)newShadowClampedForSwatches;
-(BOOL)showForEditingText;
-(CGRect)boundsInNaturalSpaceForRep:(id)arg1 ;
-(CGRect)boundsForRep:(id)arg1 ;
-(CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4 ;
-(double)paddingForBlur;
-(CGRect)expandedBoundsForRect:(CGRect)arg1 ;
-(double)offsetFromCurve;
-(double)getVerticalOffset:(CGSize)arg1 ;
-(CGPoint)boundsShiftForSize:(CGSize)arg1 ;
@end

