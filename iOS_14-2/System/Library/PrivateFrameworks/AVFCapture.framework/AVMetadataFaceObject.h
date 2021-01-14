/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
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
+(id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(long long)faceID;
-(double)yawAngle;
-(id)description;
-(BOOL)hasRollAngle;
-(BOOL)hasYawAngle;
-(id)initWithFaceID:(long long)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(double)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(double)arg5 time:(SCD_Struct_AV0)arg6 duration:(SCD_Struct_AV0)arg7 bounds:(CGRect)arg8 ;
-(CGRect)leftEyeBounds;
-(double)rollAngle;
-(id)initWithType:(id)arg1 time:(SCD_Struct_AV0)arg2 duration:(SCD_Struct_AV0)arg3 bounds:(CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(BOOL)hasLeftEyeClosedConfidence;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)leftEyeClosedConfidence;
-(BOOL)hasRightEyeClosedConfidence;
-(int)rightEyeClosedConfidence;
-(BOOL)hasSmileConfidence;
-(int)smileConfidence;
-(BOOL)hasLeftEyeBounds;
-(BOOL)hasRightEyeBounds;
-(CGRect)rightEyeBounds;
-(id)initWithFaceID:(long long)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(double)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(double)arg5 time:(SCD_Struct_AV0)arg6 duration:(SCD_Struct_AV0)arg7 bounds:(CGRect)arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11 ;
-(id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(void)dealloc;
@end

