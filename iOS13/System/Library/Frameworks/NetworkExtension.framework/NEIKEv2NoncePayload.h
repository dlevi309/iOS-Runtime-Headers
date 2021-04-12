/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2NoncePayload : NEIKEv2Payload {

	NSData* _nonce;

}

@property (retain) NSData * nonce;              //@synthesize nonce=_nonce - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(unsigned long long)type;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

