/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface AXMScreenGrabber : NSObject
-(double)_adjustedScaleFactorForInputSize:(CGSize)arg1 constrainingToPreferredInputSizeFromDetectors:(id)arg2 ;
-(id)_ioSurfaceConfigurationWithSize:(CGSize)arg1 ;
-(id)_renderOptionsForSurface:(IOSurfaceRef)arg1 captureRect:(CGRect)arg2 displayName:(id)arg3 scaleFactor:(double)arg4 ignoredLayerContextIDs:(id)arg5 includedLayerContextIDs:(id)arg6 ;
-(id)grabScreenWithRect:(CGRect)arg1 orientation:(long long)arg2 options:(id)arg3 metrics:(id)arg4 error:(id*)arg5 ;
@end

