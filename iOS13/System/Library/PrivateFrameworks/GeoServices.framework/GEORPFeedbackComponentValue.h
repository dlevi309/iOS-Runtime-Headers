/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFeedbackConversation, GEORPFeedbackNotification, GEORPFeedbackOverview;

@interface GEORPFeedbackComponentValue : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPFeedbackConversation* _conversation;
	GEORPFeedbackNotification* _notification;
	GEORPFeedbackOverview* _overview;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_conversation : 1;
		unsigned read_notification : 1;
		unsigned read_overview : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_conversation : 1;
		unsigned wrote_notification : 1;
		unsigned wrote_overview : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) GEORPFeedbackNotification * notification; 
@property (nonatomic,readonly) BOOL hasOverview; 
@property (nonatomic,retain) GEORPFeedbackOverview * overview; 
@property (nonatomic,readonly) BOOL hasConversation; 
@property (nonatomic,retain) GEORPFeedbackConversation * conversation; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEORPFeedbackNotification *)notification;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNotification:(GEORPFeedbackNotification *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readNotification;
-(BOOL)hasNotification;
-(void)_readOverview;
-(void)_readConversation;
-(GEORPFeedbackOverview *)overview;
-(GEORPFeedbackConversation *)conversation;
-(void)setOverview:(GEORPFeedbackOverview *)arg1 ;
-(void)setConversation:(GEORPFeedbackConversation *)arg1 ;
-(BOOL)hasOverview;
-(BOOL)hasConversation;
@end

