/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMModelAccountLDAPDeclaration_SearchSettingsItem : RMModelPayloadBase {

	NSString* _payloadVisibleDescription;
	NSString* _payloadSearchBase;
	NSString* _payloadScope;

}

@property (nonatomic,copy) NSString * payloadVisibleDescription;              //@synthesize payloadVisibleDescription=_payloadVisibleDescription - In the implementation block
@property (nonatomic,copy) NSString * payloadSearchBase;                      //@synthesize payloadSearchBase=_payloadSearchBase - In the implementation block
@property (nonatomic,copy) NSString * payloadScope;                           //@synthesize payloadScope=_payloadScope - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithVisibleDescription:(id)arg1 searchBase:(id)arg2 scope:(id)arg3 ;
+(id)buildRequiredOnlyWithSearchBase:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setPayloadVisibleDescription:(NSString *)arg1 ;
-(void)setPayloadSearchBase:(NSString *)arg1 ;
-(void)setPayloadScope:(NSString *)arg1 ;
-(NSString *)payloadVisibleDescription;
-(NSString *)payloadSearchBase;
-(NSString *)payloadScope;
@end

