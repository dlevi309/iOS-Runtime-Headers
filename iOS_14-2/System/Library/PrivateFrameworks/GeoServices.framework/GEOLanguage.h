/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOLanguage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _languages;
	unsigned _identifier;

}

@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,retain) NSMutableArray * languages; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)languageType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)languages;
-(void)readAll:(BOOL)arg1 ;
-(void)clearLanguages;
-(id)jsonRepresentation;
-(unsigned long long)languagesCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLanguages:(NSMutableArray *)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(unsigned)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addLanguage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)languageAtIndex:(unsigned long long)arg1 ;
@end

