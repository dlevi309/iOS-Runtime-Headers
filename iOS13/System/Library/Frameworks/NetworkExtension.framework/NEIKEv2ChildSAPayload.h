/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)type;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)proposals;
-(void)setProposals:(NSArray *)arg1 ;
-(void)setIncludeDHGroup:(BOOL)arg1 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(BOOL)includeDHGroup;
@end

