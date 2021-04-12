/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSArray;

@interface CRKTrustEvaluationPolicies : NSObject {

	NSArray* _policyRefs;

}

@property (nonatomic,copy,readonly) NSArray * policyRefs;              //@synthesize policyRefs=_policyRefs - In the implementation block
+(id)defaultPolicicesForServerEvaluation;
+(id)defaultPoliciesForClientEvaluation;
-(id)init;
-(NSArray *)policyRefs;
-(id)initWithPolicyRefs:(id)arg1 ;
@end

