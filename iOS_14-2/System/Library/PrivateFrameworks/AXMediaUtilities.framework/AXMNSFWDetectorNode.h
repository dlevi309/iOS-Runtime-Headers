/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNVYvzEtX1JlUdu8xx5qhDI;

@interface AXMNSFWDetectorNode : AXMEvaluationNode {

	VNVYvzEtX1JlUdu8xx5qhDI* _request;

}
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(BOOL)addNSFWResultToContext:(id)arg1 forIdentifier:(id)arg2 confidence:(double)arg3 markAsSensitiveCaptionContent:(BOOL)arg4 ;
+(id)title;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
@end

