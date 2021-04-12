/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying> {

	CGPoint mPosition;
	CGSize mSize;
	struct {
		unsigned widthValid : 1;
		unsigned heightValid : 1;
		unsigned horizontalFlip : 1;
		unsigned verticalFlip : 1;
	}  mFlags;
	double mAngle;

}

@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) BOOL widthValid; 
@property (nonatomic,readonly) BOOL heightValid; 
@property (nonatomic,readonly) BOOL horizontalFlip; 
@property (nonatomic,readonly) BOOL verticalFlip; 
@property (nonatomic,readonly) double angle; 
+(id)geometryFromFullTransform:(CGAffineTransform)arg1 ;
+(id)geometryFromFullTransform:(CGAffineTransform)arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3 ;
+(id)geometryFromTransform:(CGAffineTransform)arg1 withSize:(CGSize)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(CGAffineTransform)transform;
-(CGPoint)position;
-(id)initWithWidth:(double)arg1 ;
-(CGPoint)center;
-(double)angle;
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithHeight:(double)arg1 ;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 ;
-(BOOL)isEqualExceptForPosition:(id)arg1 ;
-(BOOL)widthValid;
-(BOOL)heightValid;
-(CGAffineTransform)fullTransform;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 widthValid:(BOOL)arg3 heightValid:(BOOL)arg4 horizontalFlip:(BOOL)arg5 verticalFlip:(BOOL)arg6 angle:(double)arg7 ;
-(id)initWithTransformedBoundsOrigin:(CGPoint)arg1 size:(CGSize)arg2 horizontalFlip:(BOOL)arg3 verticalFlip:(BOOL)arg4 angle:(double)arg5 ;
-(CGPoint)transformedBoundsOrigin;
-(CGRect)boundsBeforeRotation;
-(CGAffineTransform)transformBasedOnRect:(CGRect)arg1 ;
-(CGAffineTransform)transformBasedOnPoint:(CGPoint)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(CGAffineTransform)transformBasedOnPoint:(CGPoint)arg1 centeredAtPoint:(CGPoint)arg2 withFlips:(BOOL)arg3 ;
-(BOOL)horizontalFlip;
-(BOOL)verticalFlip;
-(CGRect)transformedBounds;
-(id)initWithFullTransform:(CGAffineTransform)arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3 ;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 angle:(double)arg3 ;
-(id)initWithCenter:(CGPoint)arg1 size:(CGSize)arg2 ;
-(id)initWithTransformedBoundsOrigin:(CGPoint)arg1 size:(CGSize)arg2 angle:(double)arg3 ;
-(CGAffineTransform)transformWithoutFlips;
-(id)initWithTransform:(CGAffineTransform)arg1 size:(CGSize)arg2 ;
-(id)geometryByAppendingTransform:(CGAffineTransform)arg1 ;
-(id)geometryWithParentGeometry:(id)arg1 ;
-(id)geometryByAppendingGeometry:(id)arg1 ;
-(id)geometryRelativeToGeometry:(id)arg1 ;
-(id)geometryWithNewBounds:(CGRect)arg1 ;
-(id)normalizedGeometry;
@end

