/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolServerCapabilities;

@interface RMProtocolServerCapabilitiesResponse : RMModelPayloadBase {

	NSString* _responseCapabilitiesToken;
	RMProtocolServerCapabilities* _responseCapabilities;

}

@property (nonatomic,copy) NSString * responseCapabilitiesToken;                             //@synthesize responseCapabilitiesToken=_responseCapabilitiesToken - In the implementation block
@property (nonatomic,copy) RMProtocolServerCapabilities * responseCapabilities;              //@synthesize responseCapabilities=_responseCapabilities - In the implementation block
+(id)requestWithCapabilitiesToken:(id)arg1 capabilities:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseCapabilitiesToken:(NSString *)arg1 ;
-(void)setResponseCapabilities:(RMProtocolServerCapabilities *)arg1 ;
-(NSString *)responseCapabilitiesToken;
-(RMProtocolServerCapabilities *)responseCapabilities;
@end

