/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShadow.h>

@interface TSDContactShadow : TSDShadow {

	double mHeight;

}

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double perspective; 
+(id)contactShadowWithOffset:(double)arg1 height:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(CGColorRef)arg5 enabled:(BOOL)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)height;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithOffset:(double)arg1 height:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(CGColorRef)arg5 enabled:(BOOL)arg6 ;
-(unsigned long long)shadowType;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 ;
-(double)clampOffset:(double)arg1 ;
-(double)clampRadius:(double)arg1 ;
-(id)newShadowClampedForSwatches;
-(CGRect)boundsInNaturalSpaceForRep:(id)arg1 ;
-(CGRect)boundsForRep:(id)arg1 ;
-(CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4 ;
-(CGImageRef)newShadowImageFromContext:(CGContextRef)arg1 withSize:(CGSize)arg2 bounds:(CGRect)arg3 unflipped:(BOOL)arg4 ;
-(double)perspective;
@end

