/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDPictureItemContainer : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _pictureItems;
	BOOL _allowFullScreenPhoto;
	struct {
		unsigned has_allowFullScreenPhoto : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * pictureItems; 
@property (assign,nonatomic) BOOL hasAllowFullScreenPhoto; 
@property (assign,nonatomic) BOOL allowFullScreenPhoto; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)pictureItemType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)addPictureItem:(id)arg1 ;
-(void)setAllowFullScreenPhoto:(BOOL)arg1 ;
-(unsigned long long)pictureItemsCount;
-(void)clearPictureItems;
-(id)pictureItemAtIndex:(unsigned long long)arg1 ;
-(void)setPictureItems:(NSMutableArray *)arg1 ;
-(void)setHasAllowFullScreenPhoto:(BOOL)arg1 ;
-(BOOL)hasAllowFullScreenPhoto;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)pictureItems;
-(BOOL)allowFullScreenPhoto;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

