/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INEnumerable.h>
#import <libobjc.A.dylib/INRunVoiceCommandIntentExport.h>

@class INSpeakableString, INVoiceCommandDeviceInformation, INIntentExecutionResult, NSString;

@interface INRunVoiceCommandIntent : INIntent <INEnumerable, INRunVoiceCommandIntentExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) INSpeakableString * voiceCommand; 
@property (nonatomic,copy,readonly) INVoiceCommandDeviceInformation * originDevice; 
@property (nonatomic,copy,readonly) INIntentExecutionResult * executionResult; 
@property (nonatomic,copy,readonly) NSString * previousIntentIdentifier; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(INIntentExecutionResult *)executionResult;
-(void)setExecutionResult:(INIntentExecutionResult *)arg1 ;
-(INVoiceCommandDeviceInformation *)originDevice;
-(void)setOriginDevice:(INVoiceCommandDeviceInformation *)arg1 ;
-(NSString *)previousIntentIdentifier;
-(void)setPreviousIntentIdentifier:(NSString *)arg1 ;
-(INSpeakableString *)voiceCommand;
-(void)setVoiceCommand:(INSpeakableString *)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 executionResult:(id)arg3 previousIntentIdentifier:(id)arg4 ;
-(id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 ;
-(id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 executionResult:(id)arg3 ;
-(id)domain;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
@end

