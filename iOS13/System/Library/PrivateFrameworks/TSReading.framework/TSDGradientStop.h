/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class TSUColor;

@interface TSDGradientStop : NSObject <TSDMixing, NSCopying, NSMutableCopying> {

	TSUColor* mColor;
	double mFraction;
	double mInflection;

}

@property (nonatomic,copy,readonly) TSUColor * color; 
@property (nonatomic,readonly) double fraction; 
@property (nonatomic,readonly) double inflection; 
+(id)gradientStopWithColor:(id)arg1 fraction:(double)arg2 ;
+(id)gradientStopWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(TSUColor *)color;
-(double)fraction;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(double)inflection;
-(id)gradientStopWithColor:(id)arg1 ;
-(id)initWithGradientStop:(id)arg1 ;
-(void)p_setFraction:(double)arg1 ;
-(id)initWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3 ;
-(void)p_setColor:(id)arg1 ;
-(void)p_setInflection:(double)arg1 ;
-(id)initWithColor:(id)arg1 fraction:(double)arg2 ;
-(id)gradientStopWithInflection:(double)arg1 ;
@end

