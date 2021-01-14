/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSArray;

@interface WBSPasswordWarningTopFraudTargets : NSObject {

	NSArray* _highPriorityFraudTargets;
	NSArray* _fraudTargets;
	NSArray* _financialFraudTargets;

}

@property (nonatomic,readonly) NSArray * highPriorityFraudTargets;              //@synthesize highPriorityFraudTargets=_highPriorityFraudTargets - In the implementation block
@property (nonatomic,readonly) NSArray * fraudTargets;                          //@synthesize fraudTargets=_fraudTargets - In the implementation block
@property (nonatomic,readonly) NSArray * financialFraudTargets;                 //@synthesize financialFraudTargets=_financialFraudTargets - In the implementation block
-(id)initWithHighPriorityTargets:(id)arg1 targets:(id)arg2 financialTargets:(id)arg3 ;
-(NSArray *)highPriorityFraudTargets;
-(NSArray *)financialFraudTargets;
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
-(NSArray *)fraudTargets;
@end

