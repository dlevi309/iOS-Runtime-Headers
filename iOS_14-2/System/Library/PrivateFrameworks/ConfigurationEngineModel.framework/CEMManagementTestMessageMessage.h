/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMMessageBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMManagementTestMessageMessage : CEMMessageBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadEcho;

}

@property (nonatomic,copy) NSString * payloadEcho;                  //@synthesize payloadEcho=_payloadEcho - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithEcho:(id)arg1 ;
+(id)buildRequiredOnlyWithEcho:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadEcho:(NSString *)arg1 ;
-(NSString *)payloadEcho;
@end

