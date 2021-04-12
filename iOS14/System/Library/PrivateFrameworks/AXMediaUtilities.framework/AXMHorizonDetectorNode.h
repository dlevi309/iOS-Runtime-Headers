/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNDetectHorizonRequest;

@interface AXMHorizonDetectorNode : AXMEvaluationNode {

	VNDetectHorizonRequest* __detectHorizonRequest;

}

@property (setter=_setDetectHorizonRequest:,nonatomic,retain) VNDetectHorizonRequest * _detectHorizonRequest;              //@synthesize _detectHorizonRequest=__detectHorizonRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)title;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)nodeInitialize;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(VNDetectHorizonRequest *)_detectHorizonRequest;
-(void)_setDetectHorizonRequest:(id)arg1 ;
-(BOOL)requiresVisionFramework;
@end

