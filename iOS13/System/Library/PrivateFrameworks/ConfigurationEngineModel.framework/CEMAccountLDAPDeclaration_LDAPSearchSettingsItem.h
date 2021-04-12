/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAccountLDAPDeclaration_LDAPSearchSettingsItem : CEMPayloadBase {

	NSString* _payloadLDAPSearchSettingDescription;
	NSString* _payloadLDAPSearchSettingSearchBase;
	NSString* _payloadLDAPSearchSettingScope;

}

@property (nonatomic,copy) NSString * payloadLDAPSearchSettingDescription;              //@synthesize payloadLDAPSearchSettingDescription=_payloadLDAPSearchSettingDescription - In the implementation block
@property (nonatomic,copy) NSString * payloadLDAPSearchSettingSearchBase;               //@synthesize payloadLDAPSearchSettingSearchBase=_payloadLDAPSearchSettingSearchBase - In the implementation block
@property (nonatomic,copy) NSString * payloadLDAPSearchSettingScope;                    //@synthesize payloadLDAPSearchSettingScope=_payloadLDAPSearchSettingScope - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithLDAPSearchSettingDescription:(id)arg1 withLDAPSearchSettingSearchBase:(id)arg2 withLDAPSearchSettingScope:(id)arg3 ;
+(id)buildRequiredOnlyWithLDAPSearchSettingSearchBase:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadLDAPSearchSettingDescription:(NSString *)arg1 ;
-(void)setPayloadLDAPSearchSettingSearchBase:(NSString *)arg1 ;
-(void)setPayloadLDAPSearchSettingScope:(NSString *)arg1 ;
-(NSString *)payloadLDAPSearchSettingDescription;
-(NSString *)payloadLDAPSearchSettingSearchBase;
-(NSString *)payloadLDAPSearchSettingScope;
@end

