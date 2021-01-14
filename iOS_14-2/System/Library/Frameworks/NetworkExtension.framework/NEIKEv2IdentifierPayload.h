/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2Identifier;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload {

	NEIKEv2Identifier* _identifier;

}

@property (retain) NEIKEv2Identifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)copyTypeDescription;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)description;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(void)setIdentifier:(NEIKEv2Identifier *)arg1 ;
-(NEIKEv2Identifier *)identifier;
@end

