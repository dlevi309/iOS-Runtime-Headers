/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForAccountsIntentExport.h>

@class INSpeakableString, NSString;

@interface INSearchForAccountsIntent : INIntent <INSearchForAccountsIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * accountNickname; 
@property (nonatomic,readonly) long long accountType; 
@property (nonatomic,copy,readonly) INSpeakableString * organizationName; 
@property (nonatomic,readonly) long long requestedBalanceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(long long)accountType;
-(INSpeakableString *)organizationName;
-(id)_dictionaryRepresentation;
-(void)setAccountType:(long long)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(void)setOrganizationName:(INSpeakableString *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INSpeakableString *)accountNickname;
-(void)setAccountNickname:(INSpeakableString *)arg1 ;
-(long long)requestedBalanceType;
-(void)setRequestedBalanceType:(long long)arg1 ;
-(id)initWithAccountNickname:(id)arg1 accountType:(long long)arg2 organizationName:(id)arg3 requestedBalanceType:(long long)arg4 ;
@end

