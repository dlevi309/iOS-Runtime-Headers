/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIVectorOperatable.h>

@class NSString;

@interface UIInterpolatedPoint : NSObject <UIVectorOperatable> {

	CGPoint _point;
	double _epsilon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)valueWithCGPoint:(CGPoint)arg1 ;
+(id)valueWithCGPoint:(CGPoint)arg1 epsilon:(double)arg2 ;
+(id)zero;
+(id)epsilon;
-(BOOL)isUndefined;
-(NSString *)debugDescription;
-(id)getNSValue;
-(BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2 ;
-(id)interpolateTo:(id)arg1 progress:(double)arg2 ;
-(id)addVector:(id)arg1 ;
-(void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(SCD_Struct_UI149)arg5 state:(SCD_Struct_UI150)arg6 delta:(double)arg7 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(id)multiplyByVector:(id)arg1 ;
-(void)reinitWithVector:(id)arg1 ;
-(id)getValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)multiplyByScalar:(double)arg1 ;
@end

