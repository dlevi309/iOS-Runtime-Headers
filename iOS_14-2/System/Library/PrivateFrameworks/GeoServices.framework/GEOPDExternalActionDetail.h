/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDExternalActionDetail : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _actionLabel;
	NSString* _actionUrlComponent;
	NSString* _actionUrlVerb;
	NSString* _logoId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_actionLabel : 1;
		unsigned read_actionUrlComponent : 1;
		unsigned read_actionUrlVerb : 1;
		unsigned read_logoId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasActionLabel; 
@property (nonatomic,retain) NSString * actionLabel; 
@property (nonatomic,readonly) BOOL hasLogoId; 
@property (nonatomic,retain) NSString * logoId; 
@property (nonatomic,readonly) BOOL hasActionUrlComponent; 
@property (nonatomic,retain) NSString * actionUrlComponent; 
@property (nonatomic,readonly) BOOL hasActionUrlVerb; 
@property (nonatomic,retain) NSString * actionUrlVerb; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(NSString *)logoId;
-(id)jsonRepresentation;
-(NSString *)actionUrlComponent;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasActionUrlComponent;
-(BOOL)hasLogoId;
-(NSString *)actionLabel;
-(NSString *)actionUrlVerb;
-(void)setActionLabel:(NSString *)arg1 ;
-(void)setActionUrlVerb:(NSString *)arg1 ;
-(BOOL)hasActionLabel;
-(BOOL)hasActionUrlVerb;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setActionUrlComponent:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLogoId:(NSString *)arg1 ;
@end

