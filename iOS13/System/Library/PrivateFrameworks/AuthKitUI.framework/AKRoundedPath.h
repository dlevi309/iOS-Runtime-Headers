/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


#import <AuthKitUI/AuthKitUI-Structs.h>
@class NSMutableArray;

@interface AKRoundedPath : NSObject {

	CGPathRef _CGPath;
	NSMutableArray* _points;

}

@property (nonatomic,retain) NSMutableArray * points;              //@synthesize points=_points - In the implementation block
@property (retain) CGPathRef CGPath;                               //@synthesize CGPath=_CGPath - In the implementation block
+(id)pathWithRect:(CGRect)arg1 ;
+(id)pathWithEllipseInRect:(CGRect)arg1 ;
+(id)pathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
-(void)dealloc;
-(CGPathRef)CGPath;
-(NSMutableArray *)points;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(CGRect)boundingRect;
-(void)setCGPath:(CGPathRef)arg1 ;
-(id)initWithPoints:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)closeSubpath;
-(void)addLineToPointX:(double)arg1 y:(double)arg2 ;
-(id)initWithRect:(CGRect)arg1 cornerRadii:(id)arg2 smoothPillShapes:(BOOL)arg3 ;
-(void)addContinuousCornerToPath:(CGPathRef)arg1 trueCorner:(CGPoint)arg2 cornerRadius:(CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7 ;
@end

