/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResolutionResult.h>

@interface INTaskStatusResolutionResult : INIntentResolutionResult
+(id)confirmationRequiredWithTaskStatusToConfirm:(long long)arg1 ;
+(id)successWithResolvedTaskStatus:(long long)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

