/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetLabeledSettingIntentExport.h>

@class INSettingMetadata, NSString, INTemporalEventTrigger;

@interface INSetLabeledSettingIntent : INIntent <INSetLabeledSettingIntentExport>

@property (nonatomic,copy,readonly) INSettingMetadata * settingMetadata; 
@property (nonatomic,copy,readonly) NSString * labeledValue; 
@property (nonatomic,copy,readonly) INTemporalEventTrigger * temporalEventTrigger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(id)_dictionaryRepresentation;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(INSettingMetadata *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)initWithSettingMetadata:(id)arg1 labeledValue:(id)arg2 temporalEventTrigger:(id)arg3 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSString *)labeledValue;
-(void)setLabeledValue:(NSString *)arg1 ;
@end

