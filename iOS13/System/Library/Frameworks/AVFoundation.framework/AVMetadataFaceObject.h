/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {

	AVMetadataFaceObjectInternal* _internal;

}

@property (readonly) long long faceID; 
@property (readonly) BOOL hasRollAngle; 
@property (readonly) double rollAngle; 
@property (readonly) BOOL hasYawAngle; 
@property (readonly) double yawAngle; 
+(id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasRollAngle;
-(double)rollAngle;
-(BOOL)hasYawAngle;
-(double)yawAngle;
-(long long)faceID;
-(id)initWithFaceID:(long long)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(double)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(double)arg5 time:(SCD_Struct_AV7)arg6 duration:(SCD_Struct_AV7)arg7 bounds:(CGRect)arg8 ;
-(id)initWithType:(id)arg1 time:(SCD_Struct_AV7)arg2 duration:(SCD_Struct_AV7)arg3 bounds:(CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(BOOL)hasLeftEyeClosedConfidence;
-(int)leftEyeClosedConfidence;
-(BOOL)hasRightEyeClosedConfidence;
-(int)rightEyeClosedConfidence;
-(BOOL)hasSmileConfidence;
-(int)smileConfidence;
-(BOOL)hasLeftEyeBounds;
-(CGRect)leftEyeBounds;
-(BOOL)hasRightEyeBounds;
-(CGRect)rightEyeBounds;
-(id)initWithFaceID:(long long)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(double)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(double)arg5 time:(SCD_Struct_AV7)arg6 duration:(SCD_Struct_AV7)arg7 bounds:(CGRect)arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11 ;
-(id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 ;
@end

