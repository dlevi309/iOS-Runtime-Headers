/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVCaptureMetadataOutput;

@interface AXMBarcodeNode : AXMEvaluationNode <NSSecureCoding> {

	AVCaptureMetadataOutput* _captureOutput;

}

@property (nonatomic,retain) AVCaptureMetadataOutput * captureOutput;              //@synthesize captureOutput=_captureOutput - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(AVCaptureMetadataOutput *)captureOutput;
-(void)setCaptureOutput:(AVCaptureMetadataOutput *)arg1 ;
@end

