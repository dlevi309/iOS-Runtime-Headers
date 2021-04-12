/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>

@class AVMetadataMachineReadableCodeObjectInternal, CIBarcodeDescriptor, NSArray, NSString;

@interface AVMetadataMachineReadableCodeObject : AVMetadataObject {

	AVMetadataMachineReadableCodeObjectInternal* _internal;

}

@property (readonly) CIBarcodeDescriptor * descriptor; 
@property (readonly) NSArray * corners; 
@property (readonly) NSString * stringValue; 
+(id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)stringValue;
-(NSArray *)corners;
-(CIBarcodeDescriptor *)descriptor;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)basicDescriptor;
-(id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2 ;
@end

