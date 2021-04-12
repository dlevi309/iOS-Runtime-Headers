/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOFormattedString;

@interface GEORoadDescription : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _formattedDescription;
	int _navigationFriendliness;
	struct {
		unsigned has_navigationFriendliness : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasFormattedDescription; 
@property (nonatomic,retain) GEOFormattedString * formattedDescription; 
@property (assign,nonatomic) BOOL hasNavigationFriendliness; 
@property (assign,nonatomic) int navigationFriendliness; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(GEOFormattedString *)formattedDescription;
-(void)setFormattedDescription:(GEOFormattedString *)arg1 ;
-(BOOL)hasFormattedDescription;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)navigationFriendliness;
-(void)setNavigationFriendliness:(int)arg1 ;
-(void)setHasNavigationFriendliness:(BOOL)arg1 ;
-(BOOL)hasNavigationFriendliness;
-(id)navigationFriendlinessAsString:(int)arg1 ;
-(int)StringAsNavigationFriendliness:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

