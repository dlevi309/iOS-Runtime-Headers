/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMProtocolDeclarationResponse : RMModelPayloadBase {

	NSString* _responseType;
	NSString* _responseIdentifier;
	NSString* _responseDescription;
	NSString* _responseServerToken;
	RMModelAnyPayload* _responsePayload;

}

@property (nonatomic,copy) NSString * responseType;                          //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSString * responseIdentifier;                    //@synthesize responseIdentifier=_responseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * responseDescription;                   //@synthesize responseDescription=_responseDescription - In the implementation block
@property (nonatomic,copy) NSString * responseServerToken;                   //@synthesize responseServerToken=_responseServerToken - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * responsePayload;              //@synthesize responsePayload=_responsePayload - In the implementation block
+(id)requestWithType:(id)arg1 identifier:(id)arg2 description:(id)arg3 serverToken:(id)arg4 payload:(id)arg5 ;
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
-(void)setResponseServerToken:(NSString *)arg1 ;
-(NSString *)responseServerToken;
@end

