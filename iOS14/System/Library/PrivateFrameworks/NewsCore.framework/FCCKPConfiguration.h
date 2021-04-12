/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface FCCKPConfiguration : PBCodable <NSCopying> {

	unsigned long long _created;
	unsigned long long _expires;
	NSMutableArray* _fields;
	SCD_Struct_FC7 _has;

}

@property (nonatomic,retain) NSMutableArray * fields;                 //@synthesize fields=_fields - In the implementation block
@property (assign,nonatomic) BOOL hasCreated; 
@property (assign,nonatomic) unsigned long long created;              //@synthesize created=_created - In the implementation block
@property (assign,nonatomic) BOOL hasExpires; 
@property (assign,nonatomic) unsigned long long expires;              //@synthesize expires=_expires - In the implementation block
-(id)dictionaryRepresentation;
-(void)setFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fields;
-(unsigned long long)expires;
-(void)addFields:(id)arg1 ;
-(void)setCreated:(unsigned long long)arg1 ;
-(void)setHasCreated:(BOOL)arg1 ;
-(BOOL)hasCreated;
-(void)setExpires:(unsigned long long)arg1 ;
-(void)setHasExpires:(BOOL)arg1 ;
-(BOOL)hasExpires;
-(unsigned long long)created;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)fieldsCount;
-(void)clearFields;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

