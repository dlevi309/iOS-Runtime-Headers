/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying> {

	double mOpacity;
	double mFadeAcceleration;

}

@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) double fadeAcceleration; 
+(BOOL)canMixWithNilObjects;
+(id)reflection;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)opacity;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithOpacity:(double)arg1 ;
-(id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2 ;
-(double)fadeAcceleration;
@end

