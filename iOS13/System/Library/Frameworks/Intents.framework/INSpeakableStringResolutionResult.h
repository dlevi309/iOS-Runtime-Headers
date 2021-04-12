/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResolutionResult.h>
#import <libobjc.A.dylib/INSpeakableStringResolutionResultExport.h>

@class NSString;

@interface INSpeakableStringResolutionResult : INIntentResolutionResult <INSpeakableStringResolutionResultExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)successWithResolvedString:(id)arg1 ;
+(id)disambiguationWithStringsToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithStringToConfirm:(id)arg1 ;
+(id)unsupportedWithReason:(unsigned long long)arg1 alternativeStrings:(id)arg2 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
@end

