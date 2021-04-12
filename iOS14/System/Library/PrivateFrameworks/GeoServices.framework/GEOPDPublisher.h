/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOLocalizedString, GEOPDCaptionedPhoto, GEOPDMapsIdentifier;

@interface GEOPDPublisher : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _collectionIds;
	GEOLocalizedString* _name;
	GEOPDCaptionedPhoto* _photo;
	NSMutableArray* _publisherDescriptions;
	GEOPDMapsIdentifier* _publisherId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _errorState;
	unsigned _numCollections;
	struct {
		unsigned has_errorState : 1;
		unsigned has_numCollections : 1;
		unsigned read_unknownFields : 1;
		unsigned read_collectionIds : 1;
		unsigned read_name : 1;
		unsigned read_photo : 1;
		unsigned read_publisherDescriptions : 1;
		unsigned read_publisherId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPublisherId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * publisherId; 
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEOPDCaptionedPhoto * photo; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEOLocalizedString * name; 
@property (nonatomic,retain) NSMutableArray * collectionIds; 
@property (assign,nonatomic) BOOL hasNumCollections; 
@property (assign,nonatomic) unsigned numCollections; 
@property (nonatomic,retain) NSMutableArray * publisherDescriptions; 
@property (assign,nonatomic) BOOL hasErrorState; 
@property (assign,nonatomic) int errorState; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)publisherDescriptionType;
+(Class)collectionIdType;
+(BOOL)isValid:(id)arg1 ;
-(void)setCollectionIds:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)collectionIds;
-(void)setPhoto:(GEOPDCaptionedPhoto *)arg1 ;
-(BOOL)hasPhoto;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDCaptionedPhoto *)photo;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int)errorState;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)collectionIdsCount;
-(void)setErrorState:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasErrorState:(BOOL)arg1 ;
-(BOOL)hasErrorState;
-(id)errorStateAsString:(int)arg1 ;
-(int)StringAsErrorState:(id)arg1 ;
-(GEOLocalizedString *)name;
-(void)setNumCollections:(unsigned)arg1 ;
-(void)addPublisherDescription:(id)arg1 ;
-(unsigned long long)publisherDescriptionsCount;
-(void)clearPublisherDescriptions;
-(id)publisherDescriptionAtIndex:(unsigned long long)arg1 ;
-(void)setHasNumCollections:(BOOL)arg1 ;
-(BOOL)hasNumCollections;
-(void)setPublisherDescriptions:(NSMutableArray *)arg1 ;
-(void)addCollectionId:(id)arg1 ;
-(void)clearCollectionIds;
-(id)collectionIdAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(GEOLocalizedString *)arg1 ;
-(GEOPDMapsIdentifier *)publisherId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPublisherId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasPublisherId;
-(NSMutableArray *)publisherDescriptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)numCollections;
-(id)publisherDescription;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

