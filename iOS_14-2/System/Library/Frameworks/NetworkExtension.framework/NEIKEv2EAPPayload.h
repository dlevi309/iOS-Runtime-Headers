/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2EAPPayload : NEIKEv2Payload {

	NSData* _eapMessage;

}

@property (retain) NSData * eapMessage;              //@synthesize eapMessage=_eapMessage - In the implementation block
+(id)copyTypeDescription;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSData *)eapMessage;
-(id)description;
-(void)setEapMessage:(NSData *)arg1 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(unsigned long long)type;
@end

