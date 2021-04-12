/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)fields;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)created;
-(void)setCreated:(unsigned long long)arg1 ;
-(void)setFields:(NSMutableArray *)arg1 ;
-(void)addFields:(id)arg1 ;
-(unsigned long long)fieldsCount;
-(void)clearFields;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(void)setHasCreated:(BOOL)arg1 ;
-(BOOL)hasCreated;
-(void)setExpires:(unsigned long long)arg1 ;
-(void)setHasExpires:(BOOL)arg1 ;
-(BOOL)hasExpires;
-(unsigned long long)expires;
@end

