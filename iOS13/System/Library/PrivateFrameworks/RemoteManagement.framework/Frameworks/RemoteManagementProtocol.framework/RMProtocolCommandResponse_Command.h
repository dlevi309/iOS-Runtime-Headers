/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMProtocolCommandResponse_Command : RMModelPayloadBase {

	NSString* _responseType;
	NSString* _responseIdentifier;
	NSString* _responseDescription;
	RMModelAnyPayload* _responsePayload;

}

@property (nonatomic,copy) NSString * responseType;                          //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSString * responseIdentifier;                    //@synthesize responseIdentifier=_responseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * responseDescription;                   //@synthesize responseDescription=_responseDescription - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * responsePayload;              //@synthesize responsePayload=_responsePayload - In the implementation block
+(id)allowedResponseKeys;
+(id)buildWithType:(id)arg1 identifier:(id)arg2 description:(id)arg3 payload:(id)arg4 ;
+(id)buildRequiredOnlyWithType:(id)arg1 identifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)responseType;
-(void)setResponseType:(NSString *)arg1 ;
-(void)setResponseDescription:(NSString *)arg1 ;
-(NSString *)responseDescription;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseIdentifier:(NSString *)arg1 ;
-(void)setResponsePayload:(RMModelAnyPayload *)arg1 ;
-(NSString *)responseIdentifier;
-(RMModelAnyPayload *)responsePayload;
@end

