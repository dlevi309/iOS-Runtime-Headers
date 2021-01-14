/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVMetadataBodyObject : AVMetadataObject <NSCopying> {

	long long _bodyID;

}

@property (readonly) long long bodyID;              //@synthesize bodyID=_bodyID - In the implementation block
-(long long)bodyID;
-(id)initWithType:(id)arg1 bodyID:(long long)arg2 time:(SCD_Struct_AV0)arg3 duration:(SCD_Struct_AV0)arg4 bounds:(CGRect)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 type:(id)arg5 bodyID:(long long)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

