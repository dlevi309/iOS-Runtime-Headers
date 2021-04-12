/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface PETSchemaPET1Key : PBCodable {

	NSString* _key;
	BOOL _hasKey;

}

@property (nonatomic,copy) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasKey;                      //@synthesize hasKey=_hasKey - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasKey:(BOOL)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

