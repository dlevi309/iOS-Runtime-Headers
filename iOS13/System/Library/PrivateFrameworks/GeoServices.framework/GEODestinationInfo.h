/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)hasSpokenName;
-(BOOL)hasSpokenAddress;
-(BOOL)hasDisplayName;
-(void)setHasDisplayName:(BOOL)arg1 ;
-(void)setHasHasDisplayName:(BOOL)arg1 ;
-(BOOL)hasHasDisplayName;
-(void)setHasSpokenName:(BOOL)arg1 ;
-(void)setHasHasSpokenName:(BOOL)arg1 ;
-(BOOL)hasHasSpokenName;
-(BOOL)hasDisplayAddress;
-(void)setHasDisplayAddress:(BOOL)arg1 ;
-(void)setHasHasDisplayAddress:(BOOL)arg1 ;
-(BOOL)hasHasDisplayAddress;
-(void)setHasSpokenAddress:(BOOL)arg1 ;
-(void)setHasHasSpokenAddress:(BOOL)arg1 ;
-(BOOL)hasHasSpokenAddress;
@end

