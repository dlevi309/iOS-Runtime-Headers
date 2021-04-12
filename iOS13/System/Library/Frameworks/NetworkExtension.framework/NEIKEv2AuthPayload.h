/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2AuthenticationProtocol, NSData;

@interface NEIKEv2AuthPayload : NEIKEv2Payload {

	NEIKEv2AuthenticationProtocol* _authProtocol;
	NSData* _authenticationData;

}

@property (nonatomic,retain) NEIKEv2AuthenticationProtocol * authProtocol;              //@synthesize authProtocol=_authProtocol - In the implementation block
@property (nonatomic,readonly) unsigned long long method; 
@property (nonatomic,retain) NSData * authenticationData;                               //@synthesize authenticationData=_authenticationData - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)method;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setAuthProtocol:(NEIKEv2AuthenticationProtocol *)arg1 ;
-(void)setAuthenticationData:(NSData *)arg1 ;
-(NSData *)authenticationData;
-(NEIKEv2AuthenticationProtocol *)authProtocol;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

