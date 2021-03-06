/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIVectorOperatable <NSObject,NSCopying>
@required
+(id)zero;
+(id)epsilon;
-(BOOL)isUndefined;
-(id)getNSValue;
-(BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
-(id)interpolateTo:(id)arg1 progress:(double)arg2;
-(id)addVector:(id)arg1;
-(void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(SCD_Struct_UI149)arg5 state:(SCD_Struct_UI150)arg6 delta:(double)arg7;
-(BOOL)isApproximatelyEqualTo:(id)arg1;
-(id)copy;
-(id)multiplyByVector:(id)arg1;
-(void)reinitWithVector:(id)arg1;
-(id)getValue;
-(id)multiplyByScalar:(double)arg1;

@end

