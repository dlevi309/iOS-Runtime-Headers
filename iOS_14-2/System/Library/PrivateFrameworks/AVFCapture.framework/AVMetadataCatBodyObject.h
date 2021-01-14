/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataBodyObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVMetadataCatBodyObject : AVMetadataBodyObject <NSCopying>
+(id)catBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(id)description;
-(id)initWithBodyID:(long long)arg1 time:(SCD_Struct_AV0)arg2 duration:(SCD_Struct_AV0)arg3 bounds:(CGRect)arg4 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(id)initWithBodyID:(long long)arg1 time:(SCD_Struct_AV0)arg2 duration:(SCD_Struct_AV0)arg3 bounds:(CGRect)arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

