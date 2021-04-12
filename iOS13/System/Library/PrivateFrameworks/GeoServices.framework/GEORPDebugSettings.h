/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEORPDebugSettings : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _keywords;
	int _mode;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode; 
@property (nonatomic,retain) NSMutableArray * keywords; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)keywordsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)keywords;
-(void)setKeywords:(NSMutableArray *)arg1 ;
-(int)mode;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasMode;
-(void)addKeywords:(id)arg1 ;
-(unsigned long long)keywordsCount;
-(void)clearKeywords;
-(id)keywordsAtIndex:(unsigned long long)arg1 ;
-(void)setHasMode:(BOOL)arg1 ;
-(id)modeAsString:(int)arg1 ;
-(int)StringAsMode:(id)arg1 ;
@end

