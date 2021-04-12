/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)width;
-(int)join;
-(UIColor *)color;
-(void)setWidth:(double)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(double)miterLimit;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)strokeName;
-(void)setJoin:(int)arg1 ;
-(void)setStrokeName:(NSString *)arg1 ;
@end

