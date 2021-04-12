/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2DHProtocol, NSData;

@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload {

	NEIKEv2DHProtocol* _dh;
	NSData* _dhPublicKey;

}

@property (retain) NEIKEv2DHProtocol * dh;              //@synthesize dh=_dh - In the implementation block
@property (retain) NSData * dhPublicKey;                //@synthesize dhPublicKey=_dhPublicKey - In the implementation block
+(id)copyTypeDescription;
-(NEIKEv2DHProtocol *)dh;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSData *)dhPublicKey;
-(void)setDh:(NEIKEv2DHProtocol *)arg1 ;
-(id)description;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(unsigned long long)type;
-(void)setDhPublicKey:(NSData *)arg1 ;
@end

