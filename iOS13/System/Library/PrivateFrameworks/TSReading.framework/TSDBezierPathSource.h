/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathSource.h>
#import <TSReading/TSDMixing.h>

@class TSDBezierPath;

@interface TSDBezierPathSource : TSDPathSource <TSDMixing> {

	TSDBezierPath* mPath;
	BOOL mIsRectangular;
	CGSize mNaturalSize;

}

@property (assign,nonatomic) CGSize naturalSize; 
+(id)pathSourceWithBezierPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isCircular;
-(BOOL)isRectangular;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(BOOL)isRectangularForever;
-(id)initWithBezierPath:(id)arg1 ;
-(void)p_setBezierPath:(id)arg1 ;
-(CGAffineTransform)transformToNaturalSize;
-(id)initWithNaturalSize:(CGSize)arg1 ;
@end

