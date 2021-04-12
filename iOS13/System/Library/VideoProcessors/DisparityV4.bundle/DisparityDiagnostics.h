/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


#import <DisparityV4/DisparityV4-Structs.h>
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
-(void)addDisparityDebugStatus:(SCD_Struct_Di14*)arg1 ;
-(void)addShiftmapJPEG:(id)arg1 ;
-(void)addShiftmapRaw:(id)arg1 ;
-(void)addMinShift:(float)arg1 maxShift:(float)arg2 ;
@end

