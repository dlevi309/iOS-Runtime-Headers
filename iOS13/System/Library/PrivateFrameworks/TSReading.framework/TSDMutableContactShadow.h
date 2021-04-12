/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDContactShadow.h>

@class TSUColor;

@interface TSDMutableContactShadow : TSDContactShadow

@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double perspective; 
@property (assign,nonatomic) double offset; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) double radius; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) TSUColor * TSUColor; 
-(void)setHeight:(double)arg1 ;
-(void)setOffset:(double)arg1 ;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setRadius:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setTSUColor:(TSUColor *)arg1 ;
-(void)setPerspective:(double)arg1 ;
@end

