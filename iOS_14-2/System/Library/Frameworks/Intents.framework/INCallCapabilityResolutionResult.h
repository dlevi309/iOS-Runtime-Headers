/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResolutionResult.h>

@interface INCallCapabilityResolutionResult : INIntentResolutionResult
+(id)successWithResolvedCallCapability:(long long)arg1 ;
+(id)confirmationRequiredWithCallCapabilityToConfirm:(long long)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

