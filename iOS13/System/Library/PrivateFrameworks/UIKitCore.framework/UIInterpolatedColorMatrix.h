/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIVectorOperatable.h>

@class NSString;

@interface UIInterpolatedColorMatrix : NSObject <UIVectorOperatable> {

	CAColorMatrix _colorMatrix;
	double _epsilon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)zero;
+(id)epsilon;
+(id)valueWithColorMatrix:(CAColorMatrix)arg1 ;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isUndefined;
-(id)addVector:(id)arg1 ;
-(id)initWithColorMatrix:(CAColorMatrix)arg1 ;
-(id)initWithColorMatrix:(CAColorMatrix)arg1 epsilon:(double)arg2 ;
-(id)getValue;
-(id)interpolateTo:(id)arg1 progress:(double)arg2 ;
-(void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(SCD_Struct_UI128)arg5 state:(SCD_Struct_UI129)arg6 delta:(double)arg7 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2 ;
-(void)reinitWithVector:(id)arg1 ;
-(id)getNSValue;
-(id)multiplyByScalar:(double)arg1 ;
-(id)multiplyByVector:(id)arg1 ;
@end

