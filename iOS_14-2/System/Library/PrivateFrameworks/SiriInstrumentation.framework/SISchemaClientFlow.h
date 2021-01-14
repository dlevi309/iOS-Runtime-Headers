/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaClientFlow : PBCodable {

	NSString* _clientFlowPayload;
	BOOL _hasClientFlowPayload;

}

@property (nonatomic,copy) NSString * clientFlowPayload;              //@synthesize clientFlowPayload=_clientFlowPayload - In the implementation block
@property (assign,nonatomic) BOOL hasClientFlowPayload;               //@synthesize hasClientFlowPayload=_hasClientFlowPayload - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setClientFlowPayload:(NSString *)arg1 ;
-(NSString *)clientFlowPayload;
-(BOOL)hasClientFlowPayload;
-(void)setHasClientFlowPayload:(BOOL)arg1 ;
@end

