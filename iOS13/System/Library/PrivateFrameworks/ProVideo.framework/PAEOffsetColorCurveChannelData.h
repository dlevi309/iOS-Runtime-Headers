/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FxCustomParameterInterpolation.h>

@interface PAEOffsetColorCurveChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {

	void* _curve_private;

}
+(id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const offsetcolor_t<double>*)arg4 ;
+(id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(double)red;
-(double)green;
-(double)blue;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(double)evaluate:(double)arg1 ;
-(offsetcolor_t<double>*)curveRef;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(BOOL)isAtDefaults;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const offsetcolor_t<double>*)arg4 ;
-(BOOL)conformFromColorCurve:(id)arg1 ;
@end

