/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface BWEspressoInferenceAdapter : NSObject
+(void)initialize;
+(id)platformIdentifier;
+(id)celestialClassifiersBundle;
+(id)celestialClassifiersSubdirectory;
+(id)espressoNetworkURLForPlatformedResource:(id)arg1 bundle:(id)arg2 subdirectory:(id)arg3 ;
-(id)inferenceProviderForType:(int)arg1 version:(SCD_Struct_BW94)arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int*)arg5 ;
-(int)_mostAcceleratedExecutionTargetForSmartCameraFromResourceProvider:(id)arg1 ;
@end

