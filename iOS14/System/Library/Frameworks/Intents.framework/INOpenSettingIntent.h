/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INOpenSettingIntentExport.h>

@class INSettingMetadata, INSpeakableString, NSString;

@interface INOpenSettingIntent : INIntent <INOpenSettingIntentExport>

@property (nonatomic,copy,readonly) INSettingMetadata * settingMetadata; 
@property (nonatomic,copy,readonly) INSpeakableString * searchQuery; 
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
-(void)setDomain:(id)arg1 ;
-(id)initWithSettingMetadata:(id)arg1 searchQuery:(id)arg2 ;
-(id)domain;
-(INSpeakableString *)searchQuery;
-(void)setSearchQuery:(INSpeakableString *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
@end

