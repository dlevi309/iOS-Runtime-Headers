/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataOfflineVideoStabilizationMotionObjectInternal, NSDictionary;

@interface AVMetadataOfflineVideoStabilizationMotionObject : AVMetadataObject <NSCopying> {

	AVMetadataOfflineVideoStabilizationMotionObjectInternal* _offlineVISMotionObjectInternal;

}

@property (readonly) NSDictionary * payload; 
+(id)offlineVideoStabilizationMotionObjectWithTime:(SCD_Struct_AV0)arg1 motionDictionary:(id)arg2 input:(id)arg3 ;
-(NSDictionary *)payload;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithTime:(SCD_Struct_AV0)arg1 motionDictionary:(id)arg2 input:(id)arg3 ;
@end

