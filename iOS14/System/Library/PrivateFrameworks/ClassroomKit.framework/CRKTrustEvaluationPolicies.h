/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

