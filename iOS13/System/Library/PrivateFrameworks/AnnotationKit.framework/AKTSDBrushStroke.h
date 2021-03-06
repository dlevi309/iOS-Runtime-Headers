/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class NSString, UIColor;

@interface AKTSDBrushStroke : NSObject {

	int _join;
	NSString* _strokeName;
	UIColor* _color;
	double _width;
	double _miterLimit;

}

@property (nonatomic,copy,readonly) NSString * strokeName;              //@synthesize strokeName=_strokeName - In the implementation block
@property (nonatomic,retain,readonly) UIColor * color;                  //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double width;                            //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int join;                                //@synthesize join=_join - In the implementation block
@property (nonatomic,readonly) double miterLimit;                       //@synthesize miterLimit=_miterLimit - In the implementation block
+(id)cacheDirectory;
+(id)strokeWithType:(long long)arg1 color:(id)arg2 width:(double)arg3 ;
+(void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(xmlDoc*)arg2 ;
+(void)loadSectionsForBrush:(id)arg1 inSVGDoc:(xmlDoc*)arg2 ;
+(void)loadBrush:(id)arg1 ;
+(id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3 ;
+(Class)mutableClass;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)width;
-(UIColor *)color;
-(double)miterLimit;
-(void)brushPath:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(BOOL)arg6 ;
-(id)strokeLineEnd:(id)arg1 ;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 join:(int)arg4 miterLimit:(double)arg5 ;
-(NSString *)strokeName;
-(int)join;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 ;
-(id)brushPathsForId:(id)arg1 ;
-(id)brushBoundsForId:(id)arg1 ;
-(void)brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CGPoint)arg4 inElementRange:(NSRange)arg5 into:(id)arg6 viewScale:(double)arg7 ;
-(void)brushPath:(id)arg1 withScaling:(CGPoint)arg2 inElementRange:(NSRange)arg3 into:(id)arg4 sectionIndex:(unsigned long long*)arg5 viewScale:(double)arg6 ;
@end

