/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetTaskAttributeIntentExport.h>

@class INTask, INSpeakableString, INSpatialEventTrigger, INTemporalEventTrigger, INContactEventTrigger, NSString;

@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>

@property (nonatomic,copy,readonly) INTask * targetTask; 
@property (nonatomic,copy,readonly) INSpeakableString * taskTitle; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,copy,readonly) INSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,copy,readonly) INTemporalEventTrigger * temporalEventTrigger; 
@property (nonatomic,copy) INContactEventTrigger * contactEventTrigger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(INTask *)targetTask;
-(id)initWithTargetTask:(id)arg1 taskTitle:(id)arg2 status:(long long)arg3 priority:(long long)arg4 spatialEventTrigger:(id)arg5 temporalEventTrigger:(id)arg6 ;
-(INSpeakableString *)taskTitle;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(INContactEventTrigger *)arg1 ;
-(void)setTargetTask:(INTask *)arg1 ;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(INSpatialEventTrigger *)arg1 ;
-(void)setTaskTitle:(INSpeakableString *)arg1 ;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithTargetTask:(id)arg1 status:(long long)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 ;
-(void)setStatus:(long long)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(long long)status;
@end

