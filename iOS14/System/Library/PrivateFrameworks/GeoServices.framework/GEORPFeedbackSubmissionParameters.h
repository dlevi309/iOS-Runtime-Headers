/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEORPFeedbackCommonContext, GEORPFeedbackCommonCorrections, GEORPFeedbackDetails;

@interface GEORPFeedbackSubmissionParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _clientSubmissionUuid;
	GEORPFeedbackCommonContext* _commonContext;
	GEORPFeedbackCommonCorrections* _commonCorrections;
	GEORPFeedbackDetails* _details;
	NSString* _parentFeedbackId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_clientSubmissionUuid : 1;
		unsigned read_commonContext : 1;
		unsigned read_commonCorrections : 1;
		unsigned read_details : 1;
		unsigned read_parentFeedbackId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasClientSubmissionUuid; 
@property (nonatomic,retain) NSString * clientSubmissionUuid; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasDetails; 
@property (nonatomic,retain) GEORPFeedbackDetails * details; 
@property (nonatomic,readonly) BOOL hasCommonContext; 
@property (nonatomic,retain) GEORPFeedbackCommonContext * commonContext; 
@property (nonatomic,readonly) BOOL hasCommonCorrections; 
@property (nonatomic,retain) GEORPFeedbackCommonCorrections * commonCorrections; 
@property (nonatomic,readonly) BOOL hasParentFeedbackId; 
@property (nonatomic,retain) NSString * parentFeedbackId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDetails:(GEORPFeedbackDetails *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)hasDetails;
-(id)initWithData:(id)arg1 ;
-(NSString *)clientSubmissionUuid;
-(GEORPFeedbackCommonContext *)commonContext;
-(GEORPFeedbackCommonCorrections *)commonCorrections;
-(NSString *)parentFeedbackId;
-(void)setCommonContext:(GEORPFeedbackCommonContext *)arg1 ;
-(void)setClientSubmissionUuid:(NSString *)arg1 ;
-(void)setCommonCorrections:(GEORPFeedbackCommonCorrections *)arg1 ;
-(void)setParentFeedbackId:(NSString *)arg1 ;
-(BOOL)hasCommonContext;
-(BOOL)hasClientSubmissionUuid;
-(BOOL)hasCommonCorrections;
-(BOOL)hasParentFeedbackId;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(GEORPFeedbackDetails *)details;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

