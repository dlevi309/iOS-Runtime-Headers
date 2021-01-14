/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolCommandResponse_Command;

@interface RMProtocolCommandResponse : RMModelPayloadBase {

	NSString* _responseCommandToken;
	RMProtocolCommandResponse_Command* _responseCommand;

}

@property (nonatomic,copy) NSString * responseCommandToken;                                  //@synthesize responseCommandToken=_responseCommandToken - In the implementation block
@property (nonatomic,copy) RMProtocolCommandResponse_Command * responseCommand;              //@synthesize responseCommand=_responseCommand - In the implementation block
+(id)requestWithCommandToken:(id)arg1 command:(id)arg2 ;
-(RMProtocolCommandResponse_Command *)responseCommand;
-(void)setResponseCommand:(RMProtocolCommandResponse_Command *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseCommandToken:(NSString *)arg1 ;
-(NSString *)responseCommandToken;
@end

