/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


#import <DisparityV3/DisparityV3-Structs.h>
@class NSMutableDictionary;

@interface DisparityDiagnostics : NSObject {

	NSMutableDictionary* _diagDict;

}
+(id)dictFromAdaptiveCorrectionStatus:(const AdaptiveCorrectionStatus*)arg1 ;
+(id)dictFromCalModel:(const CalModel*)arg1 ;
+(id)dictFromDistortionModel:(const DistortionModel*)arg1 ;
-(id)init;
-(void)clearDiagnostics;
-(id)createDiagnosticsDictionary;
-(void)addAdaptiveCorrectionStatus:(AdaptiveCorrectionStatus*)arg1 ;
-(void)addDisparityDebugStatus:(SCD_Struct_Di4*)arg1 ;
-(void)addRegPyrDepthStatus:(SCD_Struct_Di6*)arg1 ;
-(void)addShiftmapJPEG:(id)arg1 ;
-(void)addShiftmapRaw:(id)arg1 ;
-(void)addMinShift:(float)arg1 maxShift:(float)arg2 ;
@end

