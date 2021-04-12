/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FxCustomParameterInterpolation.h>

@interface PAEColorWheelChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {

	PAEColorWheelData _value;

}
+(id)channelDataWithRadius:(double)arg1 theta:(double)arg2 saturation:(double)arg3 light:(double)arg4 ;
-(void)setRadius:(double)arg1 ;
-(double)theta;
-(double)light;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSaturation:(double)arg1 ;
-(double)radius;
-(id)description;
-(BOOL)isEqualTo:(id)arg1 ;
-(double)saturation;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLight:(double)arg1 ;
-(void)setTheta:(double)arg1 ;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(BOOL)isAtDefaults;
-(id)initWithRadius:(double)arg1 theta:(double)arg2 saturation:(double)arg3 light:(double)arg4 ;
@end

