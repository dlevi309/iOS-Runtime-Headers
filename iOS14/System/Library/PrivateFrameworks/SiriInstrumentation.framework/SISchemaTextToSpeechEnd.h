/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaTextToSpeechEnd : PBCodable {

	NSString* _aceID;
	BOOL _hasAceID;

}

@property (nonatomic,copy) NSString * aceID;                   //@synthesize aceID=_aceID - In the implementation block
@property (assign,nonatomic) BOOL hasAceID;                    //@synthesize hasAceID=_hasAceID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSString *)aceID;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAceID;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAceID:(NSString *)arg1 ;
-(void)setHasAceID:(BOOL)arg1 ;
@end

