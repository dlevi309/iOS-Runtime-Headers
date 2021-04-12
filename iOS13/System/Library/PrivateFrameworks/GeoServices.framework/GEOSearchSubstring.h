/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOSearchSubstring : PBCodable <NSCopying> {

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)spanDatas;
-(void)addSpanData:(id)arg1 ;
-(unsigned long long)spanDatasCount;
-(void)clearSpanDatas;
-(id)spanDataAtIndex:(unsigned long long)arg1 ;
-(int)stringType;
-(void)setStringType:(int)arg1 ;
-(id)stringTypeAsString:(int)arg1 ;
-(int)StringAsStringType:(id)arg1 ;
-(int)beginIndex;
-(void)setBeginIndex:(int)arg1 ;
-(int)endIndex;
-(void)setEndIndex:(int)arg1 ;
-(void)setSpanDatas:(NSMutableArray *)arg1 ;
@end

