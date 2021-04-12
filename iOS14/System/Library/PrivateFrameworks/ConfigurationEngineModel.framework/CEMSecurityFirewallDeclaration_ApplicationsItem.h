/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase {

	NSString* _payloadApplication;
	NSNumber* _payloadAllowed;
	NSString* _payloadBundleID;

}

@property (nonatomic,copy) NSString * payloadApplication;              //@synthesize payloadApplication=_payloadApplication - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowed;                  //@synthesize payloadAllowed=_payloadAllowed - In the implementation block
@property (nonatomic,copy) NSString * payloadBundleID;                 //@synthesize payloadBundleID=_payloadBundleID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithApplication:(id)arg1 withAllowed:(id)arg2 withBundleID:(id)arg3 ;
+(id)buildRequiredOnlyWithApplication:(id)arg1 withAllowed:(id)arg2 withBundleID:(id)arg3 ;
-(NSString *)payloadBundleID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSString *)payloadApplication;
-(void)setPayloadApplication:(NSString *)arg1 ;
-(void)setPayloadBundleID:(NSString *)arg1 ;
-(void)setPayloadAllowed:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowed;
@end

