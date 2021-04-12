/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPSearchFeedbackContext, GEORPSearchFeedbackCorrections;

@interface GEORPSearchFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPSearchFeedbackContext* _context;
	GEORPSearchFeedbackCorrections* _corrections;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_context : 1;
		unsigned read_corrections : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_context : 1;
		unsigned wrote_corrections : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) GEORPSearchFeedbackContext * context; 
@property (nonatomic,readonly) BOOL hasCorrections; 
@property (nonatomic,retain) GEORPSearchFeedbackCorrections * corrections; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEORPSearchFeedbackContext *)context;
-(void)setContext:(GEORPSearchFeedbackContext *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readContext;
-(void)_readCorrections;
-(GEORPSearchFeedbackCorrections *)corrections;
-(void)setCorrections:(GEORPSearchFeedbackCorrections *)arg1 ;
-(BOOL)hasContext;
-(BOOL)hasCorrections;
@end

