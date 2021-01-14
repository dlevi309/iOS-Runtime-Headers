/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMManagementTestCommandCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadEcho;
	NSString* _payloadReturnStatus;

}

@property (nonatomic,copy) NSString * payloadEcho;                      //@synthesize payloadEcho=_payloadEcho - In the implementation block
@property (nonatomic,copy) NSString * payloadReturnStatus;              //@synthesize payloadReturnStatus=_payloadReturnStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withEcho:(id)arg2 withReturnStatus:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withEcho:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(int)executionLevel;
-(void)setPayloadEcho:(NSString *)arg1 ;
-(void)setPayloadReturnStatus:(NSString *)arg1 ;
-(NSString *)payloadEcho;
-(NSString *)payloadReturnStatus;
@end
