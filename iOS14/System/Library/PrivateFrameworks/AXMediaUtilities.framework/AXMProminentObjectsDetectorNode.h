/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode {

	VNGenerateAttentionBasedSaliencyImageRequest* __imageSaliencyRequest;

}

@property (nonatomic,retain) VNGenerateAttentionBasedSaliencyImageRequest * _imageSaliencyRequest;              //@synthesize _imageSaliencyRequest=__imageSaliencyRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)title;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)nodeInitialize;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(BOOL)requiresVisionFramework;
-(VNGenerateAttentionBasedSaliencyImageRequest *)_imageSaliencyRequest;
-(void)set_imageSaliencyRequest:(VNGenerateAttentionBasedSaliencyImageRequest *)arg1 ;
@end

