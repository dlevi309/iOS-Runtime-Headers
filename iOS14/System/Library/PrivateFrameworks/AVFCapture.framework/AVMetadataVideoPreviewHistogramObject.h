/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AVMetadataVideoPreviewHistogramObject : AVMetadataObject <NSCopying> {

	NSData* _lumaHistogramData;

}

@property (readonly) NSData * lumaHistogramData;              //@synthesize lumaHistogramData=_lumaHistogramData - In the implementation block
+(id)videoPreviewHistogramObjectWithLumaHistogramData:(id)arg1 input:(id)arg2 time:(SCD_Struct_AV0)arg3 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithLumaHistogramData:(id)arg1 time:(SCD_Struct_AV0)arg2 sourceCaptureInput:(id)arg3 ;
-(NSData *)lumaHistogramData;
@end

