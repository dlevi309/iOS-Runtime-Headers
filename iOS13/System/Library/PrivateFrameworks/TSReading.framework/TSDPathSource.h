/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSDPathSource : NSObject <TSDMixing, NSCopying> {

	BOOL mHorizontalFlip;
	BOOL mVerticalFlip;

}

@property (assign) BOOL hasHorizontalFlip; 
@property (assign) BOOL hasVerticalFlip; 
+(id)pathSourceForShapeType:(int)arg1 naturalSize:(CGSize)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bezierPath;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isCircular;
-(BOOL)isRectangular;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(BOOL)hasHorizontalFlip;
-(void)setHasHorizontalFlip:(BOOL)arg1 ;
-(BOOL)hasVerticalFlip;
-(void)setHasVerticalFlip:(BOOL)arg1 ;
-(id)bezierPathWithoutFlips;
-(CGAffineTransform)pathFlipTransform;
-(BOOL)isRectangularForever;
-(id)interiorWrapPath;
-(Class)preferredControllerClass;
-(double)uniformScaleForScalingToNaturalSize:(CGSize)arg1 ;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
@end

