/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasSelectedSubactionIndex; 
@property (assign,nonatomic) int selectedSubactionIndex; 
@property (assign,nonatomic) BOOL hasSubactionType; 
@property (assign,nonatomic) int subactionType; 
@property (nonatomic,readonly) BOOL hasDisplayedString; 
@property (nonatomic,retain) NSString * displayedString; 
+(BOOL)isValid:(id)arg1 ;
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
-(NSString *)displayedString;
-(void)setDisplayedString:(NSString *)arg1 ;
-(int)selectedSubactionIndex;
-(void)setSelectedSubactionIndex:(int)arg1 ;
-(void)setHasSelectedSubactionIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedSubactionIndex;
-(int)subactionType;
-(void)setSubactionType:(int)arg1 ;
-(void)setHasSubactionType:(BOOL)arg1 ;
-(BOOL)hasSubactionType;
-(id)subactionTypeAsString:(int)arg1 ;
-(int)StringAsSubactionType:(id)arg1 ;
-(BOOL)hasDisplayedString;
@end

