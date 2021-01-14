/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INActivateCarSignalIntentExport.h>

@class INSpeakableString, NSString;

@interface INActivateCarSignalIntent : INIntent <INActivateCarSignalIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (nonatomic,readonly) unsigned long long signals; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(INSpeakableString *)carName;
-(id)_metadata;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(unsigned long long)signals;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(id)initWithCarName:(id)arg1 signals:(unsigned long long)arg2 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setSignals:(unsigned long long)arg1 ;
@end

