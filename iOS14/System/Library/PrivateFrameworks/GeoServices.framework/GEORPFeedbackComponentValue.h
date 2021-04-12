/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFeedbackConversation, GEORPFeedbackNotification, GEORPFeedbackOverview, GEORPPoiEnrichment;

@interface GEORPFeedbackComponentValue : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPFeedbackConversation* _conversation;
	GEORPFeedbackNotification* _notification;
	GEORPFeedbackOverview* _overview;
	GEORPPoiEnrichment* _poiEnrichment;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_conversation : 1;
		unsigned read_notification : 1;
		unsigned read_overview : 1;
		unsigned read_poiEnrichment : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) GEORPFeedbackNotification * notification; 
@property (nonatomic,readonly) BOOL hasOverview; 
@property (nonatomic,retain) GEORPFeedbackOverview * overview; 
@property (nonatomic,readonly) BOOL hasConversation; 
@property (nonatomic,retain) GEORPFeedbackConversation * conversation; 
@property (nonatomic,readonly) BOOL hasPoiEnrichment; 
@property (nonatomic,retain) GEORPPoiEnrichment * poiEnrichment; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setNotification:(GEORPFeedbackNotification *)arg1 ;
-(id)init;
-(GEORPFeedbackNotification *)notification;
-(id)jsonRepresentation;
-(GEORPFeedbackOverview *)overview;
-(GEORPPoiEnrichment *)poiEnrichment;
-(void)setOverview:(GEORPFeedbackOverview *)arg1 ;
-(void)setConversation:(GEORPFeedbackConversation *)arg1 ;
-(BOOL)hasOverview;
-(void)setPoiEnrichment:(GEORPPoiEnrichment *)arg1 ;
-(BOOL)hasConversation;
-(BOOL)hasPoiEnrichment;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEORPFeedbackConversation *)conversation;
-(id)description;
-(BOOL)hasNotification;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

