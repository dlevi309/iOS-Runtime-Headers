/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(INTimer *)arg1 ;
-(double)toDuration;
-(void)setToDuration:(double)arg1 ;
-(INSpeakableString *)toLabel;
-(void)setToLabel:(INSpeakableString *)arg1 ;
-(id)initWithTargetTimer:(id)arg1 toDuration:(double)arg2 toLabel:(id)arg3 ;
@end

