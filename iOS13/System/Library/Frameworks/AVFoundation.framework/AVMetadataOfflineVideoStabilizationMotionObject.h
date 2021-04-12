/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataOfflineVideoStabilizationMotionObjectInternal, NSDictionary;

@interface AVMetadataOfflineVideoStabilizationMotionObject : AVMetadataObject <NSCopying> {

	AVMetadataOfflineVideoStabilizationMotionObjectInternal* _offlineVISMotionObjectInternal;

}

@property (readonly) NSDictionary * payload; 
+(id)offlineVideoStabilizationMotionObjectWithTime:(SCD_Struct_AV7)arg1 motionDictionary:(id)arg2 input:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)payload;
-(id)initWithTime:(SCD_Struct_AV7)arg1 motionDictionary:(id)arg2 input:(id)arg3 ;
@end

