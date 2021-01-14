/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FxCustomParameterInterpolation.h>

@interface PAEHueCurveChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {

	void* _curve_private;

}
+(id)channelDataWithCurve:(const hue_t<double>*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)initWithCurve:(const hue_t<double>*)arg1 ;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(double)evaluate:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(hue_t<double>*)curveRef;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(BOOL)isAtDefaults;
@end

