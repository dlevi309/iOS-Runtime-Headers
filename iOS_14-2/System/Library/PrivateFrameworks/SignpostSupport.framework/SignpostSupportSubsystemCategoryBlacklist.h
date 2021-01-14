/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostSupportSubsystemCategoryFilter.h>

@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter
-(id)initWithEntries:(id)arg1 ;
-(unsigned long long)_compoundPredicateType;
-(BOOL)passesSubsystem:(id)arg1 category:(id)arg2 ;
-(id)liveStreamingPredicate;
-(void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2 ;
-(BOOL)_wantsNotSubsystem;
@end

