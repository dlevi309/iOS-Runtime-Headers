/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem : CEMPayloadBase {

	NSString* _payloadBundleIdentifier;
	NSString* _payloadTeamIdentifier;

}

@property (nonatomic,copy) NSString * payloadBundleIdentifier;              //@synthesize payloadBundleIdentifier=_payloadBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadTeamIdentifier;                //@synthesize payloadTeamIdentifier=_payloadTeamIdentifier - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithBundleIdentifier:(id)arg1 withTeamIdentifier:(id)arg2 ;
+(id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withTeamIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadBundleIdentifier:(NSString *)arg1 ;
-(NSString *)payloadBundleIdentifier;
-(void)setPayloadTeamIdentifier:(NSString *)arg1 ;
-(NSString *)payloadTeamIdentifier;
@end

