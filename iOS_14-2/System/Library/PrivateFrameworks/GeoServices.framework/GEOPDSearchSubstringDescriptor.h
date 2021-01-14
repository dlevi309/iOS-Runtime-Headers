/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDSearchSubstringDescriptor : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _spanDatas;
	int _beginIndex;
	int _endIndex;
	int _stringType;

}

@property (assign,nonatomic) int stringType; 
@property (assign,nonatomic) int beginIndex; 
@property (assign,nonatomic) int endIndex; 
@property (nonatomic,retain) NSMutableArray * spanDatas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)spanDataType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)endIndex;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setEndIndex:(int)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)spanDatas;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addSpanData:(id)arg1 ;
-(void)setStringType:(int)arg1 ;
-(void)setBeginIndex:(int)arg1 ;
-(unsigned long long)spanDatasCount;
-(void)clearSpanDatas;
-(id)spanDataAtIndex:(unsigned long long)arg1 ;
-(id)stringTypeAsString:(int)arg1 ;
-(int)StringAsStringType:(id)arg1 ;
-(void)setSpanDatas:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)stringType;
-(int)beginIndex;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

