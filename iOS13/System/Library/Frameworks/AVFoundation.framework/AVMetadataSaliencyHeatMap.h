/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AVMetadataSaliencyHeatMap : AVMetadataObject <NSCopying> {

	long long _bytesPerRow;
	long long _width;
	long long _height;
	NSData* _heatMap;

}

@property (readonly) long long bytesPerRow;              //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (readonly) long long width;                    //@synthesize width=_width - In the implementation block
@property (readonly) long long height;                   //@synthesize height=_height - In the implementation block
@property (readonly) NSData * heatMap;                   //@synthesize heatMap=_heatMap - In the implementation block
+(id)saliencyHeatMapWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)width;
-(long long)height;
-(long long)bytesPerRow;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4 ;
-(NSData *)heatMap;
-(id)initWithHeatMap:(id)arg1 width:(long long)arg2 height:(long long)arg3 bytesPerRow:(long long)arg4 time:(SCD_Struct_AV7)arg5 duration:(SCD_Struct_AV7)arg6 bounds:(CGRect)arg7 optionalInfoDict:(id)arg8 originalMetadataObject:(id)arg9 sourceCaptureInput:(id)arg10 ;
@end

