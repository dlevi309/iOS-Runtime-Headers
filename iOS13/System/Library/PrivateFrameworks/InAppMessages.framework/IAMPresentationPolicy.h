/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
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

