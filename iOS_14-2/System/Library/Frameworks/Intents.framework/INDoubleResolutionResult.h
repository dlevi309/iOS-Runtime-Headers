/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResolutionResult.h>
#import <libobjc.A.dylib/INDoubleResolutionResultExport.h>

@class NSString;

@interface INDoubleResolutionResult : INIntentResolutionResult <INDoubleResolutionResultExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)successWithResolvedValue:(double)arg1 ;
+(id)confirmationRequiredWithValueToConfirm:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
@end

