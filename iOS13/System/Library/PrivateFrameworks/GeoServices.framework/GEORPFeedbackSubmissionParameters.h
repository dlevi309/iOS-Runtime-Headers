/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_clientSubmissionUuid : 1;
		unsigned wrote_commonContext : 1;
		unsigned wrote_commonCorrections : 1;
		unsigned wrote_details : 1;
		unsigned wrote_type : 1;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(GEORPFeedbackDetails *)details;
-(void)setDetails:(GEORPFeedbackDetails *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readClientSubmissionUuid;
-(void)_readDetails;
-(void)_readCommonContext;
-(void)_readCommonCorrections;
-(NSString *)clientSubmissionUuid;
-(GEORPFeedbackCommonContext *)commonContext;
-(GEORPFeedbackCommonCorrections *)commonCorrections;
-(void)setClientSubmissionUuid:(NSString *)arg1 ;
-(void)setCommonContext:(GEORPFeedbackCommonContext *)arg1 ;
-(void)setCommonCorrections:(GEORPFeedbackCommonCorrections *)arg1 ;
-(BOOL)hasClientSubmissionUuid;
-(BOOL)hasDetails;
-(BOOL)hasCommonContext;
-(BOOL)hasCommonCorrections;
@end

