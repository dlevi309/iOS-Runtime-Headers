/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDChildAction, GEOPDChildPlace;

@interface GEOPDChildItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDChildAction* _childAction;
	GEOPDChildPlace* _childPlace;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _childItemType;
	struct {
		unsigned has_childItemType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_childAction : 1;
		unsigned read_childPlace : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasChildItemType; 
@property (assign,nonatomic) int childItemType; 
@property (nonatomic,readonly) BOOL hasChildPlace; 
@property (nonatomic,retain) GEOPDChildPlace * childPlace; 
@property (nonatomic,readonly) BOOL hasChildAction; 
@property (nonatomic,retain) GEOPDChildAction * childAction; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)childItemType;
-(id)init;
-(id)jsonRepresentation;
-(GEOPDChildAction *)childAction;
-(void)setChildItemType:(int)arg1 ;
-(BOOL)hasChildPlace;
-(void)setChildPlace:(GEOPDChildPlace *)arg1 ;
-(void)setChildAction:(GEOPDChildAction *)arg1 ;
-(void)setHasChildItemType:(BOOL)arg1 ;
-(BOOL)hasChildItemType;
-(BOOL)hasChildAction;
-(id)childItemTypeAsString:(int)arg1 ;
-(int)StringAsChildItemType:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(GEOPDChildPlace *)childPlace;
@end

