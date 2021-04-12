/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetSeatSettingsInCarIntentExport.h>

@class NSNumber, INSpeakableString, NSString;

@interface INSetSeatSettingsInCarIntent : INIntent <INSetSeatSettingsInCarIntentExport>

@property (nonatomic,copy,readonly) NSNumber * enableHeating; 
@property (nonatomic,copy,readonly) NSNumber * enableCooling; 
@property (nonatomic,copy,readonly) NSNumber * enableMassage; 
@property (nonatomic,readonly) long long seat; 
@property (nonatomic,copy,readonly) NSNumber * level; 
@property (nonatomic,readonly) long long relativeLevelSetting; 
@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(long long)seat;
-(void)_setMetadata:(id)arg1 ;
-(INSpeakableString *)carName;
-(id)_metadata;
-(void)setSeat:(long long)arg1 ;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(NSNumber *)enableHeating;
-(void)setEnableHeating:(NSNumber *)arg1 ;
-(NSNumber *)enableCooling;
-(void)setEnableCooling:(NSNumber *)arg1 ;
-(NSNumber *)enableMassage;
-(void)setEnableMassage:(NSNumber *)arg1 ;
-(long long)relativeLevelSetting;
-(void)setRelativeLevelSetting:(long long)arg1 ;
-(id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6 carName:(id)arg7 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(NSNumber *)level;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6 ;
-(void)setLevel:(NSNumber *)arg1 ;
@end

