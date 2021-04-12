/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKTSDBrushStroke.h>

@class UIColor, NSString;

@interface AKTSDMutableBrushStroke : AKTSDBrushStroke {

	int join;
	UIColor* color;
	double width;
	double miterLimit;
	NSString* strokeName;

}

@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) NSString * strokeName; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(UIColor *)color;
-(void)setWidth:(double)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(NSString *)strokeName;
-(int)join;
-(void)setJoin:(int)arg1 ;
-(void)setStrokeName:(NSString *)arg1 ;
@end

