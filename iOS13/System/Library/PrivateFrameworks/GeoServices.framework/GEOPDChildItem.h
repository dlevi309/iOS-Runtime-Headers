/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_childAction : 1;
		unsigned wrote_childPlace : 1;
		unsigned wrote_childItemType : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)childItemType;
-(void)_readChildPlace;
-(void)_readChildAction;
-(GEOPDChildPlace *)childPlace;
-(GEOPDChildAction *)childAction;
-(void)setChildPlace:(GEOPDChildPlace *)arg1 ;
-(void)setChildAction:(GEOPDChildAction *)arg1 ;
-(void)setChildItemType:(int)arg1 ;
-(void)setHasChildItemType:(BOOL)arg1 ;
-(BOOL)hasChildItemType;
-(id)childItemTypeAsString:(int)arg1 ;
-(int)StringAsChildItemType:(id)arg1 ;
-(BOOL)hasChildPlace;
-(BOOL)hasChildAction;
@end

