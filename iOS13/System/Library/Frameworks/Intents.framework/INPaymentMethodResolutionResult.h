/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResolutionResult.h>

@interface INPaymentMethodResolutionResult : INIntentResolutionResult
+(id)successWithResolvedPaymentMethod:(id)arg1 ;
+(id)disambiguationWithPaymentMethodsToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithPaymentMethodToConfirm:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
@end

