/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMProtocolDeclarationResponse : RMModelPayloadBase {

	NSString* _responseType;
	NSString* _responseIdentifier;
	NSString* _responseServerToken;
	RMModelAnyPayload* _responsePayload;

}

@property (nonatomic,copy) NSString * responseType;                          //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSString * responseIdentifier;                    //@synthesize responseIdentifier=_responseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * responseServerToken;                   //@synthesize responseServerToken=_responseServerToken - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * responsePayload;              //@synthesize responsePayload=_responsePayload - In the implementation block
+(id)requestWithType:(id)arg1 identifier:(id)arg2 serverToken:(id)arg3 payload:(id)arg4 ;
-(void)setResponseType:(NSString *)arg1 ;
-(NSString *)responseType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RMModelAnyPayload *)responsePayload;
-(NSString *)responseIdentifier;
-(void)setResponseIdentifier:(NSString *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponsePayload:(RMModelAnyPayload *)arg1 ;
-(void)setResponseServerToken:(NSString *)arg1 ;
-(NSString *)responseServerToken;
@end

