/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARMLImageProcessingTechnique.h>

@class NSString;

@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique {

	NSString* _inputTensorName;

}
+(BOOL)_adjustBoneLength:(1*)arg1 count:(unsigned long long)arg2 ;
+(void)_transformRelativeToHip:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)requiredSensorDataTypes;
-(double)requiredTimeInterval;
-(void)_startLoadingMLModelSignpost;
-(void)_endLoadingMLModelSignpost;
-(void)_startMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(CGSize)arg3 ;
-(void)_endMLCreateResultSignpostWithTimestamp:(double)arg1 ;
-(void)changeEspressoConfig:(id)arg1 ;
-(id)processEspressoTensor:(id)arg1 ;
@end

