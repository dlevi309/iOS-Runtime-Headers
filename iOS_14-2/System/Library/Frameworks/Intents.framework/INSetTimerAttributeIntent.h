/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetTimerAttributeIntentExport.h>

@class INTimer, INSpeakableString, NSString;

@interface INSetTimerAttributeIntent : INIntent <INSetTimerAttributeIntentExport>

@property (nonatomic,copy,readonly) INTimer * targetTimer; 
@property (nonatomic,readonly) double toDuration; 
@property (nonatomic,copy,readonly) INSpeakableString * toLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(id)_dictionaryRepresentation;
-(INSpeakableString *)toLabel;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(INTimer *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(double)toDuration;
-(void)setToLabel:(INSpeakableString *)arg1 ;
-(void)setToDuration:(double)arg1 ;
-(id)initWithTargetTimer:(id)arg1 toDuration:(double)arg2 toLabel:(id)arg3 ;
@end

