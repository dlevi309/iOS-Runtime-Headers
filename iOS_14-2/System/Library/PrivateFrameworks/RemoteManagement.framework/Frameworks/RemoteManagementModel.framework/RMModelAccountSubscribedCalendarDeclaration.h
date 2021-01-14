/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSString;

@interface RMModelAccountSubscribedCalendarDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadVisibleName;
	NSString* _payloadCalendarURL;
	NSString* _payloadAuthenticationCredentialsAssetReference;

}

@property (nonatomic,copy) NSString * payloadVisibleName;                                          //@synthesize payloadVisibleName=_payloadVisibleName - In the implementation block
@property (nonatomic,copy) NSString * payloadCalendarURL;                                          //@synthesize payloadCalendarURL=_payloadCalendarURL - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationCredentialsAssetReference;              //@synthesize payloadAuthenticationCredentialsAssetReference=_payloadAuthenticationCredentialsAssetReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 calendarURL:(id)arg3 authenticationCredentialsAssetReference:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 calendarURL:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(NSString *)payloadAuthenticationCredentialsAssetReference;
-(void)setPayloadVisibleName:(NSString *)arg1 ;
-(void)setPayloadAuthenticationCredentialsAssetReference:(NSString *)arg1 ;
-(NSString *)payloadVisibleName;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setPayloadCalendarURL:(NSString *)arg1 ;
-(NSString *)payloadCalendarURL;
@end

