/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadBundleID;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSString *)payloadApplication;
-(void)setPayloadApplication:(NSString *)arg1 ;
-(void)setPayloadBundleID:(NSString *)arg1 ;
-(void)setPayloadAllowed:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowed;
@end

