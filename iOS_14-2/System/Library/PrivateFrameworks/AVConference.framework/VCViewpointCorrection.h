/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCViewpointCorrection : NSObject {

	CVAViewpointCorrectionRef _viewpointCorrectionRef;

}
+(SCD_Struct_VC156)intrinsicsFromDeviceFormat:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)viewpointCorrectionForSampleBuffer:(opaqueCMSampleBufferRef)arg1 faceMesh:(id)arg2 activeFormat:(id)arg3 enabled:(BOOL)arg4 ;
@end

