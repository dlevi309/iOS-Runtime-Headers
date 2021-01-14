/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetProfileInCarIntentExport.h>

@class NSNumber, NSString, INSpeakableString;

@interface INSetProfileInCarIntent : INIntent <INSetProfileInCarIntentExport>

@property (nonatomic,copy,readonly) NSString * profileLabel; 
@property (nonatomic,copy,readonly) NSNumber * profileNumber; 
@property (nonatomic,copy,readonly) NSString * profileName; 
@property (nonatomic,copy,readonly) NSNumber * defaultProfile; 
@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(INSpeakableString *)carName;
-(id)_metadata;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(id)initWithProfileNumber:(id)arg1 profileName:(id)arg2 defaultProfile:(id)arg3 ;
-(id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2 defaultProfile:(id)arg3 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(NSString *)profileName;
-(NSNumber *)profileNumber;
-(void)setProfileNumber:(NSNumber *)arg1 ;
-(void)setProfileName:(NSString *)arg1 ;
-(NSNumber *)defaultProfile;
-(void)setDefaultProfile:(NSNumber *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(id)initWithProfileNumber:(id)arg1 profileName:(id)arg2 defaultProfile:(id)arg3 carName:(id)arg4 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSString *)profileLabel;
@end

