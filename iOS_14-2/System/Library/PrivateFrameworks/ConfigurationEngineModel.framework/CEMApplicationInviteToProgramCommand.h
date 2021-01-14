/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMApplicationInviteToProgramCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadProgramID;
	NSString* _payloadInvitationURL;

}

@property (nonatomic,copy) NSString * payloadProgramID;                  //@synthesize payloadProgramID=_payloadProgramID - In the implementation block
@property (nonatomic,copy) NSString * payloadInvitationURL;              //@synthesize payloadInvitationURL=_payloadInvitationURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withProgramID:(id)arg2 withInvitationURL:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withProgramID:(id)arg2 withInvitationURL:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadProgramID:(NSString *)arg1 ;
-(void)setPayloadInvitationURL:(NSString *)arg1 ;
-(int)executionLevel;
-(NSString *)payloadProgramID;
-(NSString *)payloadInvitationURL;
@end

