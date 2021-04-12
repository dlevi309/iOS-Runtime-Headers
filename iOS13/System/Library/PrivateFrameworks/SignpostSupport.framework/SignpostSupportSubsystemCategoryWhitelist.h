/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostSupportSubsystemCategoryFilter.h>

@interface SignpostSupportSubsystemCategoryWhitelist : SignpostSupportSubsystemCategoryFilter
-(id)initWithEntries:(id)arg1 ;
-(BOOL)passesSubsystem:(id)arg1 category:(id)arg2 ;
-(void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2 ;
-(BOOL)_wantsNotSubsystem;
-(unsigned long long)_compoundPredicateType;
@end

