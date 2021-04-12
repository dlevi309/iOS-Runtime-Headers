/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataBodyObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVMetadataDogBodyObject : AVMetadataBodyObject <NSCopying>
+(id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBodyID:(long long)arg1 time:(SCD_Struct_AV7)arg2 duration:(SCD_Struct_AV7)arg3 bounds:(CGRect)arg4 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(id)initWithBodyID:(long long)arg1 time:(SCD_Struct_AV7)arg2 duration:(SCD_Struct_AV7)arg3 bounds:(CGRect)arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7 ;
@end

