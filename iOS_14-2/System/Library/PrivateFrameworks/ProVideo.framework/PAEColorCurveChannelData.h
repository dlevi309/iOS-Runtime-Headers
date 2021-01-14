/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FxCustomParameterInterpolation.h>

@interface PAEColorCurveChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {

	void* _curve_private;

}
+(id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const color_t<double>*)arg4 ;
+(id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
-(double)red;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqualTo:(id)arg1 ;
-(double)blue;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(double)green;
-(double)evaluate:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(color_t<double>*)curveRef;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(BOOL)isAtDefaults;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const color_t<double>*)arg4 ;
@end

