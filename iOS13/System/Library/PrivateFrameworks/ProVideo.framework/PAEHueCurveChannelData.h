/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(id)initWithCurve:(const hue_t<double>*)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(double)evaluate:(double)arg1 ;
-(hue_t<double>*)curveRef;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(BOOL)isAtDefaults;
@end

