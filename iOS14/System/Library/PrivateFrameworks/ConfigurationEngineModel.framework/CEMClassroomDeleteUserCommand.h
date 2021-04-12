/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMClassroomDeleteUserCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadUserName;
	NSNumber* _payloadForceDeletion;

}

@property (nonatomic,copy) NSString * payloadUserName;                   //@synthesize payloadUserName=_payloadUserName - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForceDeletion;              //@synthesize payloadForceDeletion=_payloadForceDeletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withUserName:(id)arg2 withForceDeletion:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withUserName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(int)executionLevel;
-(void)setPayloadUserName:(NSString *)arg1 ;
-(void)setPayloadForceDeletion:(NSNumber *)arg1 ;
-(NSString *)payloadUserName;
-(NSNumber *)payloadForceDeletion;
@end

