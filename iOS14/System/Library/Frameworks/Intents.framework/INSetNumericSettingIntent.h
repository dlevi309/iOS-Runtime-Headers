/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetNumericSettingIntentExport.h>

@class INSettingMetadata, INNumericSettingValue, INTemporalEventTrigger, NSString;

@interface INSetNumericSettingIntent : INIntent <INSetNumericSettingIntentExport>

@property (nonatomic,copy,readonly) INSettingMetadata * settingMetadata; 
@property (nonatomic,copy,readonly) INNumericSettingValue * numericValue; 
@property (nonatomic,readonly) long long boundedValue; 
@property (nonatomic,readonly) long long action; 
@property (nonatomic,copy,readonly) INTemporalEventTrigger * temporalEventTrigger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(id)_dictionaryRepresentation;
-(long long)boundedValue;
-(INSettingMetadata *)settingMetadata;
-(void)setBoundedValue:(long long)arg1 ;
-(void)setNumericValue:(INNumericSettingValue *)arg1 ;
-(void)setSettingMetadata:(INSettingMetadata *)arg1 ;
-(long long)action;
-(id)initWithSettingMetadata:(id)arg1 numericValue:(id)arg2 boundedValue:(long long)arg3 action:(long long)arg4 temporalEventTrigger:(id)arg5 ;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(void)setAction:(long long)arg1 ;
-(id)domain;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INNumericSettingValue *)numericValue;
@end

