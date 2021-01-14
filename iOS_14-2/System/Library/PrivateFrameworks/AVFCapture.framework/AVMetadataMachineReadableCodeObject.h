/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>

@class AVMetadataMachineReadableCodeObjectInternal, CIBarcodeDescriptor, NSArray, NSString;

@interface AVMetadataMachineReadableCodeObject : AVMetadataObject {

	AVMetadataMachineReadableCodeObjectInternal* _internal;

}

@property (readonly) CIBarcodeDescriptor * descriptor; 
@property (readonly) NSArray * corners; 
@property (readonly) NSString * stringValue; 
+(id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2 ;
-(NSString *)stringValue;
-(CIBarcodeDescriptor *)descriptor;
-(id)description;
-(NSArray *)corners;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(void)dealloc;
-(id)basicDescriptor;
-(id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2 ;
@end

