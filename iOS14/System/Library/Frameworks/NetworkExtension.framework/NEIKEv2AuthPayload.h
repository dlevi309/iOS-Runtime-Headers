/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)method;
-(NEIKEv2AuthenticationProtocol *)authProtocol;
-(id)description;
-(void)setAuthProtocol:(NEIKEv2AuthenticationProtocol *)arg1 ;
-(void)setAuthenticationData:(NSData *)arg1 ;
-(NSData *)authenticationData;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(unsigned long long)type;
@end

