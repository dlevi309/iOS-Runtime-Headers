/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray, NEIKEv2IKESPI;

@interface NEIKEv2IKESAPayload : NEIKEv2Payload {

	NSArray* _proposals;
	NEIKEv2IKESPI* _rekeyIKESPI;

}

@property (retain) NSArray * proposals;                      //@synthesize proposals=_proposals - In the implementation block
@property (retain) NEIKEv2IKESPI * rekeyIKESPI;              //@synthesize rekeyIKESPI=_rekeyIKESPI - In the implementation block
+(id)copyTypeDescription;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setProposals:(NSArray *)arg1 ;
-(void)setRekeyIKESPI:(NEIKEv2IKESPI *)arg1 ;
-(NEIKEv2IKESPI *)rekeyIKESPI;
-(id)description;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(unsigned long long)type;
-(NSArray *)proposals;
@end

