/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOSubactionMetaData : PBCodable <NSCopying> {

	NSString* _displayedString;
	int _selectedSubactionIndex;
	int _subactionType;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasSelectedSubactionIndex; 
@property (assign,nonatomic) int selectedSubactionIndex; 
@property (assign,nonatomic) BOOL hasSubactionType; 
@property (assign,nonatomic) int subactionType; 
@property (nonatomic,readonly) BOOL hasDisplayedString; 
@property (nonatomic,retain) NSString * displayedString; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)displayedString;
-(void)setSelectedSubactionIndex:(int)arg1 ;
-(void)setSubactionType:(int)arg1 ;
-(void)setDisplayedString:(NSString *)arg1 ;
-(int)selectedSubactionIndex;
-(void)setHasSelectedSubactionIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedSubactionIndex;
-(int)subactionType;
-(void)setHasSubactionType:(BOOL)arg1 ;
-(BOOL)hasSubactionType;
-(id)subactionTypeAsString:(int)arg1 ;
-(int)StringAsSubactionType:(id)arg1 ;
-(BOOL)hasDisplayedString;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

