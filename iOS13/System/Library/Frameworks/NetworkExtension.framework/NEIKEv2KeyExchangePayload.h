/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)type;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setDhPublicKey:(NSData *)arg1 ;
-(NSData *)dhPublicKey;
-(void)setDh:(NEIKEv2DHProtocol *)arg1 ;
-(NEIKEv2DHProtocol *)dh;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

