/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetAudioSourceInCarIntentExport.h>

@class NSString;

@interface INSetAudioSourceInCarIntent : INIntent <INSetAudioSourceInCarIntentExport>

@property (nonatomic,readonly) long long audioSource; 
@property (nonatomic,readonly) long long relativeAudioSourceReference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(void)setAudioSource:(long long)arg1 ;
-(long long)relativeAudioSourceReference;
-(void)setRelativeAudioSourceReference:(long long)arg1 ;
-(id)initWithAudioSource:(long long)arg1 relativeAudioSourceReference:(long long)arg2 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)audioSource;
@end

