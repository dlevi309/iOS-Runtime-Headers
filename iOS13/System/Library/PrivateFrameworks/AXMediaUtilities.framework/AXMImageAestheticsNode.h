/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNClassifyImageAestheticsRequest;

@interface AXMImageAestheticsNode : AXMEvaluationNode {

	VNClassifyImageAestheticsRequest* __imageAestheticsRequest;

}

@property (nonatomic,retain) VNClassifyImageAestheticsRequest * _imageAestheticsRequest;              //@synthesize _imageAestheticsRequest=__imageAestheticsRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(VNClassifyImageAestheticsRequest *)_imageAestheticsRequest;
-(void)set_imageAestheticsRequest:(VNClassifyImageAestheticsRequest *)arg1 ;
@end

