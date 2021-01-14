/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEODestinationInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _hasDisplayAddress;
	BOOL _hasDisplayName;
	BOOL _hasSpokenAddress;
	BOOL _hasSpokenName;
	struct {
		unsigned has_hasDisplayAddress : 1;
		unsigned has_hasDisplayName : 1;
		unsigned has_hasSpokenAddress : 1;
		unsigned has_hasSpokenName : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasHasDisplayName; 
@property (assign,nonatomic) BOOL hasDisplayName; 
@property (assign,nonatomic) BOOL hasHasSpokenName; 
@property (assign,nonatomic) BOOL hasSpokenName; 
@property (assign,nonatomic) BOOL hasHasDisplayAddress; 
@property (assign,nonatomic) BOOL hasDisplayAddress; 
@property (assign,nonatomic) BOOL hasHasSpokenAddress; 
@property (assign,nonatomic) BOOL hasSpokenAddress; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasDisplayName:(BOOL)arg1 ;
-(void)setHasSpokenName:(BOOL)arg1 ;
-(void)setHasDisplayAddress:(BOOL)arg1 ;
-(void)setHasSpokenAddress:(BOOL)arg1 ;
-(void)setHasHasDisplayName:(BOOL)arg1 ;
-(BOOL)hasHasDisplayName;
-(BOOL)hasSpokenName;
-(void)setHasHasSpokenName:(BOOL)arg1 ;
-(BOOL)hasHasSpokenName;
-(BOOL)hasDisplayAddress;
-(BOOL)hasSpokenAddress;
-(void)setHasHasDisplayAddress:(BOOL)arg1 ;
-(BOOL)hasHasDisplayAddress;
-(void)setHasHasSpokenAddress:(BOOL)arg1 ;
-(BOOL)hasHasSpokenAddress;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
@end

