/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVMetadataBodyObject : AVMetadataObject <NSCopying> {

	long long _bodyID;

}

@property (readonly) long long bodyID;              //@synthesize bodyID=_bodyID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(id)arg1 bodyID:(long long)arg2 time:(SCD_Struct_AV7)arg3 duration:(SCD_Struct_AV7)arg4 bounds:(CGRect)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 type:(id)arg5 bodyID:(long long)arg6 ;
-(long long)bodyID;
@end

