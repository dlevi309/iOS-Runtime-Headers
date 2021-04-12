/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2Identifier;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload {

	NEIKEv2Identifier* _identifier;

}

@property (retain) NEIKEv2Identifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(NEIKEv2Identifier *)identifier;
-(void)setIdentifier:(NEIKEv2Identifier *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

