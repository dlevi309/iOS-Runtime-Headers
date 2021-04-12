/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSReading/TSDMixing.h>

@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing> {

	double mPattern[6];
	unsigned long long mCount;
	double mPhase;
	int mType;

}

@property (nonatomic,readonly) int patternType; 
@property (nonatomic,readonly) double* pattern; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) double phase; 
@property (nonatomic,readonly) BOOL isDash; 
@property (nonatomic,readonly) BOOL isRoundDash; 
+(id)strokePatternWithPattern:(const double*)arg1 count:(unsigned long long)arg2 phase:(double)arg3 ;
+(id)solidPattern;
+(id)emptyPattern;
+(id)shortDashPattern;
+(id)mediumDashPattern;
+(id)longDashPattern;
+(id)roundDashPattern;
+(id)roundDashPatternWithSpacing:(double)arg1 ;
+(id)dashPatternWithSpacing:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(double*)pattern;
-(double)phase;
-(int)patternType;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)p_initWithType:(int)arg1 pattern:(const double*)arg2 count:(unsigned long long)arg3 phase:(double)arg4 ;
-(id)initWithPattern:(const double*)arg1 count:(unsigned long long)arg2 phase:(double)arg3 ;
-(void)i_applyToContext:(CGContextRef)arg1 lineWidth:(double)arg2 capStyle:(unsigned long long*)arg3 ;
-(BOOL)isRoundDash;
-(void)p_applyToCAShapeLayer:(id)arg1 lineWidth:(double)arg2 ;
-(BOOL)isDash;
-(void)applyToContext:(CGContextRef)arg1 lineWidth:(double)arg2 ;
-(void)applyToCAShapeLayer:(id)arg1 ;
@end

