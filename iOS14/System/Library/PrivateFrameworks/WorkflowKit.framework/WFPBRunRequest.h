/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface WFPBRunRequest : PBRequest <NSCopying> {

	NSData* _payload;
	int _payloadType;

}

@property (assign,nonatomic) int payloadType;               //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,retain) NSData * payload;              //@synthesize payload=_payload - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPayload:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)payloadType;
-(void)setPayloadType:(int)arg1 ;
-(NSData *)payload;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)payloadTypeAsString:(int)arg1 ;
-(int)StringAsPayloadType:(id)arg1 ;
@end

