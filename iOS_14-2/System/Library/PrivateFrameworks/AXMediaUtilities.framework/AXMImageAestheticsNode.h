/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNClassifyImageAestheticsRequest;

@interface AXMImageAestheticsNode : AXMEvaluationNode {

	VNClassifyImageAestheticsRequest* __imageAestheticsRequest;

}

@property (nonatomic,retain) VNClassifyImageAestheticsRequest * _imageAestheticsRequest;              //@synthesize _imageAestheticsRequest=__imageAestheticsRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)title;
-(void)encodeWithCoder:(id)arg1 ;
-(VNClassifyImageAestheticsRequest *)_imageAestheticsRequest;
-(void)set_imageAestheticsRequest:(VNClassifyImageAestheticsRequest *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
@end

