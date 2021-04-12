/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemAirPlayDestinationsDeclaration_PasswordsItem : CEMPayloadBase {

	NSString* _payloadDeviceName;
	NSString* _payloadPassword;
	NSString* _payloadDeviceID;

}

@property (nonatomic,copy) NSString * payloadDeviceName;              //@synthesize payloadDeviceName=_payloadDeviceName - In the implementation block
@property (nonatomic,copy) NSString * payloadPassword;                //@synthesize payloadPassword=_payloadPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadDeviceID;                //@synthesize payloadDeviceID=_payloadDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithDeviceName:(id)arg1 withPassword:(id)arg2 withDeviceID:(id)arg3 ;
+(id)buildRequiredOnlyWithDeviceName:(id)arg1 withPassword:(id)arg2 withDeviceID:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPassword:(NSString *)arg1 ;
-(NSString *)payloadPassword;
-(void)setPayloadDeviceID:(NSString *)arg1 ;
-(NSString *)payloadDeviceID;
-(void)setPayloadDeviceName:(NSString *)arg1 ;
-(NSString *)payloadDeviceName;
@end

