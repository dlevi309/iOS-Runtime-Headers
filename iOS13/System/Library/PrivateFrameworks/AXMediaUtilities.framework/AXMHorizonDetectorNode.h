/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNDetectHorizonRequest;

@interface AXMHorizonDetectorNode : AXMEvaluationNode {

	VNDetectHorizonRequest* __detectHorizonRequest;

}

@property (setter=_setDetectHorizonRequest:,nonatomic,retain) VNDetectHorizonRequest * _detectHorizonRequest;              //@synthesize _detectHorizonRequest=__detectHorizonRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(VNDetectHorizonRequest *)_detectHorizonRequest;
-(void)_setDetectHorizonRequest:(id)arg1 ;
-(BOOL)requiresVisionFramework;
@end

