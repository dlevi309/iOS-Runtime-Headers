/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDCurvedShadow.h>

@class TSUColor;

@interface TSDMutableCurvedShadow : TSDCurvedShadow

@property (assign,nonatomic) double curve; 
@property (assign,nonatomic) double offset; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) double opacity; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) TSUColor * TSUColor; 
-(void)setOffset:(double)arg1 ;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setRadius:(double)arg1 ;
-(void)setAngle:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setCurve:(double)arg1 ;
-(void)setTSUColor:(TSUColor *)arg1 ;
@end

