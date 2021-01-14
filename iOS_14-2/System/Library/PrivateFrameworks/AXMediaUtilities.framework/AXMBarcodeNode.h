/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isSupported;
+(id)title;
-(AVCaptureMetadataOutput *)captureOutput;
-(void)setCaptureOutput:(AVCaptureMetadataOutput *)arg1 ;
@end

