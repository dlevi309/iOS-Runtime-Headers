/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResolutionResult.h>
#import <libobjc.A.dylib/INStringResolutionResultExport.h>

@class NSString;

@interface INStringResolutionResult : INIntentResolutionResult <INStringResolutionResultExport>

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

