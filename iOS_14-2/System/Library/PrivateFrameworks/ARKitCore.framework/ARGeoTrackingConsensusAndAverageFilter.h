/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGeoTrackingConsensusAndAverageFilter : NSObject {

	ARConsensusAndAverageFilterImpl* _impl;

}
-(double)score;
-(void)dealloc;
-(id)initWithENUFromECEF:(SCD_Struct_AR1)arg1 maxHistory:(int)arg2 minInlierScore:(double)arg3 ;
-(BOOL)getCurrentENUFromVIO:(double)arg1 ENUFromVIO:(SCD_Struct_AR1*)arg2 ;
-(void)updateWithVIOPose:(SCD_Struct_AR1)arg1 VLPose:(SCD_Struct_AR1)arg2 ;
@end

