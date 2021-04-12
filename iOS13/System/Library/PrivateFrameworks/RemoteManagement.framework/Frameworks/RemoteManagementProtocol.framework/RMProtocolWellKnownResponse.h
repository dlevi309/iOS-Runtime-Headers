/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMProtocolWellKnownResponse : RMModelPayloadBase {

	NSArray* _responseServers;

}

@property (nonatomic,copy) NSArray * responseServers;              //@synthesize responseServers=_responseServers - In the implementation block
+(id)requestWithServers:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseServers:(NSArray *)arg1 ;
-(NSArray *)responseServers;
@end

