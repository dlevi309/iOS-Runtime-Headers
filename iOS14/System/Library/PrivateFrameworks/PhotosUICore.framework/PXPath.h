/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray;

@interface PXPath : NSObject {

	CGPathRef _CGPath;
	NSMutableArray* _points;

}

@property (nonatomic,retain) NSMutableArray * points;              //@synthesize points=_points - In the implementation block
@property (retain) CGPathRef CGPath;                               //@synthesize CGPath=_CGPath - In the implementation block
+(id)pathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)pathWithRect:(CGRect)arg1 ;
+(id)pathWithEllipseInRect:(CGRect)arg1 ;
-(CGPathRef)CGPath;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(id)initWithPoints:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)addLineToPointX:(double)arg1 y:(double)arg2 ;
-(void)closeSubpath;
-(CGRect)boundingRect;
-(id)initWithRect:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(BOOL)arg4 ;
-(void)addContinuousCornerToPath:(CGPathRef)arg1 trueCorner:(CGPoint)arg2 cornerRadius:(CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7 ;
-(void)setCGPath:(CGPathRef)arg1 ;
-(NSMutableArray *)points;
@end

