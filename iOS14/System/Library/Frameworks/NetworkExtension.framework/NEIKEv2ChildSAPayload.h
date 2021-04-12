/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload {

	BOOL _includeDHGroup;
	NSArray* _proposals;

}

@property (retain) NSArray * proposals;              //@synthesize proposals=_proposals - In the implementation block
@property (assign) BOOL includeDHGroup;              //@synthesize includeDHGroup=_includeDHGroup - In the implementation block
+(id)copyTypeDescription;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setProposals:(NSArray *)arg1 ;
-(void)setIncludeDHGroup:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(BOOL)includeDHGroup;
-(unsigned long long)type;
-(NSArray *)proposals;
@end

