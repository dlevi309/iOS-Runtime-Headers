/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResolutionResult.h>
#import <libobjc.A.dylib/INPlacemarkResolutionResultExport.h>

@class NSString;

@interface INPlacemarkResolutionResult : INIntentResolutionResult <INPlacemarkResolutionResultExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unsupportedWithReason:(unsigned long long)arg1 alternativePlacemarks:(id)arg2 ;
+(id)successWithResolvedPlacemark:(id)arg1 ;
+(id)disambiguationWithPlacemarksToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithPlacemarkToConfirm:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
@end

