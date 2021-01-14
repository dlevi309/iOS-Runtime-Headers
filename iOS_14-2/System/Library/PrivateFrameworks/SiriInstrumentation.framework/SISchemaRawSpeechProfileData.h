/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaRawSpeechProfileData : PBCodable {

	BOOL _hasR;
	NSData* _r;

}

@property (r,nonatomic,copy) NSData * r;                       //@synthesize r=_r - In the implementation block
@property (assign,nonatomic) BOOL hasR;                        //@synthesize hasR=_hasR - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)r;
-(id)dictionaryRepresentation;
-(BOOL)hasR;
-(void)setR:(NSData *)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasR:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

