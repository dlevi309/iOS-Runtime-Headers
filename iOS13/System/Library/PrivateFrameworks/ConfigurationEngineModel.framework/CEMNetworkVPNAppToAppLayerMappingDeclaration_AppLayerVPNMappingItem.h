/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNAppToAppLayerMappingDeclaration_AppLayerVPNMappingItem : CEMPayloadBase {

	NSString* _payloadIdentifier;
	NSString* _payloadVPNUUID;
	NSString* _payloadDesignatedRequirement;
	NSString* _payloadSigningIdentifier;

}

@property (nonatomic,copy) NSString * payloadIdentifier;                         //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadVPNUUID;                            //@synthesize payloadVPNUUID=_payloadVPNUUID - In the implementation block
@property (nonatomic,copy) NSString * payloadDesignatedRequirement;              //@synthesize payloadDesignatedRequirement=_payloadDesignatedRequirement - In the implementation block
@property (nonatomic,copy) NSString * payloadSigningIdentifier;                  //@synthesize payloadSigningIdentifier=_payloadSigningIdentifier - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withDesignatedRequirement:(id)arg3 withSigningIdentifier:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withDesignatedRequirement:(id)arg3 withSigningIdentifier:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadIdentifier;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDesignatedRequirement:(NSString *)arg1 ;
-(void)setPayloadSigningIdentifier:(NSString *)arg1 ;
-(NSString *)payloadDesignatedRequirement;
-(NSString *)payloadSigningIdentifier;
-(void)setPayloadVPNUUID:(NSString *)arg1 ;
-(NSString *)payloadVPNUUID;
@end

