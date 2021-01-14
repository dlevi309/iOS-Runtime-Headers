/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
*/


@interface IAMPresentationPolicy : NSObject {

	long long _policyGroup;
	double _minimumIntervalBetweenPresentations;

}

@property (nonatomic,readonly) long long policyGroup;                                   //@synthesize policyGroup=_policyGroup - In the implementation block
@property (nonatomic,readonly) double minimumIntervalBetweenPresentations;              //@synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations - In the implementation block
+(long long)presentationPolicyGroupForGlobalPresentationPolicyGroup:(int)arg1 ;
-(double)minimumIntervalBetweenPresentations;
-(id)initWithMinimumIntervalBetweenPresentations:(double)arg1 forPresentationPolicyGroup:(long long)arg2 ;
-(long long)policyGroup;
@end

