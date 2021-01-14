/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEORPFeedbackImageUploadParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _images;
	BOOL _isEnrichment;
	struct {
		unsigned has_isEnrichment : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * images; 
@property (assign,nonatomic) BOOL hasIsEnrichment; 
@property (assign,nonatomic) BOOL isEnrichment; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)imageType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearImages;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setImages:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)imagesCount;
-(void)setIsEnrichment:(BOOL)arg1 ;
-(id)imageAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEnrichment;
-(void)setHasIsEnrichment:(BOOL)arg1 ;
-(BOOL)hasIsEnrichment;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)addImage:(id)arg1 ;
-(NSMutableArray *)images;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

