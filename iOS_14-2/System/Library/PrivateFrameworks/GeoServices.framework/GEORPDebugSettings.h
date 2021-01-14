/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEORPDebugSettings : PBCodable <NSCopying> {

	NSMutableArray* _keywords;
	int _mode;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode; 
@property (nonatomic,retain) NSMutableArray * keywords; 
+(Class)keywordsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)mode;
-(BOOL)hasMode;
-(void)setKeywords:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(NSMutableArray *)keywords;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)keywordsCount;
-(void)clearKeywords;
-(id)keywordsAtIndex:(unsigned long long)arg1 ;
-(void)setMode:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setHasMode:(BOOL)arg1 ;
-(void)addKeywords:(id)arg1 ;
-(id)modeAsString:(int)arg1 ;
-(int)StringAsMode:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

