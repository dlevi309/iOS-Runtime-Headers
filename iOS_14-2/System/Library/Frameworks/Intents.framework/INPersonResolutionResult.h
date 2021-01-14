/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResolutionResult.h>
#import <libobjc.A.dylib/INPersonResolutionResultExport.h>

@class NSString;

@interface INPersonResolutionResult : INIntentResolutionResult <INPersonResolutionResultExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unsupportedWithReason:(unsigned long long)arg1 alternativePeople:(id)arg2 ;
+(id)successWithResolvedPerson:(id)arg1 ;
+(id)disambiguationWithPeopleToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithPersonToConfirm:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
@end

